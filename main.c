#include <iostream>
#include "functions.h"
using namespace std;

char o;
bool going =true;

int main()
{
 while(going == true){
  cout << "Press 'A', 'B', '1', or '2' to select: - + * or / respectivly. Input E to leave" << endl;
  cin >> o;
  switch (o)
  {
     case 'A':
     math::questions_number_sub();
     break;
     
     case 'B':
     math::questions_number_add();
     break;
     
     case '1':
     math::questions_number_mult();
     break;
     
     case '2':
     math::questions_division();
     break;
     
     case 'E':
     exit;
  return 0;
  } 
 }
}
