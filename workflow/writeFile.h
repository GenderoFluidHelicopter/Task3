#ifndef HASH_TABLE_WRITEFILE_H
#define HASH_TABLE_WRITEFILE_H
#include "worker.h"

class WriteFile : public IWorker{ //don't work
private:
    vector<string> get_result() override;

    void parse_args() override;
public:
    ofstream file;
    explicit WriteFile(const string& arguments);

    void do_work(vector<string> txt) override;

};


#endif 
