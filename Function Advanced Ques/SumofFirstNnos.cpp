#include<iostream>
using namespace std;
int sum(int n){
    // int result = (n*(n+1)/2);
    // return result;
    // or
    int answer = 0;
    for(int i=1; i<=n;i++){
        answer+=i;
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}