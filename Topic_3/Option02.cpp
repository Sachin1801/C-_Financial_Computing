#include"Option02.h"
#include"Bino_Tree_Mod.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
namespace fre{

    int GetInputData(int &N , double &K){
        cout<<"Enter steps to expiry N: ";
        cin>>N;
        cout<<"Enter strike price K: ";
        cin>>K;
        return 0;
    }

    double* PriceByCRR(double S0,double u, double D, double R, int n, double K, double (*Payoff)(double Z, double K)){
        double q = RiskNeutProb(u,D,R);
        double *Price = new double[n+1];

        for(int i=0;i<=n;i++){
            Price[i]=Payoff(CalculateAssetPrice(S0,u,D,n,i),K);
        }

        for(int N= n-1; N>=0;N--){
            for(int i=0;i<=N;i++){
                Price[i] = (q*Price[i+1]+(1-q)*Price[i])/(R);
            }
        }
        return Price;
    }

    double CallPayoff(double z, double K){
        if(z>K) return z-K;
        return 0.0;
    }

    double PutPayoff(double z, double K){
        if(z<K) return K-z;
        return 0.0;
    }
}
