#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    
    vector<vector<int> > g(n,vector<int>(n,INT_MAX/2));
    for(int i =0;i<m;i++){
        int u,v,d;
        cin>>u>>v>>d;
        g[u-1][v-1] = d;
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                
                g[j][k] = min(g[j][k],g[j][i+1]+g[i+1][k]);
                //cout<<"j: "<<j<<" k: "<<k<<" i: "<<i<<" "<<g[j][k]<<endl;
            
            }
        }
            
    }
    
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(g[a-1][b-1]>=INT_MAX/2)
            cout<<"-1"<<endl;
        else
            cout<<g[a-1][b-1]<<endl;
    }
    
    return 0;
}
