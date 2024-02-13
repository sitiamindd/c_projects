//created by sitiamindd
#include<iostream>

using namespace std;

typedef enum days
{
    SUN,
    MON,
    TUE,
    WED,
    THUR,
    FRI,
    SAT
}days;



//operator++ is the auto increment
inline days operator++ (days d)
{
    return static_cast<days>((static_cast<int>(d) + 1) %7);
}
int main(void)
{
     days d = MON, e;
     e= ++d;
    
    cout << d << "\t" << e <<endl;
    
    return 0;
}
