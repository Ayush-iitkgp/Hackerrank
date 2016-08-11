#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define loop(n) for(int i = 0; i < n; ++i)
using namespace std;

void decenetNumber(){
    int N;
    cin>>N;
    int tmp, tag = 0;
    
    for(tmp=N;tmp>=0;tmp--){
        if(tmp%3 == 0 && (N-tmp)%5 == 0){
        	tag = 1;
        	//cout<<tmp<<endl;
        	break;
        }
    }
    	
    if(tag){
    	loop(tmp){
    		cout<<"5";
        }
        loop(N-tmp){
        	cout<<"3";
        }
    }
    
    else
        cout<<"-1";
    
    cout<<endl;
    
}
 

int main() {
	int T;
	cin>>T;
	loop(T){
		decenetNumber();
	}

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
