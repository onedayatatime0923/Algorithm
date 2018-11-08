
#include "chordTable.hpp"

void ChordTable::set(const int& n){
    _n = n;
    _data = new int[2 * n];
};
void ChordTable::push(const int& x1, const int& x2){
    _data[x1] = x2;
    _data[x2] = x1;
};
const int& ChordTable::get(const int& x) const{
    return _data[x];
};
void ChordTable::print(){
    printf("CHORD TABLE: %d\n", 2 * _n);
    for(int i = 0;i < 2 * _n;++i){
        printf("  %d, %d\n", i, _data[i]);
    }
};
