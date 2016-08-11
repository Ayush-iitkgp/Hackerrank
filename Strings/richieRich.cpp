#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    string number;
    cin >> number;
    int len = number.length();
    vector<int> v;
    for(int i = 0;i<=(n-1)/2;i++){
        if(number[i]!=number[n-1-i]){
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    
    if(v.size()>k){
        cout<<"-1";
    }
    else{
        for(int i =0;i<v.size();i++){
            cout<<max(number[v[i]],number[n-1-v[i]])<<endl;
            number[v[i]] = max(number[v[i]],number[n-1-v[i]]);
            cout<<number[v[i]]<<endl;
            
        }
        
        k = k - v.size();
        int i = 0;
        
        while(k>1){
            number[i] = '9';
            number[n-1-i] = '9';
            k = k - 2;
            i++;
        }
        if(k==1){
            number[v.back()] = '9';
            number[n-1-v.back()] = '9';
        }
        cout<<number;
    }
    return 0;
}
