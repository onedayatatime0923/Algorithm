
#include "io.hpp"

void IO::read(const string& fileName, int& n, ChordTable& chordTable){
    FILE* file;
    if((file = fopen(fileName.c_str(), "r")) == NULL) {
        printf("No such file\n");
        exit(-1);
    }
    fscanf(file, "%d\n", &n);
    n /= 2;
    int l,r;
    chordTable.set(n);
    for(int i = 0;i < n;++i){
        fscanf(file, "%d %d", &l, &r);
        chordTable.push(l,r);
    }
    fclose(file);
};
void IO::write(const string& fileName, ChortVec& answer){
    FILE* file;
    file = fopen(fileName.c_str(), "w");
    answer.write(file);
    fclose(file);
};
