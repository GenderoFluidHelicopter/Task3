#ifndef HASH_TABLE_WORKFLOWEXECUTOR_H
#define HASH_TABLE_WORKFLOWEXECUTOR_H

#include "factory.h"
#include "reader.h"

class WorkflowExecutor {
private:
    IWorker* worker{};
    list<pair<string, string>> priority;
    string filename;
    vector<string> text;
    Factory fact;

    void parse_config();
public:
    explicit WorkflowExecutor(const string& file);


    void execute();

};


#endif //HASH_TABLE_WORKFLOWEXECUTOR_H