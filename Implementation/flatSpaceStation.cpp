
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    
    //int arr[m];
    
    sort(c.begin(),c.end());
    
    int max_distance = c[0];
    cout<<max_distance<<endl;
    for(int i =0;i<m-1;i++){
        max_distance = max(max_distance,(c[i+1]-c[i])/2);
        cout<<max_distance<<endl;
    }
    
    cout<<max(max_distance,n-1-c[m-1]);    
    return 0;
}

