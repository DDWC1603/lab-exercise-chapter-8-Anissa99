//Nurul Anissa binti Huzaini
//A17DW4087

#include <iostream>
#include <conio.h>
using namespace std;

class ATriangle
{
      int width, height;
      
      public:
             ATriangle(int, int) ;
             int area () {return ((width * height)/2); }
};

ATriangle::ATriangle (int a, int b)
{
     width = a;
     height = b;
}

int main()
{
    ATriangle triangle (3,4);
    cout << "Triangle area: " << triangle.area() << endl;
    getch();
    return 0;
}
