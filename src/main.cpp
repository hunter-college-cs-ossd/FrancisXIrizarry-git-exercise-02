/******************************************************************************
  Title          : main.cpp
  Author         : Shadow12ac
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  :
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity

  where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) ( ostream & out);


/******************************************************************************
        
                        All Function Definitions

******************************************************************************/

ostream& lineBeforeOddity(ostream &out);

ostream& shadow12ac_oddity(ostream & out);

ostream& anupamdas104_oddity(ostream & out){
	out << "Have you ever imagined a world with no hypothetical situations?\n";
	return out;
}

ostream& lashana29_oddity(ostream& out);

int main(int argc, char* argv[] )
{
    // Call to introductory line
    lineBeforeOddity(cout);
    // Calls to output functions
    anupamdas104_oddity(cout);
    shadow12ac_oddity(cout);
		lashana29_oddity(cout);



    return 0;
}

// serves as an introductory line before the N lines of oddity
ostream& lineBeforeOddity(ostream &out){
    out << "This is a collection of strange but true facts:" << endl;
    return out;
}

ostream& shadow12ac_oddity(ostream & out){
	out << "If a cow laughed, would milk come out her nose?" << endl;
	
	return out;
}

ostream& lashana29_oddity(ostream& out) {
	out << "If 7-11 is open 24 hours a day, 365 days a year, why are there locks on the doors?" << endl;
	return out;
}
