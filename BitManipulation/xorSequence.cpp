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
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;
    
    int res = 0;
    while(L%4!=0){
        if(L%4==1)
            res = res ^1;
        else if(L%4==2){
            res = res ^(L+1);
        }
        L++;
    }
    
    while(R%4!=3){
        if(R%4==1)
            res = res^1;
        else if(R%4==0){
            res = res ^ R;
        }
        else
            res = res ^ (R+1);
            
        R--;
    }
    
    if(((R-L+1)/4)%2==1)
        res = res ^2;
    
    cout<<res<<endl;
        
    
    }
        
    return 0;
}
