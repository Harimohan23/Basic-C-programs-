#include<iostream>
using namespace std;
void digitcount(int n){
    int count = 0;
    while(n!=0){
        int lastdigit = n%10;
        count++;
        n = n/10;
    }
    cout<<count;
}

int main(){
    int n;
    cout<<"Enter number to check digits\n";
    cin>>n;
    digitcount(n);
    return 0;
}