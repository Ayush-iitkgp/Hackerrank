#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> a(n),c(n),d(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    c[0] = 1;d[n-1] = 1;
    for(int i =1;i<n;i++){
        if(a[i]>a[i-1])
            c[i] = c[i-1]+1;
        else{
            c[i] = 1;
        }
        
        if(a[n-i-1]>a[n-i])
            d[n-i-1] = d[n-i] + 1;
        else
            d[n-i-1] = 1;
    }
            
    int sum = 0;
    for(int i = 0;i<n;i++)
        sum +=max(c[i],d[i]);
    
    cout<<sum;
        
    return 0;
}
