#include "testlib.h"
#include "constraints.hpp"

#include <iostream>

using namespace std;

const int RANDOM_CASES = 10;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int i = 0; i < RANDOM_CASES; i++){
        int A = rnd.next(MIN_A, MAX_A);
        int B = rnd.next(MIN_B, MAX_B);
        ofstream of(format("10_random_%02d.in", i + 1).c_str());
        of << A << " " << B << endl;
        of.close();
    }
    {
        int A = MIN_A;
        int B = MIN_B;
        ofstream of("20_min_01.in");
        of << A << " " << B << endl;
        of.close();
    }
    return 0;
}