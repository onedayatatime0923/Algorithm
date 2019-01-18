#include "aStar.h"



PointVec AStar::findPath(Point& s, Point& t) {
    Vertex* current = nullptr;
    openSet.insert(new Vertex(t));

    while (!openSet.empty()) {
        current = *openSet.begin();
        for (auto v : openSet) {
            if (v->score() <= current->score()) {
                current = v;
            }
        }

        if (current->coordinate() == s) { break; }

        closedSet.insert(current);
        openSet.erase(std::find(openSet.begin(), openSet.end(), current));

        for (uint i = 0; i < directions; ++i) {
            Point newCoordinates(current->coordinate() + _direction[i]);
            if (detectCollision(newCoordinates) || findVertexOnSet(closedSet, newCoordinates)) {
                continue;
            }

            uint totalCost = current->G() + _edge.cost(current->coordinate(), _direction[i]);


            Vertex* successor = findVertexOnSet(openSet, newCoordinates);
            if (successor == nullptr) {
                successor = new Vertex(newCoordinates, current);
                successor->setG(totalCost);
                successor->setH(manhattan(successor->coordinate(), s));
                openSet.insert(successor);
            }
            else if (totalCost < successor->G()) {
                successor->setParent(current);
                successor->setG(totalCost);
            }
        }
    }

    PointVec path;
    while (current->parent() != nullptr) {
        path.push_back(current->coordinate());
        _edge.use(current->coordinate(), current->parent()->coordinate() - current->coordinate());
        current = current->parent();
    }
    path.push_back(current->coordinate());

    releaseVertexs(openSet);
    releaseVertexs(closedSet);

    return path;
}

bool AStar::detectCollision(Point& co) {
    if (co[0] < 0 || co[0] >= _size[0] || co[1] < 0 || co[1] >= _size[1])
        return true;
    return false;
}

Vertex* AStar::findVertexOnSet(VertexSet& vertexs, Point& co) {
    for (auto v : vertexs) {
        if (v->coordinate() == co) { return v; }
    }
    return nullptr;
}

void AStar::releaseVertexs(VertexSet& vertexs) {
    for (auto it = vertexs.begin(); it != vertexs.end();) {
        delete *it;
        it = vertexs.erase(it);
    }
}


