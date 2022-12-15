#include <iostream>
using namespace std;

int i,x;
int main(){
    i = 0;
    x = 10;

    while(i<40) {
     x += x*x;
     i++; 
    }
    cout << x;

    return 0;
}