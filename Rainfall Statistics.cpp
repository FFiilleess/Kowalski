/* Program name: Rainfall Statistics.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 09/28/2021
* Purpose: accepts the total rainfall for each of 12 months from the user and store it in an array of doubles. The program then compute the totalRainfall, averageRainfall, driestMonth, and wettestMonth.
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{

//Declare variables
const int No_Months = 12;
int rain;
int values[No_Months];
const int StringSize=15;
double total = 0;
double avg;
int largest,LargestMonth;
int smallest,SmallestMonth,count;

//Array with the names of the months
char p_months[No_Months][StringSize] = { "January",
"February", "March",
"April","May","June", "July",
"August", "September", "October",
"November", "December" };
for ( int month = 1; month <= No_Months; month++ )
{


  //Get monthly total rainfall from user
cout<<"Enter the total rainfall for "<<p_months[month-1]<<":";
cin >>rain;


//input validation
if ( rain < 0 )
{
cout << "You entered a negative number.try again" << endl;
cout << "Please reenter: ";
cin >> rain;
}

values[month-1]=rain;
total += rain;
}
cout << endl;

cout<<"Annual Rain Report for Marion County"<<endl;
cout << endl;

 //Get the monthly rainfalls
cout << "Total rainfall: " << total <<" inches" << endl;
cout << endl;


// Calculate the average amount of rainfall
avg = total / (double)No_Months;
cout << "Average monthly rainfall: "<< fixed << setprecision(2) <<  avg << " inches "<< endl;

for ( int month = 1; month <= No_Months; month++ )
{
largest = values[0];

//logic to find largest
for ( count = 1; count < No_Months; count++ )
{
if ( values[count] > largest )
{
  largest = values[count];
LargestMonth=count;
}
}


smallest = values[0];
//logic to find smallest
for ( count = 1; count < No_Months; count++ )
{
if ( values[count] < smallest )
{
smallest = values[count];
SmallestMonth=count;
}

}
}

// Disply the highest and lowest rainfall
cout << "The most rain fell in " << p_months[LargestMonth]<< " with "<<values[LargestMonth]<< " inches"<< endl;

cout << "The least rain fell in " <<p_months[SmallestMonth]<< " with "<<values[SmallestMonth]<< " inches"<< endl;

return 0;
}
