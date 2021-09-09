/*
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1B

A program that asks the user to input three integer numbers and 
prints out the smallest of the three.
*/

#include <iostream>

int main()
{
   int first, second, third, x, smallest;
   std::cout << "Enter the first number: ";
   std::cin >> first;
   std::cout << "Enter the second number: ";
   std::cin >> second;
   std::cout << "Enter the third number: ";
   std::cin >> third;
   /* Checks if the first number is smaller than the second and third*/
   if (first < second)
   {
      x = first;
      if (x < third)
      {
         smallest = x;
         std::cout << "\nThe smaller of the three is " << smallest;
      }
      else
      {
         smallest = third;
         std::cout << "\nThe smaller of the three is " << smallest;
      }
   }
   /* Checks if the second number is smaller than the first or third*/
   else if (second < first)
   {
      x = second;
      if (x < third)
      {
         smallest = x;
         std::cout << "\nThe smaller of the three is " << smallest;
      }
      else
      {
         smallest = third;
         std::cout << "\nThe smaller of the three is " << smallest;
      }
   }
   return 0;
}
