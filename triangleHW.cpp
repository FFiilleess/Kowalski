/* Program name: triangles.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 09/0c/2021
* Purpose: Accept the input of three length from a user.
           Determine if it forms a triangle or not.
*          Also determine if it is a RIGHT angle triangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c;
    float hyp = 0.0;

    cout<< "Enter the length of the three sides a,b,c: "<< endl<<
    "Press the 'Enter' key after each entry."<< endl;
    cin >>a >>b >>c;

    if (a == 0 || b == 0 || c == 0)
    {
        cout << "You entered a wrong input" << endl <<
        "The lenght must be greater than 1" << endl;
    }
    else if (a + b > c && b + c > a && c + a > b)
    {
        cout<< "The three sides you entered forms a triangle" << endl <<
        "You have a valid triangle"<< endl;
    }
    else {
        cout << endl<< "The three sides you entered do not form a triangle" << endl;
    }

    if ((b < a && a > c) && (pow(b,2)+ pow(c,2)==pow(a,2)))
        {
            hyp = a ;
            cout << "You entered : "<< hyp<< " "<<b << " "<<c <<endl;
            cout << "The longest side is: "<< hyp<< endl<<
            "The Triangle is a RIGHT Traingle."<< endl;
        }
        else if ((a < b && b > c) && (pow(c,2)+pow(a,2)==pow(b,2)))
        {
            hyp = b ;
            cout << "You entered : "<< hyp<< ", "<<a << ", "<<c <<endl;
            cout << "The longest side is: "<< hyp<< endl<<
            "The Triangle is a RIGHT Traingle."<< endl;
        }
        else if ((a < c && c > b) && (pow(a,2)+pow(b,2)==pow(c,2)))
        {
            hyp = c ;
            cout << "You entered : "<< hyp<< " ,"<<b << " ,"<<a <<endl;
            cout << "The longest side is: "<< hyp<< endl<<
            "The Triangle is a RIGHT Traingle."<< endl;
        }
        else {
            cout << "You entered : "<< a<< " ,"<<b << ", "<<c <<endl;
            cout << "The Triangle is not a RIGHT Triangle"<< endl;
        }
    }
