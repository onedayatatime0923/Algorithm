
#include "chordVec.hpp"

Chord::Chord(const int& start, const int& end): _start(start), _end(end){};

void Chord::print() const{
    printf("%d %d\n", _start, _end);
};
void Chord::write(FILE* file) const{
    fprintf(file, "%d %d\n", _start, _end);
};
void ChortVec::push(const int& x1, const int& x2){
    if(x1 < x2){
        _data.push_back(Chord(x1,x2));
    }
    else{
        _data.push_back(Chord(x2,x1));
    }
};
void ChortVec::set(){
    sort(_data.begin(), _data.end());
}
void ChortVec::print(){
    printf("%lu\n", _data.size());
    for(unsigned i = 0;i < _data.size();++i){
        _data[i].print();
    }
};
void ChortVec::write(FILE* file){
    fprintf(file, "%lu\n", _data.size());
    for(unsigned i = 0;i < _data.size();++i){
        _data[i].write(file);
    }
};
