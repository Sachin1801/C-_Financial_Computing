#include"Option01.h"
#include"Bino_Tree_Mod.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
using namespace fre;

int main(){
    double S0=106.00, U=1.15125, D=0.86862, R=1.00545;
    const int N=8;
    double K=100.00;


    if(ValididateInputData(S0,U,D,R)==-1){
        return -1;
    }
    double optionPrice = PriceByCRR(S0,U,D,R,N,K);
    cout<<"The price of the European call option is: "<<fixed<<setprecision(2)<<optionPrice<<endl;
    
    return 0;    
}