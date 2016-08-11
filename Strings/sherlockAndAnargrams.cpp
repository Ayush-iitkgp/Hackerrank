#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int isAnargram(string s1, string s2, int lengt){
    //cout<<s1<<" "<<s2<<endl;
    int ret = 1;
    //int len = s1.length();
    map<char,int> m1,m2;
    for(int i = 0;i<lengt;i++){
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    for(int i = 0;i<lengt;i++){
        if(m1[s1[i]]!=m2[s2[i]]){
            ret = 0;
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
        int len = s.length();
        int count = 0;
        string s1, s2;
        cout<<endl;
        for(int lengt=1;lengt<len;lengt++){

            for(int i = 0;i<len-lengt;i++){
                
                s1 = s.substr(i,i+lengt);
                //cout<<s1<<" ";
                for(int j = i+1;j<len-lengt+1;j++){

                    cout<<j<<" "<<j+lengt<<endl;
                    s2 = s.substr(j,j+lengt);

                    cout<<s1<<" "<<s2<<endl;
                    //cout<<lengt<<endl;

                    count = count + isAnargram(s1, s2, lengt);
                    //cout<<count<<endl;
                    
                }
            }
        }
        //cout<<count<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
