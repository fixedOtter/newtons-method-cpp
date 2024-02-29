//
// made by fixedOtter on 2.23.2024
//
#include <iostream>
#include <vector>
#include "functionClass.hpp"

// setters
void userFunction::setFunction(std::string userFunction) {
  function = userFunction;
}
void userFunction::setDerivativeFunction(std::string userDerivative) {
  derivative = userDerivative;
}
void userFunction::setZeroGuess(double zeroGuess) {
  zero = zeroGuess;
}
void userFunction::setXList(std::vector<double> xs) {
  xAtnList = xs;
}
void userFunction::setAdjustmentList(std::vector<double> adjList) {
  adjustmentList = adjList;
}
void userFunction::setIndex(int i) {
  index = i;
}

// getters
std::string userFunction::getFunction() {
  return function;
}
std::string userFunction::getDerivative() {
  return derivative;
}
double userFunction::getFunctionAtX(double x) {
  double fx;
  // calculate f(x)
  return fx;
}
double userFunction::getDerivativeAtX(double x) {
  double dydx;
  //calculate dydx
  return dydx;
}
double userFunction::getZeroGuess() {
  // won't actually end program LOL
  return zero;
}
std::vector<double> userFunction::getXList() {
  return xAtnList;
}
std::vector<double> userFunction::getAdjList() {
  return adjustmentList;
}
int userFunction::getIndex() {
  return index;
}