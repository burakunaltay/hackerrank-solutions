#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
/* Head ends here */

int pairs(vector < int > a,int k) {
   
    std::unordered_map<int, int> map;

    for(auto i: a)
    {
        int val;
        if(i >= k)
            val = i-k;
        else
            val = k+i;

        //std::cout<<i<<" "<<val<<std::endl;

        std::pair<int, int> pair1(i, val);
        map.insert(pair1);

    }

    //std::cout<<"K is "<< k <<std::endl;
    int res = 0;
    for(auto i: a)
    {
        int val;
        if(i >= k)
            val = i-k;
        else
            val = k+i;

        if(map.find(val) != map.end())
        {
            //std::cout<<i<<" "<<val<<std::endl;
            map.erase(val);
            res++;
        }
    }

    return res;
    
}

/* Tail starts here */
int main() {
    int res;
    
    int _a_size,_k;
    cin >> _a_size>>_k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = pairs(_a,_k);
    cout << res;
    
    return 0;
}
