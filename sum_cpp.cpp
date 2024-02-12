//creat summation in cpp

//by sitiamindd

#include<iostream>
#include <vector>

using namespace std;

//const int SIZE_ARRAY= 5;

inline double sum(vector<double> arr)
{
    double sumation = 0.0;
    
    for (int i=0; i < arr.size(); ++i)
    {
        sumation += arr[i];
    }
    return sumation;
}

int main(void)
{
    double result =0.0;
    vector<double>data{10, 20,30,5.9};
    
    result = sum(data);
    
    cout << "The sumation of data is: " << result << endl;
    
    
    
    return 0;
}
