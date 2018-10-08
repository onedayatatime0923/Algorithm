
#include "../util/database.h"

class HeapSorter{
  public:
    HeapSorter(){};
    int* sort(DataBase& database);

    DataBase* database;
};
