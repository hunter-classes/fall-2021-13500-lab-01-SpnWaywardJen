/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1A

A program that asks the user to input two integer numbers and
prints out the smaller of the two.
*/

#include <iostream>

int main()
{
   int first, second, smaller;
   std::cout << "Enter the first number: ";
   std::cin >> first;
   std::cout << "Enter the second number: ";
   std::cin >> second;
   if (first < second)
   {
      smaller = first;
      std::cout << "\nThe smaller of the two is " << smaller;
   }
   else
   {
      smaller = second;
      std::cout << "\nThe smaller of the two is " << smaller;
   }
   return 0;
}