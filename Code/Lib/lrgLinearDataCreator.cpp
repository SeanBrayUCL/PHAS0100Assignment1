// lrgLinearDataCreator.cpp
#include "lrgLinearDataCreator.h"
#include <vector>
#include <algorithm>
#include <random>


 
// Date constructor
LinearDataCreator::LinearDataCreator(int parameter1, int parameter2, int numpoints)
{
    SetLinearDataCreator(parameter1, parameter2, numpoints);
}
 
// Date member function
void LinearDataCreator::SetLinearDataCreator(int parameter1, int parameter2, int numpoints)
{
    m_parameter1 = parameter1;
    m_parameter2 = parameter2;
    m_numpoints = numpoints;
}

std ::vector<std::pair<double, double> > LinearDataCreator ::GetData() 
{
  std::vector<double> x(this-> getnumpoints());
  std::vector<double> noise(this-> getnumpoints());
  std::vector<double> test;
  std::vector< std::pair <double,double> > final; 
  int parameter1 = this-> getparameter1();
  int parameter2 = this-> getparameter2();
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
               [parameter1, parameter2](double x1, double x2) {return(parameter1*x1 +parameter2+x2);});
    
    // Entering values in vector of pairs 
    for (int i=0; i<this-> getnumpoints(); i++) 
        final.push_back( std::make_pair(x[i],test[i]) );
    
    return final;
};

