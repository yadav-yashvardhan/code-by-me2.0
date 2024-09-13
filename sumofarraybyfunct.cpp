#include<iostream>
using namespace std;

int sum_of_array(int arr[],int n){

    int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;
}
int main(){
    int n;
    cin >> n;
    int arr[10];
    for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<sum_of_array(arr,n);

}