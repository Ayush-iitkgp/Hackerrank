#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<unsigned int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
        //cout<<a[i]<<endl;
        bitset<32> x(a[i]);
        unsigned int num = 0;
        for(int j=0;j<32;j++){
            //cout<<x[j]<<" ";
            x[j] = x[j]^1;
            //cout<<x[j]<<endl;
            num += (pow(2,j)*x[j]); 
        }
        
        cout<<num<<endl;
            
        
        
    }
        
    
    return 0;
}
