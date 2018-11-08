
#ifndef _DEFINE_TABLE_
#define _DEFINE_TABLE_

#include "utilGlobal.hpp"

template <class DataType>
class Table{
public:
    Table                           (const int& n);
    ~Table                          ();
    void                print       ();
    inline const DType& operator()  (const int&, const int&);
private:
    const int   _n;
    DType**     _data;
};

template <class DataType>
const DType& Table<DataType>::operator() (const int& i, const int& j){
    return _data[i,j - i + 1];
};

#endif
