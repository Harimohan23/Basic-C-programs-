#include<iostream>
using namespace std;
void Naturalsum(int n){
    int sum = (n*(n+1))/2;
    cout<<"with no return\n";
    cout<<"The sum of "<<n<<" Natural numbers is "<<sum<<"\n";
}
int SumNaturalNumbers(int n){
    cout<<"with return\n";
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum = sum+i;
    }
    return sum;
}
int SumNaturalWhile(int n){
    int sum = 0;
    while(n!=0){
        sum = sum+n;
        n--;
    }
    return sum;
}
int SumRecursion(int n){
    if(n==0){
        return 0;
    }
    return n+SumRecursion(n-1);
}
int main(){
    int n;
    cout<<"Enter the N value for which you want to calculate sum\n";
    cin>>n;
    Naturalsum(n);
    
    int m = SumNaturalNumbers(n);
    cout<<"The sum of "<<n<<" Natural numbers is "<<m<<"\n";

    int k = SumNaturalWhile(n);
    cout<<"The sum of "<<n<<" Natural numbers is "<<k<<"\n";

    int p = SumRecursion(n);
    cout<<"The sum of "<<n<<" Natural numbers is "<<p<<"\n";



   
}