
int pairs(vector < int > a,int k) {
  
    unordered_set<int> set;
    
    int n, val;
    
    for (auto i: a)
        set.insert(i);
    
    int ans = 0;
    for (auto j: set)
        if (set.find(j + k) != set.end()) ans++;

    return ans;
    
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
