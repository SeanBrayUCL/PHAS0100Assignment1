// lrgLinearDataCreator.cpp
#include "lrgGradientDescentSolverStrategy.h"
#include <vector>
#include <algorithm>
#include <random>
#include <Eigen/Dense>

// Date constructor
GradientDescentSolverStrategy::GradientDescentSolverStrategy(double intialintercept, double initialslope, double learning_rate, int iterations)
{
    SetGradientDescentSolverStrategy(intialintercept, initialslope, learning_rate, iterations);
}
 
// Date member function
void GradientDescentSolverStrategy::SetGradientDescentSolverStrategy(double intialintercept, double initialslope, double learning_rate, int iterations)
{
    m_intialintercept = intialintercept;
    m_initialslope = initialslope;
    m_learning_rate = learning_rate;
    m_iterations = iterations;
}

std ::pair<double, double>  GradientDescentSolverStrategy ::FitData(std::vector<std::pair<double, double> > x)
{
 std::vector<double> ones(x.size(), 1);
 int i;
 double learning_rate = getlearning_rate();
 Eigen::MatrixXd m(x.size(),2);
 Eigen::VectorXd y(x.size());
 Eigen::MatrixXd res(2,1);

 for (int i=0; i<x.size(); i++) 
        m(i,0) = ones[i];
 
 for (int i=0; i<x.size(); i++) 
        m(i,1) = x[i].first;
 
 for (int i=0; i<x.size(); i++) 
        y(i) = x[i].second;

res(0,0) = 1;
res(1,0) = 1;

i = 0;
while(i<this-> getiterations()){
    res =res -learning_rate*(1/x.size())*m.transpose()*(m*res-y);
    i++;
}

    
return std::make_pair(res(0,0), res(1,0));

};

