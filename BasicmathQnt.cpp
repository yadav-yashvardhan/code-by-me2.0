#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        // your code goes here
        if(a%7==0&&a%2==0){
            cout<<"Alice"<<"\n";
        }else if(a%9==0&&a%2!=0){
            cout<<"Bob"<<"\n";
        }else{
            cout<<"Charlie"<<"\n";
        }
    }

}
