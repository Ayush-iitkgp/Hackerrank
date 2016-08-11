#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void pie(){
    string pievalue = "31415926535897932384626433833";
    string s;
    
    getline(cin,s);
    char space=' ';

    int count = 0,index =0,flag = 1;
    for(int i=0;i<s.size();i++){
        //cout<<s[i]<<" ";
        if(s[i]!=space)
            count++;
        else{
            cout<<count<<" "<<pievalue[index]<<endl;
            if(pievalue[index]-'0'!= count){
                cout<<"Mismatch:"<<pievalue[index]<<" "<<count<<endl;
                flag = 0;
                break;
            }
            else{
                cout<<"Match "<<pievalue[index]<<" "<<count<<endl;

            }

            count = 0;
            index++;
        }
    }
    
    if(flag)
        cout<<"It's a pi song."<<endl;
    else
        cout<<"It's not a pi song."<<endl;
    
}


int main() {
    int T;
    cin>>T;
    cin.ignore();

    while(T--)
        pie();
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
