/** lrgLinearModelSolverStrategyI.h**/
#ifndef lrgLinearModelSolverStrategyI_h
#define lrgLinearModelSolverStrategyI_h
#include <vector>
class LinearModelSolverStrategy {
        public:
            virtual std ::pair<double, double>  FitData(std::vector<std::pair<double, double> >)=0;
};

#endif
