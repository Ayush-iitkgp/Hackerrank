#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int mySort (pair<pair<int,int>,int > v1, pair<pair<int,int>,int > v2){
    return v1.second < v2.second;
}
int findParent(vector<int> parent, int v){
    if(parent[v]==-1)
        return v;
    else
        return(parent,parent[v]);
}

void unio(vector<int> &parent, int v1, int v2){
    int v1_parent = findParent(parent,v1);
    int v2_parent = findParent(parent,v2);
    
    parent[v2_parent] = v1_parent;
}
int main() {
    int n,m;
    cin>>n>>m;

    vector<pair<pair<int,int>,int > > v;
    //vector<vector<int> > g(n,vector<int>(n,-1));
    
    for(int i = 0;i<m;i++){
        int u,y,d;
        cin>>u>>y>>d;
        //if(g[u-1][y-1]==-1 || g[u-1][y-1]>d)
            //g[u-1][y-1] = d;
        v.push_back(make_pair(make_pair(u-1,y-1),d));
        
        //v.push_back(make_pair(make_pair(u-1,y-1),d));
    }

    int s;
    cin>>s;
    
    //for(int i=0;i<n;i++){
      //  for(int j = 0;j<n;j++){
        //    if(g[i][j]>0)
          //      v.push_back(make_pair(make_pair(i,j),g[i][j]));
        //}
    //}

    cout<<"v size is "<<v.size()<<endl;
    cout<<"n: "<<n<<"m: "<<m<<endl;

    
    sort(v.begin(),v.end(),mySort);
    
    vector<int> parent(n,-1);
    
    int sum = 0;
    int index = 1;
    int i = 0;
    while( index<=n && i<m){
        
        if(findParent(parent,v[i].first.first) != findParent(parent,v[i].first.second)){

            sum += v[i].second;
            cout<<i<<" "<<index <<" "<< v[i].first.first <<" "<<v[i].first.second <<" "<<v[i].second <<" "<< sum<< endl;
            unio(parent, v[i].first.first, v[i].first.second);
            index++;
            
        }
        
        i++;
    }
    cout<<sum;
    return 0;
}
