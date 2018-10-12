
#include "quickSort.h"

QuickSorter::QuickSorter(): _order(0){};

QuickSorter::~QuickSorter(){
  if(_order != 0){
    delete[] _order;
    _order = 0;
  }
}

int* QuickSorter::sort(DataBase& database){
  _database = &database;
  _size = database.getSize();
  _order = new int[_size];
  for(int i = 0;i < _size;++i){
    _order[i] = i;
  }
  this->sort(0, _size - 1);
  return _order;
}

void QuickSorter::sort(const int& i, const int& j){
  if(i < j){
    int q;
    this->partition(i, j, q);
    this->sort(i, q);
    this->sort(q + 1, j);
  }
}

void QuickSorter::partition(const int& i, const int& j, int& q){
  int key = _order[i];
  int p = i - 1;
  q = j + 1;
  while(true){
    for(++p;_database->largerthan(key, _order[p]);++p){
    };
    for(--q;_database->largerthan(_order[q], key);--q){
    };
    if(p < q){
      this->swap(p, q);
    }
    else break;
  }
}


