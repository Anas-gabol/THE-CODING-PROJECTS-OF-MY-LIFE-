#include <iostream>
int main(){
    double num1;
    char op;
    double num2;
    double result;
    std::cout<<"gareebo ka calculator by anas\n";
    std::cout<<"mehrbani karke phela number dale\n";
    std::cin>>num1;
    std::cout<<"bataye ke is ka (-,+,*,/) kya karna he ";
    std::cin>>op;
    std::cout<<"dusra number bataye";
    std::cin>>num2;
    switch(op){
    case '+':
        result = num1+num2;
        std::cout<<"Result:"
         << result << std::endl;
         break ;
    case '-':
    result =num1-num2;
       std::cout <<"Result:"
          << result << std::endl;
          break ;
          case '*':
                result = num1*num2;
                   std::cout <<"Result:"
            << result << std::endl;
           break ;
           case'/':
                 if (num2 !=0){
                  result = num1/num2;
                     std::cout<<"Result:"
            <<result<<std::endl;
                 }
                 else{
                     std::cout<<"abe sale division me dusre number me 0 nhie hota ";}
                     break;
                     default:
                     std::cout<<"abe sahie se opreatore select kar\n";
                     break ;
}
return 0;
}
            
    
 
