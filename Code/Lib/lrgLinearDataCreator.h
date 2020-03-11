/** lrgLinearDataCreator.h **/
#include "lrgDataCreatorI.h"
#include <vector>

class LinearDataCreator : public DataCreator { 
public:
    std ::vector<std::pair<double, double> > GetData();
};
