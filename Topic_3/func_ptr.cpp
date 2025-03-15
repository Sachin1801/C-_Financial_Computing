#include<iostream>
using namespace std ;

int addition(int a, int b){
    return a+b;
}


int main(){

    int n1 = 1, n2 =3;

    int (*fp)(int,int) = addition;

    int result = fp(n1,n2);

    cout<<result<<endl;
    

    return 0;
}