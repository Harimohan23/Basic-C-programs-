#include<iostream>
using namespace std;
void Greatest(int m,int n,int o){
   
    if(m>n && m>o){
        cout<<m<<" is greatest\n";
    }
   
    else if(n>m && n>o){
        cout<<n<<" is greatest\n";
    }
     
    else{
        cout<<o<<" is greatest";
    }
   
    
}
int main(){
    int a,b,c;
    cout<<"Enter the numbers\n";
    cin>>a>>b>>c;
    Greatest(a,b,c);
    return 0;
}