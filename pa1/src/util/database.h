
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
    inline string& getString(const int& n){
      return _data[n];
    }
    // get stringlist size
    inline int& getSize(){
      return _size;
    }
    // output
    void write(const int* data, char* file);

    inline bool compareLarge(const int& lhs, const int& rhs){
      return (_data[lhs] > _data[rhs]);
    }

  private:
    inline string int2string(const int& n){
      stringstream ss;
      ss << n;
      return ss.str();
    }

    int _size;
    string* _data;
};
#endif
