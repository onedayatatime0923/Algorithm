
#include "../util/database.h"

class QuickSorter{
  public:
    QuickSorter();
    ~QuickSorter();
    int* sort(DataBase& database);

  private:
    void sort(const int& i, const int& j);
    void partition(const int& i, const int& j);


    DataBase*  _database;
    int        _size;
    int*       _order;
};

