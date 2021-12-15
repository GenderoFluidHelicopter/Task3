#ifndef HASH_TABLE_FACTORY_H
#define HASH_TABLE_FACTORY_H
#include "worker.h"


class Factory {
public:
    IWorker* createWorker(const string& Worker_name, const string& arguments);
};


#endif //HASH_TABLE_FACTORY_H