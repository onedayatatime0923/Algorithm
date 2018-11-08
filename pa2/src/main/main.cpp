
#include "mainGlobal.hpp"
#include "../util/chordSet.hpp"

int main(int argc, const char **argv){
    ChordSet chordSet;
    chordSet.push(1,2);
    chordSet.push(0,4);
    chordSet.push(3,5);
    chordSet.print();
    // printf(" %d\n", chordSet.get(1));
    // printf(" %d\n", chordSet.get(2));
    // printf(" %d\n", chordSet.get(0));
    // printf(" %d\n", chordSet.get(4));
    // printf(" %d\n", chordSet.get(3));
    // printf(" %d\n", chordSet.get(5));
}
