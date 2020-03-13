/** lrgLinearDataCreator.h **/
#include "lrgLinearModelSolverStrategyI.h"
#include <vector>

class NormalEquationsSolverStrategy : public LinearModelSolverStrategy {
     public:
     std ::pair<double, double>  FitData(std::vector<std::pair<double, double> > x);
    
};
 
 