
#include "chordSet.hpp"

Chord::Chord(const int& start): _start(start), _end(0){};
Chord::Chord(const int& start, const int& end): _start(start), _end(end){};

void Chord::print() const{
    printf("%d %d\n", _start, _end);
};
void Chord::write(FILE* file) const{
    fprintf(file, "%d %d\n", _start, _end);
};
void ChordSet::push1(const int& x1, const int& x2){
    _data.insert(Chord(x1,x2));
};
void ChordSet::push2(const int& x1, const int& x2){
    _data.insert(Chord(x1,x2));
    _data.insert(Chord(x2,x1));
};
const int& ChordSet::get(const int& x) const{
    auto it = _data.find(x);
    return it->get();
};
void ChordSet::print(){
    printf("%lu\n", _data.size());
    for(auto i = _data.begin();i != _data.end();++i){
        i->print();
    }
};
void ChordSet::write(FILE* file){
    fprintf(file, "%lu\n", _data.size());
    for(auto i = _data.begin();i != _data.end();++i){
        i->write(file);
    }
};
