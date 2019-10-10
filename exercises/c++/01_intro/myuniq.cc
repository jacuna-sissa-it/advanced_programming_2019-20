#include <iostream>

int main(){
  int ctl;
  std::string line,prev;

  std::getline(std::cin,prev);    // read 1st line

  ctl=1;
  while(std::getline(std::cin,line)){
    if(prev==line & ctl>=1){
      ctl++;
      prev=line;
    }

    else if(prev !=line & ctl>1){
      std::cout<<ctl<<" "<<prev<<"\n";
      ctl=1;
      prev=line;
    }
    
    else if(prev != line & ctl==1){
      ctl=1;
      std::cout<<ctl<<" "<<prev<<"\n";
      prev=line;
    }    
  }

  std::cout<<ctl<<" "<<prev<<"\n";

  //  for(std::string line; std::getline(std::cin,line);){
  //    std::cout<<line<<"\n";
  //  }

  return 0;
}
