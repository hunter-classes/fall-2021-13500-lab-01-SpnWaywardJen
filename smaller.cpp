/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1 A

A program that asks the user to input two integer numbers and
prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main()
{
   int first, second, smaller;
   cout << "Enter the first number: ";
   cin >> first;
   cout << "Enter the second number: ";
   cin >> second;
   if (first < second)
   {
      smaller = first;
      cout << endl << "The smaller of the two is " << smaller;
   }
   else
   {
      smaller = second;
      cout << endl << "The smaller of the two is " << smaller;
   }
   return 0;
}