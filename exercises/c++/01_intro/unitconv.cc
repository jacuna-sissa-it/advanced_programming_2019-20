#include <iostream>

int main(){
  float impval,sival;   //impval = value in imperial units
                        //sival = value in SI units

  std::cout<<"Enter value in inches: ";
  std::cin>>impval;

  //1 in = 2.54 cm
  sival=impval*2.54*1.e-2;
  std::cout<<"\n"<<impval<<" in. = "
           <<sival<<" m."<<std::endl;

  return 0;
}
