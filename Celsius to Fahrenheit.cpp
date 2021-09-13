/* Program name: Celsius to Fahrenheit.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 09/12/2021
* Purpose: Calculates and displays a table of the Celsius temperatures and their *Fahrenheit equivalents within the lower range and upper range of values provided by the user..
*/

#include <iostream>

using namespace std;

int main(){

//Declare the variables
  int uppr,lowr,Fah;

  //Accept the lower and upper range value from the user. 

   cout<<"Enter the lower range of temparature in Celsius  :" << endl;
    cin >> lowr;

    cout<< "                           "<< endl;

    cout<<"Enter the upper range of temparature in Celsius." <<endl;
    cout<<" It must be greater than the value for the lower range . :"<< endl;
    cin >> uppr;

//Validates the input to make sure the upper range value 
//is greater than the lower range value
    if (lowr > uppr)
      {
        cout << "You entered an invalid input. " <<endl;
         cout << "Upper range must me greater than the lower range. " <<endl;
        
      }
     else
     {
        cout<< "-----------------------------"<< endl;

        //This loop calculates and displays the equivalent of Celsius Temperature in Fahrenheit.
        //It runs untill the lower value is greater that the upper value. 
       while (uppr >= lowr)
          {

            Fah =9/5 * lowr +32;
            cout <<"The equivalent of " <<lowr << " degree Celsius in Fahrenheit is "<< Fah<<"."<< endl;
            //Increases the lower value by 1, everytime the loop runs.
            lowr++;
          }
     }
}
