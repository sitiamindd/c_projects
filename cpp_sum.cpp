#include<iostream>
#include <vector>

using namespace std; // This line allows us to use names from the std namespace directly

const int N = 40;//use const to replace the preprocessor

//use inline for short function like sum
inline void sum(int *p, vector<int> d) {
    *p = 0;
    for(int i = 0; i < d.size(); ++i)
        *p += d[i];
}

int main() {
    
    int accum = 0;
    vector<int> data(N); // vector initializing

    for(int i = 0; i < N; ++i)
        data[i] = i;

    sum(&accum, data);

    cout << "sum is " << accum << endl; //adding endl for end line.

    return 0; //return 0 as successfully compute.
}
