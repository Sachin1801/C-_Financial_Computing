#include"Option02.h"
#include"Bino_Tree_Mod.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
using namespace fre;

int main(){
    double S0,U,D,R;
    if(GetInputData(S0,U,D,R)!=0){
        return -1;
    }
    int N=0;
    double K=0.0;

    cout<<"Enter call option data: "<<endl;
    GetInputData(N,K);

    double *optionPrice = NULL;
    optionPrice = PriceByCRR(S0,U,D,R,N,K,CallPayoff);

    cout<<"The price of the European call option is: "<<fixed<<setprecision(2)<<optionPrice[0]<<endl;
    delete [] optionPrice;

    optionPrice = NULL;
    optionPrice = PriceByCRR(S0,U,D,R,N,K,PutPayoff);
    cout<<"The price of the European put option is: "<<fixed<<setprecision(2)<<optionPrice[0]<<endl;
    delete [] optionPrice; // to avoid memory leak
    optionPrice = NULL; // to avoid dangling pointer
    return 0;    
}