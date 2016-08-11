#include <iostream>
#include <limits.h>
using namespace std;

int CoinChangeDynamic(int amount, int d[], int size, int C[])
{  
    C[0] = 0;
    for(int j = 1; j <= amount; j++) {
	C[j] = (int)INT_MAX;
	for(int i = 0; i < size; i++) {
	    if(j >= d[i] && 1 + C[j-d[i]] < C[j] ) {
		C[j] = 1 + C[j-d[i]];
	    }
        }
    }     
    return C[amount];
}

int main()
{
    int N,M;
    
    cin>>N>>M;
    int arr[N];
    for(int i =0;i<N;i++)
        arr[i] = i + 1;

    int amount = M;
    int size = sizeof(arr)/sizeof(arr[0]);
    int *C = new int[amount+1];
    int ans = CoinChangeDynamic(amount, arr, size, C);
    cout<<ans;

    //cout << "Minimal # of coins = " << ans << endl;
    delete[] C;

    return 0;
}