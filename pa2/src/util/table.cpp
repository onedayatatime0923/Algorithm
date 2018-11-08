
#include "table.hpp"

template <class DataType>
Table<DataType>::Table(const int& n): _n(n){
    _data = new DType[2 * n + 1];
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
Table<DataType>::print(){
    for(int i = 0;i < 2 * n + 1;++i){
        for(int j = 0;i < 2 * n + 1;++i){
        *(_data + i) = new DType[2 * n + 1 - i];
    }

};
