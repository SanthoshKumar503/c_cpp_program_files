#include <iostream>
using namespace std;
class Shape 
{
   double areaSquare;
   public:
      friend void printArea( Shape shape ); 
      void setArea( double ar );
};
void Shape::setArea( double ar ) 
{
   areaSquare = ar*ar;
}
void printArea( Shape shape )
{
   cout << "Area of shape : " << shape.area <<endl;
}
int main() {
   Shape len;
   shape.setArea(20.0);
   printArea(len);
   return 0;
}
