
#include "net.h"

int& Net::operator[] (const int i) {
    if(i == 0)      return _p1[0];
    else if(i == 1) return _p1[1];
    else if(i == 2) return _p2[0];
    else            return _p2[1];
}
const int& Net::operator[] (const int i)const { 
    if(i == 0)      return _p1[0];
    else if(i == 1) return _p1[1];
    else if(i == 2) return _p2[0];
    else            return _p2[1];
}

bool Net::operator < (const Net& l) {
    return _boundingBoxNum < l._boundingBoxNum;
}
bool Net::operator < (const Net& l)const { 
    return _boundingBoxNum < l._boundingBoxNum;
}


