PHAS0100Assignment 1
------------------

[![Build Status](https://travis-ci.com/MattClarkson/Assignment1.svg?branch=master)](https://travis-ci.com/MattClarkson/Assignment1)
[![Build Status](https://ci.appveyor.com/api/projects/status/5pm89ej732c1ekf0/branch/master)](https://ci.appveyor.com/project/MattClarkson/cmakecatch2)


Purpose
-------
This is a simple application to perform linear regression. The application can read the input data from a .txt file, and then either perform the regression using the normal equations method, or the gradient descent method. The application also gives the user the option to generate their own test data.


Build Instructions
------------------

The project can be built using the following commands:
```
git clone https://github.com/SeanBrayUCL/PHAS0100Assignment1  (note: this repository is private, but command would work if public)
mkdir build
cd build
cmake ..
make
```

Command Line Interface 
----------------------

The application has a command line interface which the user can access from within the build folder after running the makes command using the following command:

```
cd bin
./lrgLinearRegression  (add arugments)
```
If the above run without arugments, instructions outlining how the command line tool should be used will be outputted.

To run the application the user needs to provides two commands summarised below:
```
-d or --data MAKE/Address of text file
-s or --solver NE/GD 
```
The --data option is where the user specifies the data to be used. Inputting --data MAKE will create data for the user to use, while --data followed by the address of the text file with input data will read the text file and use the data in the text file.

The --solver option is where the user specifies whether to use the Normal Equations method or the Gradient Descent method to perform the regression. Inputting --solver NE will use the Normal Equations, while --solver GD will use gradient descent.


