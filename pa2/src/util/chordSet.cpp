
#include "chordSet.hpp"

Chord::Chord(const DType& start): _start(start), _end(0){};
Chord::Chord(const DType& start, const DType& end): _start(start), _end(end){};

void Chord::print() const{
    printf("  %d -> %d\n", _start, _end);
};
void ChordSet::push(const DType& x1, const DType& x2){
    _data.insert(Chord(x1,x2));
    _data.insert(Chord(x2,x1));
};
const DType& ChordSet::get(const DType& x) const{
    auto it = _data.find(x);
    return it->get();
};
void ChordSet::print(){
    printf("CHORD: \n");
    for(auto i = _data.begin();i != _data.end();++i){
        i->print();
    }
};
