#include "dump.h"
Dump::Dump(const string& arguments) {
    for (char i : arguments){
        args[0].push_back(i);
    }
}


void Dump::parse_args() {
    string filename = args[0];
    file.open(filename, ofstream::out);
    if (!file.is_open()) throw runtime_error("Error: file couldn't be read");
}


void Dump::do_work(vector<string> txt) {
    parse_args();
    for (const auto& it : txt){
        text.push_back(it);
        file << it;
    }
    file.close();
}


vector<string> Dump::get_result() {
    return text;
}
