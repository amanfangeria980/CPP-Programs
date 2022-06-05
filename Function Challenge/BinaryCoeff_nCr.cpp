#include<iostream>
using namespace std;
//Function to Find Factorial
int fact(int num){
    int fact=1;
    for(int i =2;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*(fact(n-r)));
    cout<<ans<<endl;
    return 0;
}