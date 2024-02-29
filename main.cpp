//
// made by fixedOtter on 2.23.2024
//
#include <iostream>
#include <vector>
//#include "functionParser.hpp"
//#include "getUserInput.hpp"
#include "functionClass.hpp"

/*
  Gameplan:

  Get user input
    1: function to use
    2: derivative? (would be nice to calculate derivative down the road)
    3: initial guess
    4: largest allowed adjustment value
      validate?

  Pass function & initial guess into function parser to get f(xn) 
    Return f(xn)

  Pass f' into function parser to get f'(xn)
    Return f'(xn)

  Calculate adjustment amount
    f(xn)/f'(xn)
    validate?

  Calc Xn+1
    Xn - adjustment = Xn+1

  Continue to iterate until adjustment amount is less than required
*/

int main () {
  // initialize looping var
  bool quit = 0;
  
  // while loop to continue with different functions
  while (!quit) {
    // index value
    int i = 0;

    // getting input
    std::cout << "Please enter the function you'd like to add.\n Please use in terms of x and identify "

    // making our current function object
    userFunction curFunction;
    
    // makes a vector list of user functions and adds current function
    std::vector<userFunction> functionList;
    functionList.push_back(curFunction);

    // set index on current function
    functionList.at(i).setIndex(i);

    getUserInput();

  }

  return 0;
}