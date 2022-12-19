using namespace std;
#include<iostream>
#include<cmath>
int main(){
    int n,r,s=0;
    cin>>n;
    while(n>0){
        r=n%10;
        s+=pow(r,2);
        n=n/10;
        if(n==0 && s>9){
            n=s;
            s=0;
        }
    }
    if(s==7 || s==1)
        cout<<"True";
    else
        cout<<"False";
}