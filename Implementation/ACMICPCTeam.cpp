#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    int max = 0, count = 0;
    int tmp;
    for(int i = 0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            tmp = 0;
            
            for(int k =0;k<m;k++){
                tmp += (topic[i][k]-'0') || (topic[j][k]-'0');
            }
            
            if(tmp>max){
                max = tmp;
                count = 1;
            }

            else if(tmp==max){
                count++;
            }
            
            //cout<<i<<" "<<j<<" "<<tmp<<" "<<max<<" "<<count<<endl;
            
        }
    }
    cout<<max<<endl<<count;
    return 0;
}
