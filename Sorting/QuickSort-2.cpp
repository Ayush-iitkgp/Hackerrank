#include <bits/stdc++.h>
using namespace std;

void quickSort(vector <int> &arr) {

    int size = arr.size();
    
    if(size < 2){
        return;
    }

    else{
        vector<int> left;
        vector<int> right;

        int pivot = arr[0];
    
        for(int i = 1;i<size;i++){
            if(arr[i]<pivot)
                left.push_back(arr[i]);
            else
                right.push_back(arr[i]);
        }
    
        cout<<"left array\n";
        for(int i =0;i<left.size();i++)
            cout<<left[i]<<" ";
    
        for(int i =0;i<right.size();i++)
            cout<<right[i]<<" ";
    
        cout<<endl;
    
    
        quickSort(left);
        quickSort(right);
    
        int index = 0;
    
        for(int i = 0;i<left.size();i++){
        
            arr[index++] = left[i];
            cout<<left[i]<<" ";
        
        
    }
        
    
        arr[index++] = pivot;
        cout<<pivot<<" ";
    
    
        for(int i =0;i<right.size();i++){
            arr[index++] = right[i];
            cout<<right[i]<<" ";
        
        }
    
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
