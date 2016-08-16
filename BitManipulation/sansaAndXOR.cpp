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
        int N;
        cin>>N;
        vector<int> a(N);
        for(int i=0;i<N;i++)
            cin>>a[i];
    
    if(N%2==0)
        cout<<"0"<<endl;
    else{
        int result = 0;
        for(int i =0;i<N;i=i+2)
            result = result ^a[i];
            
        cout<<result<<endl;
        
    }
        
    }
    return 0;
}
