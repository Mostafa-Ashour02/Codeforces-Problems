#include<iostream>
#define ll long long
using namespace std;

int main(){
    
    ll N,M,A;
    cin>>N>>M>>A;
    
    cout<< ( ((M+A-1) /A) * ((N+A-1)/A) );
    return 0;
}