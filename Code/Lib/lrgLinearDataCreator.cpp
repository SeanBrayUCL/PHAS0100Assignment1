// lrgLinearDataCreator.cpp
#include "lrgLinearDataCreator.h"
#include <vector>
#include <algorithm>
#include <random>


 
// Date constructor
LinearDataCreator::LinearDataCreator(int intercept, int slope, int numpoints)
{
    SetLinearDataCreator(intercept, slope, numpoints);
}
 
// Date member function
void LinearDataCreator::SetLinearDataCreator(int intercept, int slope, int numpoints)
{
    m_intercept = intercept;
    m_slope = slope;
    m_numpoints = numpoints;
}

std ::vector<std::pair<double, double> > LinearDataCreator ::GetData() 
{
  std::vector<double> x(this-> getnumpoints());
  std::vector<double> noise(this-> getnumpoints());
  std::vector<double> test;
  std::vector< std::pair <double,double> > final; 
  int intercept = this-> getintercept();
  int slope = this-> getslope();
  std::random_device rd; 
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(0.0, 10.0);
  std::uniform_real_distribution<> dis2(0.0, 1.0);

// Generate 10 random numbers by lambda func and fill it in vector
	std::generate(x.begin(), x.end(), [&, dis]() mutable {
        return dis(gen);
	 });
 
    std::generate(noise.begin(), noise.end(), [&, dis]() mutable {
		return dis2(gen);
	 });
 
 
    std::transform(x.begin(), x.end(), noise.begin(), std::back_inserter(test),
               [slope, intercept](double x1, double x2) {return(intercept + slope*x1 + x2);});
    
    // Entering values in vector of pairs 
    for (int i=0; i<this-> getnumpoints(); i++) 
        final.push_back( std::make_pair(x[i],test[i]) );
    
    return final;
};

