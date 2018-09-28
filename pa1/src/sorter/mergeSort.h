
#include "../util/database.h"

class MergeSorter{
  public:
    MergeSorter(){};
    int* sort(DataBase& database);
  private:
    int* sort(const int& i, const int& j);
    int* merge(int* a, const int& aLen, int* b, const int& bLen);
  DataBase* _database;
};
