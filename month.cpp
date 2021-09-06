/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1D

A program that asks the user to input the year and
the month (1-12) and prints the number of days in
that month.
*/

#include <iostream>

int main()
{
   int year, month, day;
   std::cout << "Enter year: ";
   std::cin >> year;
   std::cout << "Enter month: ";
   std::cin >> month;
   if (month == 2)
   {
      if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
      {
         std::cout << "\n29 days";
      }
      else
      {
         std::cout << "\n28 days";
      }
   }
   else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
   {
      std::cout << "\n31 days";
   }
   else
   {
      std::cout << "\n30 days";
   }
   
   return 0;
}