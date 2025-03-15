#pragma once

namespace fre{
    //inputting and displaying option data
    //fucntion overloading with different parameters
    // int GetInputData(int &N , double &K); this is used in OptionPricer02.cpp
    //this is a polymorphism feature of c++
    int GetInputData(int &N , double &K);
    
    //pricing european call option
    double * PriceByCRR(double S0, double U, double D, double R, int N, double K, double (*Payoff)(double Z, double K));

    //computing call payoff
    double CallPayoff(double z, double K);

    //computing put payoff
    double PutPayoff(double z, double K);
}