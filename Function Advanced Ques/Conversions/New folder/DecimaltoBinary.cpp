#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x =1;
    int ans=0;
    while(n>0){
        int lastdigit = n%10;
        ans += lastdigit*x;
        x*=2;
        n = n/10;
    }
    cout<<ans;
    return 0;
}