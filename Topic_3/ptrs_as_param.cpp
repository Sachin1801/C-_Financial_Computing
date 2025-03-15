#include<iostream>
using namespace std ;

void swap_using_ptr( int *const ptr1,int *const ptr2){
    int Temp = *ptr1; // Temp  = 10
    *ptr1 = *ptr2; // value pointed by ptr1 is cahnged to value pointed by ptr2
    *ptr2 = Temp; // value pointed by ptr2 is changed to 10
    return;
}

int main(){

    int n1 = 10;
    int n2 = 20;

    swap_using_ptr(&n1, &n2);
    cout<<"Values are n1: "<<n1<<endl;
    cout<<"Values are n2: "<<n2<<endl;

    int * const temp =  &n1;

    cout<< *temp+1<<endl;

    cout<<sizeof(double)<<endl;

    
    

    return 0;
}