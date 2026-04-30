#include<iostream>
#include<Math.h>

using namespace std;

void Reverse(int n)
{
    int rev = 0;
   
    while(n>0){

        int lastdigit = n%10;
        rev = rev*10+lastdigit;
        n = n/10;
    }
    cout<<rev;
    


}

int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    Reverse(n);
    return 0;
}