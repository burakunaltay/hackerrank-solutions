#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void findMultiples(long long val)
{

	val = val - 1;

	long long mult3 = val/3;
	long long mult5 = val/5;
	long long mult15 = val/15;

	mult3 = 3 * ((mult3*(mult3+1))/2);
	mult5 = 5 * ((mult5*(mult5+1))/2);
	mult15 = 15 * ((mult15*(mult15+1))/2);

	std::cout<<(mult3 + mult5 - mult15)<<std::endl;

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	long long input = 0;    
    long long numOfTestCases = 0;
    
    //std::cin>>numOfTestCases;
    
    scanf("%lld", &numOfTestCases);
    
    if(numOfTestCases < 1)
        return 0;

    long long counter = 0;
    
    while(counter < numOfTestCases)
        {
        //std::cin>>input;
        scanf("%lld", &input);
        //std::cout<<input<<std::endl;
        if(input>3)
			findMultiples(input);
        
        counter++;
    }
        
    
 
    return 0;
}
