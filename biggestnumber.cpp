//Author:
#include<iostream>

int main()
{
  //declare variables here
  int num;
  int bignum;
  int biggest;
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>num;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>bignum;
  //determine if first or second is bigger and store that in a third variable
  if(num > bignum)
  {
          biggest = num;
  }
  else
  {
          biggest = bignum;
  }


  std::cout<<"Of those two numbers, the biggest is: ";
  std::cout<<biggest;
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
