// lrgLinearNormalEquationsSolverStrategy.cpp
#include "lrgNormalEquationsSolverStrategy.h"
#include <vector>
#include <Eigen/Dense>



std ::pair<double, double>  NormalEquationsSolverStrategy::FitData(std::vector<std::pair<double, double> > x)
{
 std::vector<double> ones(x.size(), 1);
 std::vector< std::pair <double,double> > input;
 Eigen::MatrixXd m(x.size(),2);
 Eigen::VectorXd y(x.size());
 Eigen::MatrixXd res(2,1);

 for (int i=0; i<x.size(); i++) 
        m(i,0) = ones[i];
 
 for (int i=0; i<x.size(); i++) 
        m(i,1) = x[i].first;
 
 for (int i=0; i<x.size(); i++) 
        y(i) = x[i].second;

res = (m.transpose() * m).ldlt().solve(m.transpose()*y);

return std::make_pair(res(0), res(1));

       
};
