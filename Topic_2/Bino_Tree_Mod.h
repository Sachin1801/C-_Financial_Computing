#pragma once

namespace fre{

    //compute the risk-neutral probability
    double RiskNeutProb(double U, double D, double R);

    //compute asset prices at node n,i
    double CalculateAssetPrice(double S0,double U, double D, double n, double i);

    // input, display and check model data
    int GetInputData(double& S0, double &U, double &D, double &R);

    //validate input data for binomial tree model
    int ValididateInputData(const double &S0, const double &U, const double &D, const double &R);
}