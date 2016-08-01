#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string inputStr;
    std::getline (std::cin,inputStr);

    std::transform(inputStr.begin(), inputStr.end(), inputStr.begin(), ::tolower);
    
    inputStr.erase(std::remove(inputStr.begin(),inputStr.end(),' '),inputStr.end());

    int alphabet[26] = {0};

    for(auto c: inputStr)
    {
        alphabet[c - 'a']++;
    }
   
    bool isPanagram = true;
    for(auto i: alphabet)
    {

        if(i == 0) {
            isPanagram = false;
            break;
        }
    }
    
    if(isPanagram)
        std::cout<<"pangram";
    else
        std::cout<<"not pangram";

    return 0;
}
