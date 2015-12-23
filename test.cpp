#include <iostream>


#include "easyCLI.h"

using namespace std;

void start(){

}

int main(int argv, char *argc[])
{
  char reply;

  //this clear the screen
  clear();
  //go to the point x=10 and y=5
  gotoxy(10,5);
  //set char color to CYAN & background to RED
  color(CYAN,BLACK);
  cout << "How to use easyCLI? \n";
  color(GREEN,BLACK);
  cout<< "It's easy."<<endl;
  //An example of how to use _getch()
  cout <<"Are you sure to continue? (Y/n) :";
  reply=_getch();
  if (reply =='y'||reply=='Y'){
  color(CYAN,BLACK);
    cout<<"\nOk. Continue this example with me";
    start();
  }
  else
  {
    color(RED,BLACK);
    cout<<"\nOk. Get out of here."<<endl;
  }
  return 0;
}
