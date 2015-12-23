#include <iostream>


#include "easyCLI.h"
using namespace std;

int main(int arg, char *argc[])
{
  //this clear the screen
  clear();

  //go to the point x=10 and y=5
  gotoxy(10,5);

  //set char color to CYAN & background to RED
  color(CYAN,RED);
  cout << "How to use easyCLI? \n";
  color(GREEN,BLACK);
  cout<< "It's easy:"<<endl;


  return 0;
}
