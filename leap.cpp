/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1C

A program that asks the user to input an integer
representing a year number. If the input year is
a leap year according to the modern Gregorian
calendar, it prints Leap year, otherwise, it
prints Common year.
*/

#include <iostream>

int main()
{
   int year;
   std::cout << "Enter year: ";
   std::cin >> year;
   if (year % 4 != 0)
   {
      std::cout << "\nCommon year";
   }
   else if (year % 100 != 0)
   {
      std::cout << "\nLeap year";
   }
   else if (year % 400 != 0)
   {
      std::cout << "\nCommon year";
   }
   else
   {
      std::cout << "\nLeap year";
   }
   return 0;
}