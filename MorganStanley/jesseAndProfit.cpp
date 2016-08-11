#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    vector<int> v1(n);
    vector<int> v2(d);
    
    map<int,int> m;
    
    for(int i = 0;i<n;i++){
        cin>>v1[i];
        m[v1[i]]++;
    }
    for(int i =0;i<d;i++){
        cin>>v2[i];
    }
    
    for(int i = 0;i<d;i++){
        vector<int> p1,p2;
        for(int j=0;j<n;j++){
            m[v1[j]]--;
            if(m[v2[i]+v1[j]]>0){
                for(int k = j+1;k<n;k++){
                    if(v1[k] == v2[i]+v1[j]){
                        
                        p1.push_back(j);
                        p2.push_back(k);
                        break;
                    }
                }
            }
            
            m[v1[j]]++;
        }
        
        if(p1.size()==0)
            cout<<"-1"<<endl;
        else{
            
            int minimu,start,end;
            minimu = n;
            //start = p1[0];
            //end = p2[0];
           
            for(int j = 0;j<p1.size();j++){
                //cout<<p1[j]<<" "<<p2[j]<<endl;
                if(minimu > (p2[j] - p1[j])){

                    start = p1[j];
                    end = p2[j];
                    minimu = p2[j] - p1[j];

                    //cout<<"start "<<start<<" end "<<end<<endl;
                }
            }
            //cout<<endl;
            cout<<start+1<<" "<<end+1<<endl;
            //cout<<endl;
        }

            
    }
    
    
    return 0;
}
