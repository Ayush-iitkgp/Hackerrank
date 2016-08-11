#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int mismatch(vector<int> a, vector<int> b, int n){
    int index = -1;
    for(int i = 0;i<n;i++){
        if(a[i]!= b[i]){
            index = i;
            break;
            
        }
    }
    // cout<<"Mismatch index is: "<<index<<endl;
    return index;
    
}

int main(){
    
        int n;
        cin >> n;
        vector<int> q(n);
        int total_no_of_bribe = 0;
        
        for(int q_i = 0;q_i < n;q_i++){
           cin >> q[q_i];
        }
        
        vector<int> original_q(n);
        for(int i = 0;i<n;i++){
            original_q[i] = i+1;
        }
        /*
        cout<<"Original q"<<endl;
        for(int i =0;i<n;i++){
            cout<<original_q[i]<<" ";
        }
        cout<<endl;
        */
        
        int chaotic = 0;
        int mismatc = mismatch(original_q,q,n); 
        while( mismatc != -1){
            
            int no_of_bribe_at_mismatch = abs(q[mismatc] - original_q[mismatc]);
            
            //cout<< "no_of_bribe_at_mismatch: "<<no_of_bribe_at_mismatch<<endl;
            
            if(no_of_bribe_at_mismatch>2){
                chaotic = 1;
                break;
            }

            else{
                total_no_of_bribe += no_of_bribe_at_mismatch;
                if (no_of_bribe_at_mismatch == 1){
                    int tmp = q[mismatc];
                    q[mismatc] = q[mismatc+1];
                    q[mismatc+1] = tmp;
                }
                else{
                    int tmp = q[mismatc];
                    q[mismatc] = q[mismatc+1];
                    q[mismatc+1] = q[mismatc+2];
                    q[mismatc+2] = tmp;
                }
            }
            //cout<< "Now q becomes"<<endl;
            //for(int i =0;i<n;i++){


                //cout<<q[i]<<" ";
            //}
            //cout<<endl;

            mismatc = mismatch(original_q,q,n);

        }

        

        

        
        if(chaotic == 1){
            cout<<"Too chaotic"<<endl;
        }
        
        else{
            cout<<total_no_of_bribe<<endl;
            
        }
    
    return 0;
}
