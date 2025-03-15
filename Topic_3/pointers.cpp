#include<iostream>
using namespace std;

void getNum(int *arrptr){
    cout<<*arrptr<<endl;
    cin>> *arrptr;
}

int main(){
    int arr[5]={2,4,6,8,10};
    int *arrptr = arr;
    int *arrptr2 = arr;
    int *arrptr3 = arr+1;

    int num = 1;
    cout<<"value of num: "<<num<<endl;
    getNum(&num);
    cout<<"value of num: "<<num<<endl;


    // arrptr2+=4;
    // arrptr += 4;

    // cout<< arrptr - arrptr2 << endl;
    // cout<<*(arrptr) - *(arrptr2)<<endl;

    // if(arr == arrptr3) cout<<"Same addresses"<<endl;
    // else cout<<"Different addresses"<<endl;

    // if(*(arrptr)== *(arrptr2)) cout<<"Same values"<<endl;
    // else cout<<"Different values"<<endl;

    return 0;
    
}