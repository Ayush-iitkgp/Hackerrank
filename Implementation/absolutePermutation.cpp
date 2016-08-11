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
        int n,k;
        cin>>n>>k;
        if(k!=0 && n%(2*k)!=0){
            cout<<"-1"<<endl;
        }
        else{
            if(k==0){
                for(int i = 0;i<n;i++)
                    cout<<i+1<<" ";
                cout<<endl;
            }
            else{
                for(int i = 1;i<=n/(2*k);i++){
                    for(int j=(2*i-1)*k+1 ;j<=(2*i-1)*k+k;j++)
                        cout<<j<<" ";
                    for(int j= 2*(i-1)*k+1;j<=2*(i-1)*k+k;j++)
                        cout<<j<<" ";
                    
                }
                cout<<endl;
            }
        }
            
    }
    return 0;
}
