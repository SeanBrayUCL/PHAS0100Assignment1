/** lrgFileLoaderDataCreator.h **/
#include "lrgDataCreatorI.h"
#include <vector>
#include <string>
#include <fstream>

class FileLoaderDataCreator : public DataCreator {    

private:
    std ::string m_filename;
     
public:
    FileLoaderDataCreator(std ::string filename);
 
    void SetFileLoaderDataCreator(std ::string filename);
 
    std ::string getfilename() { return m_filename; }

std ::vector<std::pair<double, double> > GetData();
};
