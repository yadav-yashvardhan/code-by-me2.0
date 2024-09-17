#include<iostream>
using namespace std;

int linear(int arr[],int size,int target){
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}
int main(){
    int target;
    cin>>target;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<linear(arr,5,target);


    
    
}