/* Program name: BMI_calc.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 09/02/2021
* Purpose: Calculates and displays a person's body mass index (BMI).
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float weight,height,inches;
    float BMI;

  cout << "Enter your weight in pounds,height in feet."<< endl; 
  cout <<"separated by a space: "<<endl;
  cin >> weight>> height;

inches = (height*12);
BMI = ((weight * 703) / pow(inches,2));
std::cout << std::fixed << std::setprecision(2) ;

  if (weight == 0 || height == 0)
    {
        cout << "You entered a wrong input" << endl <<
        "Your input must be greater than 0" << endl;
    }
    else if ( BMI < 18.5)
    {
        cout << "Your BMI is " << BMI << endl;
        cout<< "You are underweight." << endl;
    }
    else if ( BMI > 25)
    {
        cout << "Your BMI is " << BMI << endl;
        cout<< "You are overweight." << endl;
    }
    else
    {
        cout << "Your BMI is "<< BMI << endl;
        cout<< "Your weight is satisfactory." << endl;
    }
  return 0;
}
