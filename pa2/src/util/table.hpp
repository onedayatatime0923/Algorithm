
#ifndef _DEFINE_TABLE_
#define _DEFINE_TABLE_

#include "utilGlobal.hpp"

template <class DataType>
class Table{
public:
    Table                           (const int& n);
    ~Table                          ();
    void                print       ();
    inline DType& operator()  (const int&, const int&);
    inline const DType& operator()  (const int&, const int&) const;
private:
    const int   _n;
    DType**     _data;
};

template <class DataType>
inline DType& Table<DataType>::operator() (const int& i, const int& j){
    return _data[i][j - i + 1];
};

template <class DataType>
inline const DType& Table<DataType>::operator() (const int& i, const int& j) const{
    return _data[i][j - i + 1];
};
#endif
