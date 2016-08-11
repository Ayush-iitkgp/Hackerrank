#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int swap = 0;
    int reverse = 0;
    int first_index,second_index;
    if(n==2){
        if(arr[0]>arr[1]){
            cout<<"yes"<<endl;
            cout<<"swap 1 2";
        }
        else
            cout<<"yes";
    }
    else{
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(arr[i+1]>arr[i+2]){
                reverse++;
                first_index = i;
                i = i + 2;
                while(arr[i]>=arr[i+1] && i<n-1){
                    i = i+1;
                }
                second_index = i;
            }
            
            else{
                swap++;
                if(swap==1)
                    first_index = i;
                else
                    second_index = i;
                //cout<<swap<<" "<<first_index<<endl;
                /*
                while(arr[i+1]>arr[i+2]){
                    i = i+1;
                }*/
                //second_index = i;
                //cout<<"second_index "<<second_index<<endl;
            }
        }
    }

    //cout<<"swap is: "<<swap<<endl;
    //cout<<"reverse is: "<<reverse<<endl;

    
    if(swap==0 && reverse==0){
        cout<<"yes";
    }
    else if (swap==2 && reverse==0){
        bool f = arr[first_index]>arr[second_index-1]&&arr[first_index]<arr[second_index+1]&&arr[second_index]>arr[first_index-1]&&arr[second_index]<arr[first_index+1];
        cout<<f<<endl;
            cout<<"yes"<<endl;
            cout<<"swap "<<first_index+1<<" "<<second_index+1;
    }
    else if(reverse = 1 && swap==0){
        cout<<"yes"<<endl;
        cout<<"reverse "<<first_index+1<<" "<<second_index+1;
    }
    else
        cout<<"no";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
