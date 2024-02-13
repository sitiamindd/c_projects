//struct in cpp experiment

#include<iostream>

using namespace std;

int main(void)
{
   
  int i =9, j=3;
  
  cout << "i is  " << i << " j is " << j << endl;
  
    { //inner block
      int i=j+2;
      cout << "i is " << i << " j is " << j << endl;
      
    }

  //outer block
    cout << "i is " << i << " j is " << j << endl;
  
}
