/* Program name: Area of a circle.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 09/20/2021
* Purpose: Prompts the user to enter the center and a point on a cirle, then output the cirlce's radius, diameter, circumference, and area. 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Declare the variables
   double x1,x2;
   double Y1,Y2;

//this function receives the x-y coordinates of the center and point on the circle (as input by the user) and calculates the distance between the points.
double calculateRadius(double x1, double x2,double Y1, double Y2)
{
  //calculates the radius
  return sqrt(pow(x2 - x1, 2) + pow(Y2 - Y1, 2));  
}

//receives the radius of a circle, calculates and returns the area of the circle.
double calculateArea(double radius)
{
 return M_PI * pow(radius, 2);
}

//Receives the radius of a circle, calculates and returns the circumference of the circle.
float calculateCircumference(double radius)
{
 return 2 * M_PI * radius;
}


int main() 
{ 
  //prompts the user to enter the center and a point on the circle
  cout<< "Enter the x and y coordinates of center of the circle: "<< endl;
  cin>>x1>>x2;

  cout<< "Enter the x and y coordinates of a point on the circle: "<< endl;
  cin>>Y1>>Y2;

//assign the value gotten from calcuteRadius to radius
  double radius = calculateRadius(x1,x2,Y1,Y2);

  cout<<endl;

  //output the circle’s radius
  cout  << "Radius: " <<fixed << setprecision(2) << radius <<endl;

  //output the circle’s diameter
  cout<< "Diameter:  "<< radius + radius<< endl;

  //output the circle’s circumference
  cout << "Cirucumference:  "<< fixed << setprecision(2)<< calculateCircumference(radius) << endl;

  //output the circle’s area
  cout <<"Area: "<< fixed << setprecision(2)<<calculateArea(radius) << endl;
}
