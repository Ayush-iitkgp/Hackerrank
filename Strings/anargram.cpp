#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    //cin>>s;
    getline(cin,s,'\n');
    int n = s.length();
    
    //cout<<s;
    
    vector<bool> arr(26,false);
    
    for(int i = 0;i<n;i++){
        if(s[i]>=97&&s[i]<=122)
            arr[s[i]-97]=true;
        else if (s[i]>=65&&s[i]<=90)
            arr[s[i]-65]=true;
    }
    int tmp = 1;
    for(int i=0;i<26;i++){
        if(arr[i]==false){
            cout<<i<<endl;
            tmp = 0;
            break;
        }
        
    }
    if(tmp)
        cout<<"pangram";
    else
        cout<<"not pangram";
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
