#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    while(q--){
        int n,m;
        cin>>n>>m;
        vector<list<int> > g(n);
        for(int i =0;i<m;i++){
            int u,v;
            cin>>u>>v;
            g[u-1].push_back(v-1);
            g[v-1].push_back(u-1);


        }
        
        int s;
        cin>>s;
        
        vector<int> visited(n,-1);
        //int count = 0;
        //bool inc = false;
        //count = 6;
        list<int> q;
        visited[s-1] = 0;
        q.push_back(s-1);
        
        while(q.size()!=0){
            
            //cout<<count<<endl;
            
            int front = q.front();
            //cout<<front<<" ";
            q.pop_front();
            
            list<int>::iterator i;
            //if(inc)
              //  count +=6;
            
            for(i = g[front].begin(); i!=g[front].end();i++){
                
                
                if(visited[*i] == -1){
                    //inc = true;

                    visited[*i]= visited[front]+6;
                    q.push_back(*i);
                    
                }
                
            }
        }
        
        cout<<endl<<endl;
        for(int i = 0;i<n;i++){
            if(visited[i]!=0)
                cout<<visited[i]<<" ";
            
        }
        cout<<endl;
               
            
    }
    
    
    return 0;
}
