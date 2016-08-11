#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        
        int M,n;
        cin>>M>>n;
        vector<int> v(n);
        map<int,int> m;
        for(int i =0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
            
        }
        
        for(int i = 0;i<n;i++){
            if( m[M-v[i]] > 0){
                cout<<i+1<<" ";
                
                for(int j = 0;j<n;j++){
                    if(j==i)
                        continue;
                    
                    else if(v[j] == M-v[i]){
                        cout<<j+1<<" ";
                        break;
                    }
                }
                
                break;
            }
        }
        cout<<endl;
            
            
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
