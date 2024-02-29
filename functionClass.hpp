//
// made by fixedOtter on 2.23.2024
//
#include <iostream>
#include <vector>

class userFunction {
  // actual values for the data
  private:
    // f of x
    std::string function;
    // derivative of f of x
    std::string derivative;
    // users guess of where zero is
    double zero;
    // list of known x values in the iteration
    std::vector<double> xAtnList;
    // list of known adjustments
    std::vector<double> adjustmentList;
    // function index (of vector functionList in main)
    int index;

    // getting and setting the values
  public:
    // setters
    void setFunction(std::string userFunction);
    void setDerivativeFunction(std::string userDerivative);
    void setZeroGuess(double zeroGuess);
    void setXList(std::vector<double> xs);
    void setAdjustmentList(std::vector<double> adjList);
    void setIndex(int i);
  
    // getters
    std::string getFunction();
    std::string getDerivative();
    double getFunctionAtX(double x);
    double getDerivativeAtX(double x);
    double getZeroGuess();
    std::vector<double> getXList();
    std::vector<double> getAdjList();
    int getIndex();
};