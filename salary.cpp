/////////////////////////////////////////////////////////////////////////////////////////////////
//  Name: Joshua Stromberg
//  Program description: This program uses if/elif statements to process the amount of hours
//  that the user has input based on prompts they are given using cin/cout statements.
//  The program then multiplies the hours worked by 12 or uses a formula to determine the salary
//  of workers who work over 40 hours, the salary is determined by if/elif statements.
//
//  INPUT: Number of hours worked
//  OUTPUT: Weekly salary in dollars
//  PROCESSES: Basic mathematical formulas used and are chosen based on certain conditions found
//             by the if/elif statements
/////////////////////////////////////////////////////////////////////////////////////////////////
 
#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {   // Standard main program by XCODE
    std::cout << "How many hours did you work this week?  "; //Print a statement requesting input
     
    float hoursWorked; //convert input into a float so it can be put into formula
     
    std::cin >> hoursWorked; //create a storage space for the number of hours worked
     
    if ((hoursWorked <= 40) && (hoursWorked >= 0))
        // first if statement on condition of hours worked
         
        std::cout << "Your weekly salary is $" << hoursWorked * 12;
        // if number hours worked between 0 and 40 multiply the hours by $12 and print salary
     
    else if (hoursWorked > 40)
         
        std::cout << "Your weekly salary is $" << ((hoursWorked - 40) * 18) + 480;
        // if number of hours worked is greater than 40 multiply the hours that exceed 40 by 18 and add $480 for the 40 hours worked at $12/hour
     
    else if (hoursWorked < 0)
        std::cout << "It is impossible to work a negative amount of time. Please try again.";
        // if user inputs less less than zero hours, prompt user to run the program again
     
    return 0;
}
