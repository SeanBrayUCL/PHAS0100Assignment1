// lrgLinearDataCreator.cpp
#include "lrgGradientDescentSolverStrategy.h"
#include <vector>
#include <algorithm>
#include <random>

// Date constructor
GradientDescentSolverStrategy::GradientDescentSolverStrategy(std ::pair<double, double> intialvalue, double learning_rate, int iterations)
{
    SetGradientDescentSolverStrategy(intialvalue, learning_rate, iterations);
}
 
// Date member function
void GradientDescentSolverStrategy::SetGradientDescentSolverStrategy(std ::pair<double, double> intialvalue, double learning_rate, int iterations)
{
    m_intialvalue = intialvalue;
    m_learning_rate = learning_rate;
    m_iterations = iterations;
}

std ::pair<double, double>  GradientDescentSolverStrategy ::FitData(std::vector<std::pair<double, double> > x)
{
 std::vector<double> ones(x.size(), 1);
 int i;
 double learning_rate = this-> getlearning_rate();
 Eigen::MatrixXd m(10,2);
 Eigen::VectorXd y(10);
 Eigen::MatrixXd res(2,1);

 for (int i=0; i<x.size(); i++) 
        m(i,0) = ones[i];
 
 for (int i=0; i<x.size(); i++) 
        m(i,1) = x[i].first;
 
 for (int i=0; i<x.size(); i++) 
        y(i) = x[i].second;

res(0,0) = this-> getintialvalue().first;
res(1,0) = this-> getintialvalue().second;

i = 0;
while(i<this-> getiterations()){
    res =res -learning_rate*(1/x.size())*m.transpose()*(m*res-y);
    i++;
}

    
return std::make_pair(res(0,0), res(1,0));

};

