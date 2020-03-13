/** lrgFileLoaderDataCreator.cpp **/
#include "lrgFileLoaderDataCreator.h"
#include <vector>
#include <fstream>
#include <string>

// Date constructor
FileLoaderDataCreator::FileLoaderDataCreator(std ::string filename)
{
    SetFileLoaderDataCreator(filename);
}
 
// Date member function
void FileLoaderDataCreator::SetFileLoaderDataCreator(std ::string filename)
{
    m_filename = filename;
}


std ::vector<std::pair<double, double> > FileLoaderDataCreator ::GetData() 
{
 std::fstream myfile(this-> getfilename(), std::ios_base::in);
 std::vector< std::pair <double,double> > data;
 float a, b;
 while (myfile >> a >> b)
 {
 data.push_back( std::make_pair(a,b));            
 };
 return data;
};

