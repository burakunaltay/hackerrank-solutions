
#include <string>
#include <iostream>

using namespace std;


int main(){
    string s;
    cin >> s;

    int counter = 0;

    for(auto c: s)
    {
        if(c <= 'Z')
            counter++;
    }

    std::cout<<counter+1;

    return 0;
}
