#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n][n];
    int count = 0;
    
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
            //v[i].push_back(a);
        }
    }

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            for(int k=i;k<n;k++){
                for(int l = j;l<n;l++){
                    if(arr[i][j]>arr[k][l])
                        count++;
                }
            }
        }
    }
    
    cout<<count;
    return 0;
}
