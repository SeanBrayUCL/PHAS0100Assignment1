/** lrgGradientDescentSolverStrategy.h **/
#include "lrgLinearModelSolverStrategyI.h"
#include <vector>
#include <Eigen/Dense>

class GradientDescentSolverStrategy : public LinearModelSolverStrategy {

    private:
    std ::pair<double, double> m_intialvalue;
    double  m_learning_rate;
    int m_iterations;

    public:
    GradientDescentSolverStrategy(std ::pair<double, double> intialvalue, double learning_rate, int iterations);
 
    void SetGradientDescentSolverStrategy(std ::pair<double, double> intialvalue, double learning_rate, int iterations);
 
    std ::pair<double, double> getintialvalue() { return m_intialvalue; }
    double getlearning_rate() { return m_learning_rate; }
    int getiterations()  { return m_iterations; }

    std ::pair<double, double>  FitData(std::vector<std::pair<double, double> > x);
    
};
 
 