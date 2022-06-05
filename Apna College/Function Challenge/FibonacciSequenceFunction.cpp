#include<iostream>
using namespace std;
void fibonacci(int num){
    int n1 = 0;
    int n2 = 1;
    int next_term;
    for(int i=1;i<=num;i++){
        cout<<n1<<" ";
        next_term = n1+n2;
        n1=n2;
        n2=next_term;
    }

}
int main(){
    int num;
    cin>>num;
    fibonacci(num);
    return 0;
}