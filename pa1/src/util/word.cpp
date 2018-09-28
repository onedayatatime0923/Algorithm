
#include <vector>
#include "word.h"

Word::Word(const int& value){
  _appearingOrder = new vector<int>;
  _appearingOrder->push_back(value);
};

Word::Word(const Word &p2){
  _appearingOrder = p2._appearingOrder;
  p2._appearingOrder = 0;
}

Word::~Word(){
  if (_appearingOrder != 0){
    delete _appearingOrder;
  }
}

int Word::size() const{
  return (*_appearingOrder).size();
}

int Word::value() const{
  return (*_appearingOrder)[0];
}

int& Word::operator[] (const int& n){
  return (*_appearingOrder)[n];
};

void Word::add(const int& value){
  _appearingOrder->push_back(value);
}

void Word::swap(Word& word){
  vector<int>* tmp = this->_appearingOrder;
  this->_appearingOrder = word._appearingOrder;
  word._appearingOrder = tmp;
};
