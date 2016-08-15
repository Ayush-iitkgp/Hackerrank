#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    
    vector<int> a(n),b(m);
    
    for(int i =0;i<n;i++)
        cin>>a[i];
    
    for(int i =0;i<m;i++)
        cin>>b[i];
    
    vector<vector<int> > L(n+1,vector<int>(m+1,0));
    
    for(int i =1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1])
                L[i][j] = 1 + L[i-1][j-1];
            else
                L[i][j] = max(L[i][j-1],L[i-1][j]);
                
        }
    }

    //cout<<"The size of the LCS is: "<<L[n][m]<<endl;

    vector<int> s;
    int i = n,j = m;
    while(i>=1&&j>=1){
        if(a[i-1]==b[j-1]){
            //cout<<"i-1: "<<i-1<<" j-1: "<<j-1<<" "<<a[i-1]<<endl;
            s.push_back(a[i-1]);
            i--;
            j--;

        }
        else{
            if(L[i-1][j] > L[i][j-1])
                i = i-1;
            else
                j = j-1;
            
        }
    }

    //cout<<"lcs size is: "<<s.size()<<endl;

    for(int i = s.size()-1;i>=0;i--)
        cout<<s[i]<<" ";
    
    
    
    return 0;
}
