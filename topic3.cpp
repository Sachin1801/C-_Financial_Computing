#include<iostream>
using namespace std ;

void getNum(int *ptr ){
    cin >> *ptr;
}

void swapnum(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int* getNum1(){
    int num = 10;
    num+= 1;
    return &num;
}
int getNum2(){
    int num = 10;
    num+= 1;
    return num;
}
void getNum3(int *ptr){
    *ptr +=1;
}
int* getNum4(){
    int *ptr = new int;
    *ptr = 10;
    *ptr += 1;
    delete ptr;
    ptr = NULL;
    return ptr;
}


int main(){

    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    
    int iNum = 1;
    getNum(&iNum);
    cout<<"iNum="<<iNum<<endl;

    int n1 = 10,n2=20;
    swapnum(&n1,&n2);
    cout<<"n1="<<n1<<" & n2="<<n2<<endl;

    //difference between pointer to constants
    //and constant pointers

    const double dTaxRates[] = {0.65,0.54,0.32};

    const double *dptr = dTaxRates;
    //notic
    // *(dptr) = 0.45;
    cout<<dptr<<" "<<&dptr<<" "<<*dptr<<" "<<endl;

    int classSize =24;
    int *const ptr = &classSize;

    *ptr = 40; //valid
    cout<<*ptr<<endl;

    //dynamic memory allocation & call-by-pointers

    int *ptr1 = getNum1();
    *ptr1 +=1;
    cout<<"*ptr1= "<<*ptr1<<endl;

    int x = getNum2();
    cout<<"x= "<<x<<endl;

    int y = 10;
    getNum3(&y);
    y+=1;
    cout<<"y= "<<y<<endl;

    int *ptr4 = getNum4();
    *ptr4+=1;
    cout<<"*ptr4= "<<*ptr4<<endl;



    return 0;
}