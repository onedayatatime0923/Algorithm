
#ifndef _DEFINE_TABLE_
#define _DEFINE_TABLE_

#include "global.hpp"

template <class DataType>
class Table{
public:
    Table                           (const int& n);
    ~Table                          ();
    void                initialize  (const int&, const int&);
    void                print       ();
    inline int&       operator()  (const int&, const int&);
    inline const int& operator()  (const int&, const int&) const;
private:
    const int   _n;
    int**     _data;
};

template <class DataType>
inline int& Table<DataType>::operator() (const int& i, const int& j){
    return _data[i][j - i + 1];
};

template <class DataType>
inline const int& Table<DataType>::operator() (const int& i, const int& j) const{
    return _data[i][j - i + 1];
};
#endif
