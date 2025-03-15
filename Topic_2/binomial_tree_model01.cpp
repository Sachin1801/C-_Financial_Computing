#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main(){

    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    
    double u = 1.15125, d = 0.86862;
    double s0 = 106.00;

    //compute asset prices at node n=3, i=2;
    int n = 3, i = 2;
    //this fixed and set precision is from iomanip library
    cout << "Asset prices at node n=3, i=2:"<<fixed<<setprecision(2)<< endl;
    cout<< s0*pow(u,i)*pow(d,n-i)<<endl;


    return 0;
}