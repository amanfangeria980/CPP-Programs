#include<iostream>
using namespace std;
int HexToDec(string str){
    int base =1;//2^0
    int ans = 0;
    int len = str.size();
    for(int i=len-1;i>=0;i--){
        if(str[i]>='0' && str[i]<=9){
            cout<<"F";
        }
    }

    return str.size();
}
int main(){
    string str;
    cin>>str;
    cout<<HexToDec(str);
    return 0;
}