#include"Option01.h"
#include"Bino_Tree_Mod.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
namespace fre{
    double PriceByCRR(double S0,double u, double D, double R, int n, double K){
        double q = RiskNeutProb(u,D,R);
        double Price[n+1];

        for(unsigned int i=0; i< sizeof(Price)/sizeof(Price[0]);i++){
            Price[i]=0.0;
        }

        for(int i=0;i<=n;i++){
            Price[i]=CallPayoff(CalculateAssetPrice(S0,u,D,n,i),K);
        }

        for(int N= n-1; N>=0;N--){
            for(int i=0;i<=N;i++){
                Price[i] = (q*Price[i+1]+(1-q)*Price[i])/(R);
            }
        }
        return Price[0];
    }

    double CallPayoff(double z, double K){
        if(z>K) return z-K;
        return 0.0;
    }
}
