#include"Bino_Tree_Mod.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
using namespace fre;
int main(){
    double u=1.15125 , d = 0.86862, r=1.00545;
    double s0 = 106.00;

    if(ValididateInputData(s0,u,d,r)==-1){
        return -1;
    }

    //compute asset prices at each node
    for(int n=0;n<=8;n++){
        for(int i=0;i<=n;i++){
            cout<<"Asset Price at node "<<n<<", "<<i<<": "<<fixed<<setprecision(2);
            cout<<CalculateAssetPrice(s0,d,u,n,i);
            cout<<endl;
        }
    }

    return 0;
}