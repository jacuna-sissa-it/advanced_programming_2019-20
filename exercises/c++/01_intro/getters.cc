#include <iostream>

int get_int(){
  //reads from stdin until a valid number is fed
  int i;

  std::cout<<"Enter a valid integer: ";

  while(!(std::cin>>i)){
    std::cout<<"\nEnter a valid integer: ";
    std::cin.clear();
    std::cin.ignore();
  }

  std::cout<<"\n"<<"Correct input detected; exiting program..."<<"\n";
  return 0;
}

int main(){
  get_int();
  //  int x;

  //std::cin>>x;
  //std::cout<<std::cin.rdstate();
  
  return 0;
}