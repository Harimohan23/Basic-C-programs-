#include<iostream>
using namespace std;
void factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact;
}
int fact(int n){
   
    if(n==0){
        return 1;
    }
    else return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a number to calculate factorial\n";
    cin>>n;
    cout<<"without return\n";
    factorial(n);
    int k = fact(n);
    cout<<"\nwith return";
    cout<<"\n"<<k;
    return 0;
}