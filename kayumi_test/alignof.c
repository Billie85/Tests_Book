#include <iostream>
using namespace std; 
  
struct Geeks {
    int i;
    float f;
    char s;
};
  
struct Empty {
};
  
// driver code
int main()
{
    cout << "Alignment of char: " << alignof(char) << endl;
    cout << "Alignment of pointer: " << alignof(int*) << endl;
    cout << "Alignment of float: " << alignof(float) << endl;
    cout << "Alignment of class Geeks: " << alignof(Geeks) << endl;
    cout << "Alignment of Empty class: " << alignof(Empty) << endl;
  
    return 0;
}