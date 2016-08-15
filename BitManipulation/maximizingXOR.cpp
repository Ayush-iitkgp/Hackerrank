#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

int maxXor(int l, int r) {
    
    bitset<16> x(l),y(r);
    cout<<x<<" "<<y<<endl;
    int ret = 0;
    for(int i = 15;i>=0;i--){
        cout<<i<<" "<<x[i]<<" "<<y[i]<<endl;
        if(x[i]!=y[i]){
            ret = pow(2,i+1) - 1;
            break;
            
        }
            
    }
    
    return ret;
    
 
    
    

}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
