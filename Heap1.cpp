#include<bits/stdc++.h>
using namespace std;

class Heap{

    public:
    int arr[100];
    int size;

    Heap(){
        arr[0]=-1;
        size=0;

    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){

        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deleteFirst(){

        if(size<=0){
            cout<<"Can't be deleted "<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;

        // take root node to it's correct position

        int i=1;
        while(i<size){
            int leftIndex=i*2;
            int rightIndex=i*2+1;

            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[leftIndex],arr[i]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[rightIndex],arr[i]);
                i=rightIndex;
            }
            else{
                return;
            }
        }
    }
};
int main(){

    Heap p;
    p.insert(10);
    p.insert(100);
    p.insert(34);
    p.insert(56);
    p.insert(9);

    p.print();

    return 0;
}