#include<iostream>
using namespace std ;

int addition(int a, int b){
    return a+b;
}

int main(){

    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    
    int x=1,y=2;

    //syntax: return_type(*function_ptr_name)(paramters)
    int(*fp)(int,int) = addition;

    int result = fp(x,y);
    cout<<"sum of x & y ="<<result<<endl;
    return 0;
}