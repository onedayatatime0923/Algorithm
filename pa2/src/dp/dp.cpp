
#include "dp.hpp"

void DP::construct(ChordTable& chordTable, Table<int>& cost, Table<int>& record, const int& n){
    for(int j = 0;j < 2*n;++j){
        int k = chordTable.get(j);
        for(int i = 0;i < j;++i){
            if(i <= k && k<= j - 1 and (cost(i,k-1) + 1 + cost(k+1,j-1)) > cost(i,j-1)){
                cost(i,j) = cost(i,k-1) + 1 + cost(k+1,j-1);
                record(i,j) = k;
            }
            else{
                cost(i,j) = cost(i,j-1);
                record(i,j) = -1;
            }
        }
    }
};
void DP::find(Table<int>& record, const int& i, const int& j, ChordSet& answer){
    int k = record(i,j);
    if(k == -1){
        find(record, i, j - 1, answer);
    }
    else if(k >= 0){
        if(j < k) answer.push1(j,k);
        else answer.push1(k,j);
        find(record, i, k - 1, answer);
        find(record, k + 1, j - 1, answer);
    }

};
