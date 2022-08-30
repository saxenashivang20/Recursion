#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0) // base condition 
    return;
    cout<<"hello"<<endl;
    fun(n-1);
}
int main(){
    fun(3);
    return 0;
}