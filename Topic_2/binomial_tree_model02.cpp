#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main(){

    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    
    double u = 1.15125, d = 0.86862;
    double s0 = 106.00;

    for(int n = 0;n<=8;n++){
        for(int i = 0;i<=n;i++){
            cout<<"Asset price at Binomial Tree Node("<<n<<","<<i<<")="<<fixed<<setprecision(2);
            cout<<s0*pow(u,i)*pow(d,n-i)<<endl;
        }
    }
    return 0;
}