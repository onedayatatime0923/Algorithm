
#include "../util/database.h"

class HeapSorter{
  public:
    HeapSorter();
    ~HeapSorter();
    int* sort(DataBase& database);

  private:
    void swap(const int& i, const int& j);
    void heapify(const int& i);
    void buildHeap();


    DataBase*  _database;
    int        _size;
    int*       _order;
};

inline void HeapSorter::swap(const int& i, const int& j){
  int tmp = _order[i];
  _order[i] = _order[j];
  _order[j] = tmp;
}

