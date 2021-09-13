/* Program name: Distance travelled.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 09/12/2021
* Purpose: Calculates the distance a vehicle has travelled by asking the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled.
*/

#include <iostream>

using namespace std;

int main(){

  // Declare the variables
  int dist,spd,tim,logic;

  dist = 0;
  logic = 1;

//Accepts and stores input from the user
   cout<<"What is the speed of the vehicle in mph ?" << endl;
    cout <<" Do not input a negative number!: "<< endl;
    cin >> spd;

    cout<<"How many hours has it travelled ?" <<endl;
    cout<<" Do not input a value less than 1. :"<< endl;
    cin >> tim;
  
//Validates the input to make sure Speed of the vehicle is not negative
  //and hours travelled is not less than 1.
    if (spd < 0 || tim < 1)
      {
        cout << "You entered an invalid input. " <<endl;
         cout << "Speed of the vehicle cannot be a negative number. " <<endl;
          cout << "Hours can not be less than 1. " <<endl;
        
      }
     else
     {
        cout<< "                           "<< endl;
        cout<< "Hours    " << "Distance Travelled"<< endl; 
        cout<< "-----------------------------"<< endl;
       
       //This loop calculates and displays the distance travelled every hour of the given period.   
              while (tim  >= 1)
          {

            dist = spd * logic ;
            cout << logic << "           "<< dist<< endl;
            tim --;
            logic++;
          }
            cout << "Thank you! Drive safely.";
     }
}
