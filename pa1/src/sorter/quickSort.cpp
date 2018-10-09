
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
  return _order;
}

void QuickSorter::sort(const int& i, const int& j){
}

void QuickSorter::partition(const int& i, const int& j){

}
