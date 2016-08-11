#include <bits/stdc++.h>
using namespace std;

void quickSort(vector <int> arr) {
    if(arr.size()<2)
        return;
    
    vector<int> left,right;
    int pivot = arr[0];
    
    for(int i = 0;i<arr.size();i++){
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
    
    
    /*
    int l = 0, r = arr.size()-1;
    int pivot = arr[0];
    while(l<r){
        if(arr[l]<pivot)
           l++;
        if(arr[r]>pivot)
           r--;
        
        int tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
    }
    
    for(int i = l; i<=r;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    quickSort(arr);
    quickSort(*arr[l+1]);
    
    */
    
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
