#include <iostream>
#include "testlib.h"
#include "constraints.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    const int A = inf.readInt(MIN_A, MAX_A, "A");
    inf.readSpace();
    const int B = inf.readInt(MIN_B, MAX_B, "B");
    inf.readEoln();
    inf.readEof();
    return 0;
}