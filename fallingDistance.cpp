#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Declare the variables
   float g = 9.8;
  float d,t;
  int x;


// Creating a function named fallingDistance
float fallingDistance(float t)
{
  //formula for determining the dictance
   d=(pow(t,2) * g)/2;
   
  return 0;
}
int main() 
  
{ 
  //Accepts the falling time from the user 
  cout << "Enter the objects falling time (in seconds): "<< endl;
  cin>> t;
  cout<< setw(5)<< "Time(sec)" << setw(25)<< "Distance(m)"<< endl;
  
  //this loop calls the function,calculates and displays the elapsed time and return value. 
  //the loop keeps running until x = t, x also has an increament of 5
  for (x= 0; x <=t; x+=5)
      {
    fallingDistance(x);
       cout<< setw(5)<<fixed<<setprecision(1) << x 
     << setw(25)<< d <<fixed<<setprecision(1) << endl;
  }
}
