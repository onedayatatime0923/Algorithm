
#include "table.hpp"

template <class DataType>
Table<DataType>::Table(const int& n): _n(n){
    _data = new DType*[2 * n + 1];
    for(int i = 0;i < 2 * n + 1;++i){
        *(_data + i) = new DType[2 * n + 1 - i];
    }
};

template <class DataType>
Table<DataType>::~Table(){
    for(int i = 0;i < 2 * _n + 1;++i){
        delete [] *(_data + i);
    }
    delete [] _data;
};
template <class DataType>
void Table<DataType>::print(){
    for(int i = 0;i < 2 * _n + 1;++i){
        printf("ROW i = %d\n", i);
        for(int j = -1 + i;j < 2 * _n;++j){
            printf(" %d", _data[i][j - i + 1]);
        }
        printf("\n");
    }

};
template class Table<int>;
