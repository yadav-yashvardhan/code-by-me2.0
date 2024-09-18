#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<"size="<<vec.size()<<endl;
   vec.push_back(35);
    vec.push_back(40);


   
    cout<<"after push back size = "<<vec.size()<<endl;
vec.pop_back();
cout<<"value at front = "<<vec.front()<<endl;
cout<<"value t back = "<<vec.back()<<endl;
cout<<"value using at = "<<vec.at(2)<<endl;
    for(int val : vec){
        cout<<val<<endl;
    }
}