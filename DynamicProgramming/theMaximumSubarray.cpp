#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define for_loop(i) for(int i =0;i<n;i++)

using namespace std;


int main() {
    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        int sign = 0;
        for_loop(i){
            cin>>a[i];
            if(a[i]<0)
                sign++;
        }

        //cout<<"sign "<<sign<<endl;
        
        if(sign==n){
            int maxi = a[0];
            for(int i =1;i<n;i++){
                if(a[i]>maxi)
                    maxi = a[i];
            }
            cout<<maxi<<" "<<maxi<<endl;
        }
        else{
            
            vector<int> subarraySum;
            int sum = 0;

            for_loop(i){
                //cout<<"i: "<<i<<endl;
                if( a[i]<0 && ((a[i])+sum)<0){
                    subarraySum.push_back(sum);
                    sum = 0;
                }
                else
                    if(!(i==n-1 &&a[i]<0))
                        sum +=a[i];
            }

            subarraySum.push_back(sum);

            //cout<<"subarraySum.size(): "<<subarraySum.size()<<endl;

            int cSum;
            cSum = subarraySum[0];
            for(int i = 1;i<subarraySum.size();i++){
                //cout<<"j: "<<i<<endl;
                if(cSum<subarraySum[i])
                    cSum = subarraySum[i];
            }

            //cout<<"cSum: "<<cSum<<endl;
            int nsum = 0;
            for_loop(i){
                if(a[i]>0)
                    nsum +=a[i];
            }
            
            cout<<cSum<<" "<<nsum<<endl;
        }
    }
    return 0;
}
