
#ifndef _DEFINE_DATABASE_
#define _DEFINE_DATABASE_

#include <vector>
#include "parser.h"
#include "word.h"


class DataBase{
	public:
    // constructor
    DataBase(char*  inputFile);
    // destructor
    ~DataBase();
    // get order
    int& operator[] (const int& n);
    // get wordlist content
    Word& getWord(const int& n);
    // get wordlist size
    int getWordSize();
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
    void compress();


    AlgParser* _parser;
    vector<Word> _wordlist;
    int* _order;
};
#endif
