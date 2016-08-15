#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        int n,w;
        cin>>n>>w;
        vector<int> a(n),m(w+1);
        
        for(int i =0;i<n;i++)
            cin>>a[i];
        
        m[0] = 0;
        for(int i =1;i<=w;i++){
            int maxi = 0;
            for(int j=0;j<n;j++){
                if(a[j]<=i && maxi <= m[i-a[j]]){
                    if(!(a[j] + m[i-a[j]] >w))
                        maxi = a[j] + m[i-a[j]];
                        
                }
            }
            m[i] = maxi;
        }
        
        cout<<m[w]<<endl;
        
        
        
    }
    
    return 0;
}
