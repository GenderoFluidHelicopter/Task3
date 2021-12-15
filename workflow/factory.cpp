#include "factory.h"
#include "readFile.h"
#include "writefile.h"
#include "grep.h"
#include "sort.h"
#include "replace.h"
#include "dump.h"
#include "count.h"



unordered_map<string, int> worker_names({ {"readfile", 1}, {"writefile", 2},
                                         {"grep", 3}, {"sort", 4}, {"replace", 5},
                                         {"dump", 6}, {"count", 7}
    });
IWorker* Factory::createWorker(const string& worker_name, const string& arguments) {
    IWorker* worker;
    switch (worker_names[worker_name]) {
    default:
        throw runtime_error("There is no worker like that");
    case 1:
        worker = new ReadFile(arguments);
        break;
    case 2:
        worker = new WriteFile(arguments);
        break;
    case 3:
        worker = new Grep(arguments);
        break;
    case 4:
        worker = new Sort(arguments);
        break;
    case 5:
        worker = new Replace(arguments);
        break;
    case 6:
        worker = new Dump(arguments);
        break;
    case 7:
        worker = new Count(arguments);
        break;
    }
    return worker;
}