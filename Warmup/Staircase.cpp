#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define for_loop(i, begin,end) for(int i = begin;i<end;i++)
using namespace std;


int main(){
    int n;
    cin >> n;
    for_loop(i,0,n){
        for_loop(j,0,n-i-1){
            cout<<" ";
        }
        for_loop(k,0,i+1){
            cout<<"#";
        }
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}
