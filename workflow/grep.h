#ifndef HASH_TABLE_GREP_H
#define HASH_TABLE_GREP_H

#include "worker.h"
class Grep : public IWorker{
private:

    string word;
    void parse_args() override;
public:
    explicit Grep(const string& arguments);

    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};


#endif
