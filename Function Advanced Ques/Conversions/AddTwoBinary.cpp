int reverse(int n){
    int ans =0;
    while (n>0){
        int rem = n%10;
        ans = ans*10+rem;
        n/=10;
    }
    return ans;
}

int addBin(int a, int b){
        
}