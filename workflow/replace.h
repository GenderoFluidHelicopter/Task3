#ifndef HASH_TABLE_REPLACE_H
#define HASH_TABLE_REPLACE_H
#include "worker.h"

class Replace : public IWorker{
private:
    string word1, word2;


    vector<string> words;


    void get_words(const string& str);


    string replace_words();


    void parse_args() override;
public:
    explicit Replace(const string& arguments);


    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};
#endif
