#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
    }
    return fact;

}
int main(){
    int num;
    cin>>num;
    int fact = factorial(num);
    cout<<fact<<endl;
    return 0;
}