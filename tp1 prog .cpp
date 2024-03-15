#include <bits/stdc++.h>
using namespace std; 
bool EsMultiploDe3(int n);
int main(){
int num ;
string msj="No Es Multiplo";
cout<<"ingrese numero"<<endl;
cin>>num;
if(EsMultiploDe3(num)){
msj="Es Multiplo";
}
cout<<msj<<endl;
return 0;
}
bool EsMultiploDe3(int n){
bool flag= false ;
if(n%3==0){
flag=true;
}
return flag;
}