#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int R,C,N;
    cin>>R>>C>>N;
    char c;
    int arr[R][C], ones[R][C], tmp[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            ones[i][j] = 1;
    }
    
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            tmp[i][j] = 0;
    }
        
        
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>c;
            if(c=='.')
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }

    //cout<<"arr at k = 1"<<endl;

    /*
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } */





    
    if(N%2==0){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout<<"O";
            }
            cout<<endl;
        }
    }

    else{
        for(int k=3;k<=N;k=k+2){
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    if(arr[i][j]==1){
                        ones[i][j] = 0;
                        if(i-1>=0)
                            ones[i-1][j] = 0;
                        if(i+i<R)
                            ones[i+1][j] = 0;
                        if(j-1>=0)
                            ones[i][j-1] = 0;
                        if(j+1<C)
                            ones[i][j+1] = 0;
                    }
                }
            }
            
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    arr[i][j] = ones[i][j];
                    ones[i][j] = 1;
                }
            }
            
            

            //cout<<"arr at k= "<<k<<endl;
            /*
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    arr[i][j] = ones[i][j] - tmp[i][j];
                    //cout<<arr[i][j]<<" ";
                }
                //cout<<endl;
            } */
        }
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(arr[i][j]==1)
                    cout<<"O";
                else
                    cout<<".";
            }
            cout<<endl;
        }
    }
    
    return 0;
}
