//Day8.2.Perimeter and area of the circle.
const float pi=3.14;
void main()
{
 float radius=5;
 float perimeter,area;
 clrscr();
 perimeter=2*pi*radius;
 printf("Perimeter of the circle:%f\n",perimeter);

 area=pi*radius*radius;
 printf("Area of the circle:%f",area);
 getch();
}