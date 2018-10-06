
#ifndef _DEFINE_DATABASE_
#define _DEFINE_DATABASE_

#include <vector>
#include "parser.h"


class DataBase{
	public:
    // constructor
    DataBase(char*  inputFile);
    // get order
    string operator() (const int& n);
    // get stringlist content
    string getString(const int& n);
    // get stringlist size
    int getSize();
    // output
    void write(const int* data, char* file);

    bool compareLarge(const int& lhs, const int& rhs);

  private:
    string int2string(const int& n);

    vector<string> _data;
};
#endif
