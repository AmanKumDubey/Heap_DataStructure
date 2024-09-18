#include<bits/stdc++.h>
using namespace std;

// Buid Minimum Heap 
// void heapify(int *arr, int n, int i){

//     int smallest=i;
//     int left=i*2+1;
//     int right=i*2+2;

//     if(left<n && arr[smallest]>arr[left]){
//         smallest=left;
//     }
//     if(right <n && arr[smallest]>arr[right]){
//         smallest=right;
//     }
//     if(smallest!=i){
//         swap(arr[i],arr[smallest]);
//         heapify(arr, n,smallest);
//     }
// }
void miniMumHeap(int *arr, int n,int i){

    int smallest=i;
    int left=i*2+1;
    int right=i*2+2;

    if(left<n && arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<n  && arr[smallest]>arr[right]){
        smallest=right;
    }
    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        miniMumHeap(arr,n, smallest);
    }
}
int main(){

    int arr[7]={56,40,50,20,12,30,32};
    int n=7;

    cout<<"Before heapify "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for( int i=n/2-1;i>=0;i--){
        miniMumHeap(arr,n,i);
    }
    cout<<"After Heapify "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}