#include<bits/stdc++.h>
using namespace std;

// Build Maximum Heap  

void heapfy(int *arr, int n, int i){

    int target=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[target]<arr[left]){
        target=left;
    }
    if(right<n && arr[target]<arr[right]){
        target=right;
    }


    if(target!=i){
        swap(arr[target],arr[i]);
        heapfy(arr, n, target);
    }
}

int main(){

    int arr[7]={50, 20, 30, 40,12,56,32};
    int n=7;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n/2-1;i>=0;i--){
        heapfy(arr, n,i);
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}