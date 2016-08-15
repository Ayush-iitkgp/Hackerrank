#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
        cin>>arr[i];
    
    vector<int> l(n);
    l[0] = 1;
    for(int i =1;i<n;i++){
        int maxi = 0;
        for(int j = i-1;j>=0;j--){
            if(arr[j]<arr[i] && maxi<l[j])
                maxi = l[j];
        }
        
        l[i] = 1+maxi;
        
    }
    int maximum = l[0];
    for(int i =1;i<n;i++){
        if(maximum<l[i])
            maximum = l[i];
        
    }
    cout<<maximum;
        
        
    return 0;
}
