/** lrgLinearDataCreator.h **/
#include "lrgDataCreatorI.h"
#include <vector>

class LinearDataCreator : public DataCreator {
        
private:
    int m_parameter1;
    int m_parameter2;
    int m_numpoints;
 
public:
    LinearDataCreator(int parameter1, int parameter2, int numpoints);
 
    void SetLinearDataCreator(int parameter1, int parameter2, int numpoints);
 
    int getparameter1() { return m_parameter1; }
    int getparameter2() { return m_parameter2; }
    int getnumpoints()  { return m_numpoints; }

    std ::vector<std::pair<double, double> > GetData();
};

