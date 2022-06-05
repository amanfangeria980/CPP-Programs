#include<iostream>
using namespace std;
bool flag(int n){
    if (n%2==0){
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(flag(n)){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
    return 0;
}