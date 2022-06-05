#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //first approach (simple division)

    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int rem=n%2;
    //     ans=(rem*pow(10,i))+ans;
    //     n/=2;
    //     i++;
    // }
    // cout<<ans;

    //Second approach(using right shift operator)
    //solution is working on bit level or binary level
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n>>=1;
        i++;
    }
    cout<<ans;
    return 0;
}