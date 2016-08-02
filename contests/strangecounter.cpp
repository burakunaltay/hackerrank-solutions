#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long input = 0;//it is less then 10^12 so may int is enough ?
    std::cin>>input;

    unsigned long long increment = log2(input);//need to floor this so int

    int targetlevel = 0;
    while (input >>= 1) ++targetlevel;

    if(increment < 1)
    {
        std::cout<<3;
        return 0;
    }
    targetlevel--;
    increment--;
    
    auto a1 = (pow(2, targetlevel) - 1;
    auto a2 = 4 + 6*a1;
   
    
    unsigned long long rly = (4 + 6*(pow(2, targetlevel)-1)) - input;
    printf("%lld", rly);

    return 0;
}
