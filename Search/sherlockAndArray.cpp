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
        int n;
        cin>>n;
        vector<int> v(n);
        int tmp = 0;
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i = 0;i<n;i++){
            
            int leftSum = 0;
            int rightSum = 0;
            
            for(int j=i-1;j>=0;j--)
                leftSum +=v[j];
            for(int j=i+1;j<n;j++)
                rightSum +=v[j];
            
            if(leftSum==rightSum){
                tmp = 1;
                break;
                
            }
        }
        if(tmp){
                cout<<"YES"<<endl;
            }
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
