//Write a program to find out whether a given character is an alphabet or
// not using functions.
#include<iostream>
using namespace std;
bool isAlpha(char ch){
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)){
        return true;
    } 
    return false;
}
int main(){
    char c;
    cin>>c;
    if (isAlpha(c)){
        cout<<"Alphabet";
    }
    else{
        cout<<"Not an Alphabet";
    }
    return 0;
}

