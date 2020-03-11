/** lrgDataCreatorI.h**/
#include <vector>
class DataCreator {
        public:
            virtual std ::vector<std::pair<double, double> > GetData()=0;
};


