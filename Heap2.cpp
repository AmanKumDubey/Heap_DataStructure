#include<bits/stdc++.h>
using namespace std;

class Heap{

    public:
    int arr[1000];
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
            if(arr[parent]>arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void delete1(){
        arr[1]=arr[size];
        size--;

        int i=1;
        while(i<size){
            int left=i*2;
            int right=i*2+1;

            if(left<size && arr[left]>arr[i]){
                swap(arr[left],arr[i]);
                i=left;
            }
            else if(right< size && arr[right]>arr[i]){
                swap(arr[i],arr[right]);
                i=right;
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
};
int main(){

    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    h.print();
    h.delete1();
    h.print();


    return 0;
}