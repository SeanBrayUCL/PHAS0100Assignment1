#include <iostream>
#include <string>
#include "lrgLinearDataCreator.h"
#include "lrgNormalEquationsSolverStrategy.h"
#include "lrgGradientDescentSolverStrategy.h"
#include "lrgFileLoaderDataCreator.h"
#include <lrgExceptionMacro.h>

static void show_usage(std:: string name)
{
    std:: cerr << "Usage: " << name << "\n"
               << "Options:\n"
               <<"t-h, --help\t\tShow this help message\n"
               <<"-d, --data [MAKE, text file path]\tspecify MAKE to create data, or file path to read data from text file"
               <<"-s, --solver [NE, GD]\tspecify NE for NormalEquations solve, GD for GradientDescent solver"
               << std::endl;
}


int main(int argc, char** argv)
{
    int returnStatus = EXIT_FAILURE;

    try
  {


    if (argc < 4){
        show_usage(argv[0]);
        return 1;
    }

    std::string input_data;
    std:: string solver;
    std::string arg = argv[1];
    std::string arg2 = argv[2];
    NormalEquationsSolverStrategy NE;
    GradientDescentSolverStrategy GD(1,2,0.01,1000);
    for (int i =1; i < argc; ++i){
        if ((std::string(argv[i]) == "-h") || (std::string(argv[i]) == "--help")){
            show_usage(argv[0]);
            return 1;
        }
        else if ((std::string(argv[i]) == "-d") || (std::string(argv[i]) == "--data")){
            if (i+1 < argc){
                input_data = argv[i+1];
            }
            else{
                std:: cerr << "--data option requires one argument." << std::endl;
                return 1;
            }
        } else if ((std::string(argv[i]) == "-s") || (std::string(argv[i]) == "--solver")){
            if (i+1 < argc){
                solver = argv[i+1];
            }
            else{
                std:: cerr << "--solver option requires one argument." << std::endl;
                return 1;
            }
        }
    }
    if (input_data == "MAKE"){
        LinearDataCreator data(1,1,1000);
        if (solver == "NE"){
            std::cout << NE.FitData(data.GetData()).first << " "
             << NE.FitData(data.GetData()).second << std::endl;
        return 0;
        }
        if (solver == "GD"){
            std::cout << GD.FitData(data.GetData()).first << " "
            << GD.FitData(data.GetData()).second << std::endl;
        return 0;
        }

    }   else {
        FileLoaderDataCreator data(input_data);
        if (solver == "NE"){
            std::cout << NE.FitData(data.GetData()).first << " "
            << NE.FitData(data.GetData()).second << std::endl;
        return 0;
        }
        if (solver == "GD"){
            std::cout << GD.FitData(data.GetData()).first << " "
            << GD.FitData(data.GetData()).second << std::endl;
        return 0;
        }
    }
returnStatus = EXIT_SUCCESS;
  }

  catch (lrg::Exception& e)
  {
    std::cerr << "Caught lrg::Exception: " << e.GetDescription() << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << "Caught std::exception: " << e.what() << std::endl;
  }

return returnStatus;
}