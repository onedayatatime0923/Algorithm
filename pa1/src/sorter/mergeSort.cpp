
#include "mergeSort.h"

int* MergeSorter::sort(DataBase& database){
  _database = &database;
  int size = database.getStringSize();
  int* order = this->sort(0, size-1);
  return order;
};

int* MergeSorter::sort(const int& i, const int& j){
  if( i < j ){
    int k = (i + j) / 2;
    int* array = this->merge(this->sort(i, k), k-i, this->sort(k+1,j), j-k-1);
    return array;
  }
  else{
    int* array = new int(i);
    return array;
  };
};

int* MergeSorter::merge(int* a, const int& aLen, int* b, const int& bLen){
  int aIndex = 0;
  int bIndex = 0;
  int* array = new int[aLen + bLen];
  for(int i = 0; i < aLen + bLen; ++i){
    if( _database->compareLarge(b[bIndex], a[aIndex]) || bIndex == bLen){
      array[i] = a[aIndex];
      ++aIndex;
    }
    else{
      array[i] = b[bIndex];
      ++bIndex;
    };
  };
  delete[] a;
  delete[] b;
  return array;
};