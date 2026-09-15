#include <iostream>
#include <string>

int main() {
    double m1, m2, m3;
    std::cout <<"Enter your exam marks" <<std::endl;

    std::cin >>m1 >>m2 >>m3;

    double GPA =(m1+m2+m3)/3;
    std::cout <<"Your GPA: " <<GPA <<std::endl;

    if(GPA >=90) {
        std::cout <<"Your grade:A" <<std::endl;
    }
    else if(GPA >=60) {
        std::cout <<"Your grade :B" <<std::endl;
    }

    else if(GPA >=40) {
        std::cout <<"Your GPA: C" <<std::endl;
    }

   
    else{
        std::cout <<"You failed";
    }
    return 0;
}