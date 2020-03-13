/** lrgDataCreatorI.h**/
#ifndef lrgDataCreatorI_h
#define lrgDataCreatorI_h
#include <vector>
class DataCreator {
        public:
            virtual std ::vector<std::pair<double, double> > GetData()=0;
};

#endif
