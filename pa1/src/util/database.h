
#ifndef _DEFINE_DATABASE_
#define _DEFINE_DATABASE_

#include <vector>
#include <sstream>
#include "parser.h"


class DataBase{
	public:
    // constructor
    DataBase(char*  inputFile);
    // destructor
    ~DataBase();
    // get order
    string operator() (const int& n);
    // get stringlist content
    string& getString(const int& n);
    // get stringlist size
    int& getSize();
    // output
    void write(const int* data, char* file);

    bool largerthan(const int& lhs, const int& rhs);

    int* sort(int* sortFunc(string* data, int& size));

  private:
    inline string int2string(const int& n);

    int _size;
    string* _data;
};

inline string DataBase::operator() (const int& n){
  return _data[n]+ ' ' + this->int2string(n);
}
inline string& DataBase::getString(const int& n){
  return _data[n];
}

inline int& DataBase::getSize(){
  return _size;
}

inline bool DataBase::largerthan(const int& lhs, const int& rhs){
  return (_data[lhs] > _data[rhs]);
}
inline string DataBase::int2string(const int& n){
  stringstream ss;
  ss << n;
  return ss.str();
}

inline int* DataBase::sort(int* sortFunc(string* data, int& size)){
    return sortFunc(_data, _size);
}
#endif
