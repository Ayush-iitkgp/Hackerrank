#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <utility>
using namespace std;

bool allVisited(vector<bool> v){
    bool ret = true;
    for(int i =0;i<v.size();i++){
        if(v[i]==false){
            ret = false;
            break;
        }
    }
    return ret;
}

int minDist(vector<int> distance, vector<bool> visited){
    int min_index = -1;
    int min_distance = INT_MAX;
    
    for(int i =0;i<distance.size();i++){
        if(visited[i]== false && min_distance > distance[i])
            min_distance = distance[i], min_index = i; 
    }
    
    return min_index;
}
int main() {
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        
        vector<list<pair<int,int> > > g(n);

        for(int i=0;i<m;i++){
            int u,v,d;
            cin>>u>>v>>d;
            g[u-1].push_back(make_pair(v-1,d));
            g[v-1].push_back(make_pair(u-1,d));
        }
        
        vector<bool> visited(n,false);
        vector<int> distance(n,INT_MAX);
        
        int s;
        cin>>s;
        distance[s-1] = 0;
        
        while(!allVisited(visited)){
            
            int u = minDist(distance,visited);
            visited[u] = true;
            
            list<pair<int,int> >::iterator i;

            for(i = g[u].begin() ;i!=g[u].end() ;i++){
                if(visited[(*i).first]==false){
                    if(distance[(*i).first]>distance[u]+(*i).second)
                        distance[(*i).first] = distance[u]+(*i).second;
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            if(i!=s-1){
                if(distance[i]==INT_MAX)
                    cout<<"-1"<<" ";
                else
                    cout<<distance[i]<<" ";
            }
        }
        cout<<endl;
    }
       
    return 0;
}
