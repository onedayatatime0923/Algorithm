
#include "../util/database.h"

class QuickSorter{
  public:
    QuickSorter();
    ~QuickSorter();
    int* sort(DataBase& database);

  private:
    void swap(const int& i, const int& j);
    void sort(const int& i, const int& j);
    void partition(const int& i, const int& j, int& q);


    DataBase*  _database;
    int        _size;
    int*       _order;
};

inline void QuickSorter::swap(const int& i, const int& j){
  int tmp = _order[i];
  _order[i] = _order[j];
  _order[j] = tmp;
}
