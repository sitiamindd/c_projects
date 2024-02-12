//reference code to use template in cpp
//create sum and substraction

#include<iostream>

using namespace std;

template<class Summable>
Summable sum(const Summable data[], int size, Summable s=0)
{
    for(int i=0; i<size; ++i)
    {
        s += data[i];
    }
    
    return s;
}

template<class Substraction>
Substraction substract(const Substraction data[], int size, Substraction s=0)
{
    for(int i=0; i<size; ++i)
    {
        s -= data[i];
    }
    
    return s;
}

int main(void)
{
    cout << "template for sum()" << endl;
    int a[] = {1,2,3};
    double b[] = {2.1,2.2,2.3};
    
    cout << sum(a,3) << endl;
    cout << sum(b,3) << endl;
    cout << substract(a,3) << endl;
    cout << substract(b,3) << endl;
    
    
    
    return 0;
}
