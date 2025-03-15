#include "Bino_Tree_Mod.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
namespace fre
{
    double RiskNeutProb(double U, double D, double R)
    {
        return (R - D) / (U - D);
    }

    // compute asset prices at node n,i
    double CalculateAssetPrice(double S0, double U, double D, double n, double i)
    {
        return S0 * pow(U, i) * pow(D, n - i);
    }

    // input, display and check model data
    int GetInputData(double &s0, double &U, double &D, double &R)
    {
        cout << "Enter stock price: ";
        cin >> s0;
        cout << "Enter up, down, and risk-free interest rate: ";
        cin >> U >> D >> R;
        return 0;

        // making sure S0>0, U>D>0, R>0
        if (s0 <= 0 || U <= D || D <= 0 || R <= 0)
        {
            cout << "Invalid input data. Please check your inputs." << endl;
            cout << "Terminating the program. " << endl;
            return -1;
        }

        // checking for arbitrage opportunities
        if (R >= U || U <= D)
        {
            cout << "Arbitrage opportunity detected. Please check your inputs." << endl;
            cout << "Terminating the program. " << endl;
            return -1;
        }

        cout << "\n\nModel Data Input Successful!" << endl;
        cout << "Stock Price S0: " << s0 << endl;
        cout << "Up, Down, and Risk-Free Interest Rates: " << U << ", " << D << ", " << R << endl;
        return 0;
    }

    // validate input data for binomial tree model
    int ValididateInputData(const double &S0, const double &U, const double &D, const double &R)
    {
        // making sure S0>0, U>D>0, R>0
        if (S0 <= 0 || U <= D || D <= 0 || R <= 0)
        {
            cout << "Invalid input data. Please check your inputs." << endl;
            cout << "Terminating the program. " << endl;
            return -1;
        }

        // checking for arbitrage opportunities
        if (R >= U || U <= D)
        {
            cout << "Arbitrage opportunity detected. Please check your inputs." << endl;
            cout << "Terminating the program. " << endl;
            return -1;
        }
        return 0;
    }
}
