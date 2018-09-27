
#include <map>
#include "database.h"


void DataBase::compress(){
  map<int, int, IntCompare> wordMap(_parser);
  for (int i = 0;i < this->QuerySize(); ++i){
    map<int, int, IntCompare>::iterator iter = wordMap.find(i);
    if(iter != wordMap.end()){
      _wordlist[iter->second].add(i);
    }
    else{
      wordMap.insert(pair<int, int>(i, _wordlist.size()));
      _wordlist.push_back(Word(i));
    }
  }
}

