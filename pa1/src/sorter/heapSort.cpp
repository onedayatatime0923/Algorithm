
#include "heapSort.h"

HeapSorter::HeapSorter(): _order(0){};

HeapSorter::~HeapSorter(){
  if(_order != 0){
    delete[] _order;
    _order = 0;
  }
}

int* HeapSorter::sort(DataBase& database){
  _database = &database;
  _size = database.getSize();
  _order = new int[_size];
  this->buildHeap();
  for(int i = _size - 1;i >= 1;--i){
    this->swap(0, i);
    --_size;
    this->heapify(0);
  }
  return _order;
}


void HeapSorter::heapify(const int& i){
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  int largest;
  if(l < _size){
    if(_database->largerthan(_order[l], _order[i])){
      largest = l;
    }
    else largest = i;
  }
  else largest = i;
  if(r < _size){
    if(_database->largerthan(_order[r], _order[largest])){
      largest = r;
    }
  }
  if(largest != i){
    this->swap(i, largest);
    this->heapify(largest);
  };
}

void HeapSorter::buildHeap(){
  for(int i = 0;i < _size;++i){
    _order[i] = i;
  }
  for(int i = (_size/2) - 1;i >= 0;--i){
    this->heapify(i);
  }
}
