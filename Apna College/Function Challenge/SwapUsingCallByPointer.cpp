//With Third Variable
#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int c;
    c= *a;
    *a =*b;
    *b = c;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before Swapping: "<<a<<" "<<b;
    cout<<endl;
    swap(&a,&b);
    cout<<"After Swapping: "<<a<<" "<<b;
    return 0;
}

//Without using Third Variable
/*
#include<iostream>
using namespace std;
void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before Swapping: "<<a<<" "<<b;
    cout<<endl;
    swap(&a,&b);
    cout<<"After Swapping: "<<a<<" "<<b;
    return 0;
} 
*/

//OR

/*
#include<iostream>
using namespace std;
void swap(int* a, int* b){
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before Swapping: "<<a<<" "<<b;
    cout<<endl;
    swap(&a,&b);
    cout<<"After Swapping: "<<a<<" "<<b;
    return 0;
} 
*/

