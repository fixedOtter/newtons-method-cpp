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
    void setFunction(std::string userFunction) {
      function = userFunction;
    }
    void setDerivativeFunction(std::string userDerivative) {
      derivative = userDerivative;
    }
    void setZeroGuess(double zeroGuess) {
      zero = zeroGuess;
    }
    void setXList(std::vector<double> xs) {
      xAtnList = xs;
    }
    void setAdjustmentList(std::vector<double> adjList) {
      adjustmentList = adjList;
    }
    void setIndex(int i) {
      index = i;
    }
  
    // getters
    double getFunctionAtX(double x) {
      double fx;
      // calculate f(x)
      return fx;
    }
    std::string getFunction() {
      return function;
    }
    double getDerivativeAtX(double x) {
      double dydx;
      //calculate dydx
      return dydx;
    }
    std::string getDerivative() {
      return derivative;
    }
    double getZeroGuess() {
      // won't actually end program LOL
      return zero;
    }
    std::vector<double> getXList() {
      return xAtnList;
    }
    std::vector<double> getAdjList() {
      return adjustmentList;
    }
    int getIndex() {
      return index;
    }
};