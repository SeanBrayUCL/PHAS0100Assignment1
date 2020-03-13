/** lrgLinearModelSolverStrategyI.h**/
#include <vector>
class LinearModelSolverStrategy {
        public:
            virtual std ::pair<double, double>  FitData(std::vector<std::pair<double, double> >)=0;
};


