#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int contain(vector<long long int> v, long long int num){
    int ret  = 0;
    for(long int i=0;i<v.size();i++){
        if(v[i]==num){
            ret = 1;
            break;
        }
    }
    return ret;
}


int main() {
    long long int n;
    cin>>n;
    
    //cout<<n<<endl<<endl;
    //long long int square = n*n;
    long long int root = (long long int)sqrt(n);
    //cout<<"root "<<root<<endl;
    int count = 0;
    
    vector<long long int> iv; 
   
    for(long long int i = 2;i<=root;i++){

        if(n% i == 0){
            //cout<<n%i<<" ";
            iv.push_back(i);
            if(n!=i*i){
                iv.push_back(n/i);
            }
            
        }
    }
    

    //cout<<"Div arr size is "<<iv.size()<<endl;
    sort(iv.begin(),iv.end());

    //cout<<"Div arr is "<<endl;
    //for(long int i=0;i<iv.size();i++)
        //cout<<iv[i]<<" ";

    //cout<<endl;
    
    vector<long long int> v;
    for(int i = 0;i<iv.size();i++){
        for(int j = i;j<iv.size();j++){
            if(iv[i]*iv[j]<n && n%(iv[i]*iv[j])!=0 && !contain(v,iv[i]*iv[j])){
                v.push_back(iv[i]*iv[j]);
                count++; 
                //cout<<iv[i]<<" "<<iv[j]<<" "<<iv[i]*iv[j]<<endl;
                
            }
                
        }
    }
    
    
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
