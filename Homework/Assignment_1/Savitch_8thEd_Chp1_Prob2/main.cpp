/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 28, 2017, 12:30 PM
 * Purpose: Edit peas in a pod to include hello and goodbye.
 */

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
   int podnum,podpeas,totalp;
    cout << "Hello.\n"; 
    cout << "Press return after entering a number.\n";
    cout << "Enter number of pods:\n";
    
    cin  >> podnum;
    
    cout << "Enter the number of peas in a pod:\n";
    cin  >> podpeas;
    totalp = podnum * podpeas;
    cout << "If you have ";
    cout << podnum;
    cout << "pea pods\n";
    cout << "and ";
    cout << podpeas;
    cout << " peas in a pod, then\n";
    cout << "You have ";
    cout << totalp;
    cout << " peas in all the pods.\n";
    cout << "Goodbye.";
    
    
    
    return 0;
}