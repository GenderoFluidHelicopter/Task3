#include "count.h"
Count::Count(const string& arguments) {
    args.push_back(arguments);
    amount = 0;
}


void Count::parse_args() {
    word = args[0];
}


void Count::get_words(const string &str) {
    string new_word;

    for(char it : str){
        if(it != ' ' && it!= '\n'){
            new_word += it;
        }
        else{
            words.push_back(new_word);
            new_word = "";
        }
    }
}


void Count::do_work(vector<string> txt) {
    parse_args();
    for (const auto& it : txt){
        get_words(it);
    }
    for (const auto& it : words){
        if (it == word){
            amount++;
        }
    }
}


vector<string> Count::get_result() {
    string s = to_string(amount);
    text.push_back(s);
    return text;
}