#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len = 0;
    std::cin>>len;
    
    int nIndex = 0;
    int inputArr[100] = {0};
    
    while(std::cin>>nIndex)
        inputArr[nIndex]++;

    int max = 0;
    int maxIndex = 0;
    for(int i = 0; i < 100; ++i)
        {
        if(inputArr[i] > max)
            {
            max = inputArr[i];  
            maxIndex = i;
        }
            
    }
     
    std::cout<<(len-max);
        
    
    return 0;
}
