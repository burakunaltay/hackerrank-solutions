std::sort(a.begin(), a.end());
    
    int i=0,j=1,count=0;
    
    while(j < a.size()) {
        auto diff = a[j] - a[i];
        
        if (diff == k) {
            count++;
            j++;
        } else if (diff > k) {
            i++;
        } else if (diff < k) {
            j++;
        }
    }
    
    return count;
