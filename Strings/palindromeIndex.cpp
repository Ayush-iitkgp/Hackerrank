#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s){
    bool ret = true;
    int len = s.length();
    for(int i = 0;i<=(len-1)/2; ++i){
        if(s[i]!=s[len-1-i]){
            ret = false;
            break;
        }
    }
    return ret;
        
}
int main() {
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        string tmp;
        
        if(isPalindrome(s)){
            cout<<"-1"<<endl;
        }
        else{
            /*
            int i  = 0;
            tmp = s.substr(1,s.length());
            while(!isPalindrome(tmp)){
                i++;
                tmp = s.substr(0,i) + s.substr(i+1,s.length());
            }
            
            cout<<i<<endl;
            */
            int len = s.length();
            //cout<<len<<endl;
            for(int i = 0;i<=(len-1)/2;i++){
                if(s[i]!=s[len-1-i]){
                        
                        if(isPalindrome(s.substr(0,i) + s.substr(i+1,len)))
                            cout<<i<<endl;
                        else
                            cout<<len-i-1<<endl;
                    break;
                }
            }
        }


        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
