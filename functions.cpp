#include <iostream>
#include "functions.h"

int a, b, Oper;
float c, d, divi;

void  math::questions_number_add(){
 std::cout << "Enter your first number" << std::endl;
 std::cin >> a;
  
 std::cout << "Enter your second number" << std::endl;
 std::cin >> b;
 
 Oper = a+b;
 std::cout << a << " + " << b << " = " << Oper << std::endl; 
}

void  math::questions_number_sub(){
 std::cout << "Enter your first number" << std::endl;
 std::cin >> a;
  
 std::cout << "Enter your second number" << std::endl;
 std::cin >> b;
 
 Oper = a-b;
 std::cout << a << " - " << b << " = " << Oper << std::endl; 
}

void  math::questions_number_mult(){
 std::cout << "Enter your first number" << std::endl;
 std::cin >> a;
  
 std::cout << "Enter your second number" << std::endl;
 std::cin >> b;
 
 Oper = a*b;
 std::cout << a << " * " << b << " = " << Oper << std::endl; 
}


void  math::questions_division(){
 std::cout << "Enter your first number" << std::endl;
 std::cin >> c;
  
 std::cout << "Enter your second number" << std::endl;
 std::cin >> d;
 
 divi = c/d;
 std::cout << c << " / " << d << " = " << divi << std::endl; 
}
