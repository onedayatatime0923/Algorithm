
#include "mergeSort.h"

int* MergeSorter::sort(DataBase& database){
  int size = database.getStringSize();
  int* order = new int[size];
  order[0] = 0;
  for(int i = 1;i < size; ++i){
    int j;
    for(j = i - 1; j >= 0; --j){
      if( database.compareLarge(order[j],i)){
        order[j+1] = order[j];
      }
      else{
        break;
      }
    };
    order[j+1] = i;
  }
  return order;
};

int* MergeSorter::sort(const int& i, const int& j){
  if( i < j ){
    int k = (i + j) / 2;
    int* array = this->merge(this->sort(i, k), this->sort(k+1,j));
    return array;
  }
  else{
    int* array = new int(i);
    return array;
  };
};

int* MergeSorter::merge(int* i, int* j){
};
