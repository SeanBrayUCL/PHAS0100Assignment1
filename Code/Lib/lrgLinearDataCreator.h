/** lrgLinearDataCreator.h **/
#include "lrgDataCreatorI.h"
#include <vector>

class LinearDataCreator : public DataCreator {
        
private:
    int m_intercept;
    int m_slope;
    int m_numpoints;
 
public:
    LinearDataCreator(int intercept, int slope, int numpoints);
 
    void SetLinearDataCreator(int intercept, int slope, int numpoints);
 
    int getintercept() { return m_intercept; }
    int getslope() { return m_slope; }
    int getnumpoints()  { return m_numpoints; }

    std ::vector<std::pair<double, double> > GetData();
};

