
#ifndef _DEFINE_DATABASE_
#define _DEFINE_DATABASE_

#include <vector>
#include "parser.h"
#include "word.h"


class DataBase{
	public:
    // constructor
    DataBase(char*  inputFile);
    // get order
    string operator() (const int& n);
    // get stringlist content
    string getString(const int& n);
    // get stringlist size
    int getStringSize();
    // get string line number
    int getLineNumber(const int& n);
    // get string line number
    int getWordOrder(const int& n);

    bool compareLarge(const int& lhs, const int& rhs);

  private:
    string int2string(const int& n);

    AlgParser* _parser;
};
#endif
