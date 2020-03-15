/** lrgGradientDescentSolverStrategy.h **/
#include "lrgLinearModelSolverStrategyI.h"
#include <vector>
#include <Eigen/Dense>

class GradientDescentSolverStrategy : public LinearModelSolverStrategy {

    private:
    double m_intialintercept;
    double m_initialslope;
    double m_learning_rate;
    int m_iterations;

    public:
    GradientDescentSolverStrategy(double intialintercept, double initialslope, double learning_rate, int iterations);
 
    void SetGradientDescentSolverStrategy(double intialintercept, double initialslope, double learning_rate, int iterations);
 
    double getintialintercept() { return m_intialintercept; }
    double getinitialslope() { return m_initialslope; }
    double getlearning_rate() { return m_learning_rate; }
    int getiterations()  { return m_iterations; }

    std ::pair<double, double>  FitData(std::vector<std::pair<double, double> > x);
    
};
 
 