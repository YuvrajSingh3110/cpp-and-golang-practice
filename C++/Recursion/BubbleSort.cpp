#include<iostream>
using namespace std;

void sort(int *arr, int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr,n-1);
}

int main(){
    int arr[4] = {2,4,3,5};
    sort(arr,4);
    cout<<"sorted arrray: \n";
    for(int i=0; i<4; i++){
        cout<<arr[i];
    }
    return 0;
}