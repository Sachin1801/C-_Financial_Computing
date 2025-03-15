#pragma once

namespace fre{
    //pricing european call option
    double PriceByCRR(double S0, double U, double D, double R, int N, double K);

    //computing call payoff
    double CallPayoff(double z, double K);
}