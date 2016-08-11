#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int arr[N][N];
    for(int i =0;i<N;i++)
        for(int j =0;j<N;j++){
        cin>>arr[i][j];
    }
    
		int diff =0;    
		for(int i = 0;i<N;i++){
		diff+= arr[i][i]-arr[i][N-1-i];
			}

		cout<<abs(diff);

    return 0;
}

