
#include "insertionSort.h"

int* InsertionSorter::sort(DataBase& database){
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
