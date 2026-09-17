#include <iostream>
#include <string>


double GPA(double a, double b, double c) {
    return (a+b+c)/3;
}

void printgrade(double AVG) {


   
    if(AVG >=90) {
        std::cout <<"Your grade:A" <<std::endl;
    }
    else if(AVG >=60) {
        std::cout <<"Your grade :B" <<std::endl;
    }

    else if(AVG >=40) {
        std::cout <<"Your GPA: C" <<std::endl;
    }

   
    else{
        std::cout <<"You failed" <<std::endl;
    }
}


int main() {

    int students;
    std::cout <<"How many students: " << std::endl;
    std::cin >>students;

    for(int i=1; i<=students; i=i+1) {
        double m1,m2,m3;
        std::cin >>m1 >>m2 >>m3;

        double AVG = GPA(m1, m2, m3);
        std::cout <<"Your GPA: " <<AVG <<std::endl;
        printgrade(AVG);

    
}
    return 0;

}
