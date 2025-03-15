#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

const int SIZE = 81;

int main(){

    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    
    double u = 1.15125, d = 0.86862;
    double s0 = 106.00;
    double aPrice =0.0;
    //declare 2D arrays to store asset prices and option price
    double prices[SIZE];
    
    for(int i = 0;i<SIZE;i++){
        prices[i]= 0.0;
    }

    //compute the asset prices at node n=8, i=0,1,2,...,8
    int index= 0;
    for(int n=0;n<=8;n++){
        for(int i=0;i<=n;i++){
            aPrice = s0*pow(u,i)*pow(d,n-i);
            prices[index++]= aPrice;
        }
    }

    for(int i = 0;i<SIZE;i++){
        cout<<"Asset price at Binomial Tree Node("<<i<<")="<<fixed<<setprecision(2);
        cout<<prices[i]<<endl;
    }
    return 0;
}