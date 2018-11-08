
#include "io.hpp"

void IO::read(const string& fileName, int& n, ChordSet& chordSet){
    FILE* file;
    if((file = fopen(fileName.c_str(), "r")) == NULL) {
        printf("No such file\n");
        exit(-1);
    }
    fscanf(file, "%d\n", &n);
    n /= 2;
    int l,r;
    for(int i = 0;i < n;++i){
        fscanf(file, "%d %d", &l, &r);
        chordSet.push2(l,r);
    }
    fclose(file);
};
void IO::write(const string& fileName, ChordSet& answer){
    FILE* file;
    file = fopen(fileName.c_str(), "w");
    answer.write(file);
    fclose(file);
};
