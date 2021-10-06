/*
*  Program name:MovieData.cpp
*  Author: Emmanuel Adebanjo
*  Date last updated: 10/05/2021
*  Purpose: This program prompts the user for input and allows all of these member data values to be specified. The program then creates two MovieData variables and uses a method diplayMovie(MovieData) to display the information about the movie in a clearly formatted manner. */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Declaring the struct
struct MovieData {
  //Declare variable
        string title;
        string director;
        string genre;
        int year;
        int runningTime;
    }
    movie;

    void displayMovie();

  
     int main()
    {
      //Accepts input from the user
        cout << "Details of the movie" << endl;
        cout << "Enter title of the movie: ";
        getline (cin, movie.title);
        cout << "Enter the genre of the movie: ";
        getline (cin, movie.genre);
        cout << "Enter the Director of the movie: ";
        getline (cin,movie.director);
        cout << "Enter the year it was relaesed: ";
        cin >> movie.year;
        cout << "Enter Running Time: ";
        cin >> movie.runningTime;

        displayMovie();
    }


    void displayMovie()
    {
//Displays the output to the user.
        cout << "-----------------------";
        cout << "\nTitle: " << movie.title << endl;
        cout<< "Genre: "<< movie.genre<< endl;
        cout << "Director: "<< movie.director << endl;
        cout << "Year: " << movie.year << endl;
        cout << "Running Time: " << movie.runningTime << " minutes"                 
     << endl;
    }
      
  
