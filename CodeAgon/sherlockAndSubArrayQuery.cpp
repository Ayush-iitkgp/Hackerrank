#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int *arr, int L, int R){
    int maximum = arr[L];
    int count = 1;
    for(int i=L+1;i<=R;i++){
        if (arr[i] > maximum){
            maximum = arr[i];
            //cout<<"New Maximum is :"<<maximum<<endl;
            count  = 1;
        }
        else if (arr[i]==maximum){
            count++;
        }
    }
    //cout<<count<<endl;

    return count;
}


int main() {
    int N,M;
    int arr[N];
    
    cin>>N>>M;
    for(int i = 0;i<N;i++)
        cin>>arr[i];
    while(M--){
        int L,R;
        cin>>L>>R;
        cout<<max(arr,L-1,R-1)<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
