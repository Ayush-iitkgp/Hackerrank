#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        bitset<32> x(a),y(b);
        int sum = 0;
        int count = 0;
        for(int i = 31;i>=0;i--){
            if(x[i] == 1 && y[i] == 1 && count==0)
                sum = sum + pow(2,i);
            else if(y[i]== 1 && x[i]== 0)
                count++;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}
