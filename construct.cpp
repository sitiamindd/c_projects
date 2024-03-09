//this file create simple constructor call in cpp
//created by sitiamindd :)

#include <iostream>
#include <string>

//using namespace std;

class Car{
        public:
         std::string brand;
         std::string model;
         int year;

          Car(std::string x, std::string y, int z) { //Constructor with parameter
                this->brand = x;
                this->model = y;
                this->year = z;
          }
};

int main()
{
    Car obj1("BMW","X5",1999);
    Car obj2("Ford", "Mustang", 1969);

    //printing the values
    std::cout<<obj1.brand<<" "<<obj1.model<<" " << obj1.year << "\n";
    std::cout<<obj2.brand<<" "<<obj2.model<<" "<<obj1.year<<"\n";
    return 0;
}
