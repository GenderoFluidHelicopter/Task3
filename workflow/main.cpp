#include <iostream>
#include <string>
#include <fstream>
#include <utility>
#include <vector>
#include <list>
#include "workflow.h"
#include <typeinfo>

using namespace std;



int main() {
    WorkflowExecutor w1("config.txt");
    w1.execute();
    return 0;
}