#include<iostream>
using namespace std;
void EvenOdd(int n){
    if(n%2==0){
        cout<<"Given number is even\n";
    }
    else{
        cout<<"Given number is odd";
    }
}
int main(){
    int a;
    cout<<"Enter a number to check odd or even\n";
    cin>>a;
    EvenOdd(a);

    return 0;
}