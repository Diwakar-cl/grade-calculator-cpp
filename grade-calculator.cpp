#include <iostream>
#include <string>

int main() {

    int students;
    std::cout <<"How many students: " << std::endl;
    std::cin >>students;

    for(int i=1; i<=students; i=i+1) {
        std::cout <<" student " <<i<<std::endl;
    

    double m1, m2, m3;
    std::cout <<"Marks for math:" <<std::endl;
    std::cin >>m1;
    std::cout <<"Marks for science: " <<std::endl;
    std::cin >>m2;
    std::cout <<"Marks for English: " <<std::endl;
    std::cin >>m3;
    



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
        std::cout <<"You failed" <<std::endl;
    }
}
    return 0;

}
