#include<iostream>
using namespace std;
int factorial(int n){
    int num=1;

    for(int i=1;i<=n;i++){
        num=num*i;

    }
    return num;
}

int nCr(int n,int r){
    int num=factorial(n);
    int denom1=factorial(r);
    int denom2=factorial(n-r);
    return num/(denom1*denom2);
}

int main(){
    cout<< nCr(8,2);
    return 0;

}