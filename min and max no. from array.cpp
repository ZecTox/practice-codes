// Method 1 //

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr [i];
    }
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    
    for(int i = 0; i<n; i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
        if(arr[i]<minNo){
            minNo = arr[i];
        }
    }
    
    cout << maxNo << endl << minNo;
    
    return 0;
}

// Method 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr [i];
    }
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    
    for(int i = 0; i<n; i++){
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
        }
    
    cout << maxNo << endl << minNo;
    
    return 0;
}
