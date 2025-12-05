#include<iostream>
using namespace std;
class Point
{
private:
    int x,y;
public:
   {
        Point(int x1, int y1);
   
    x= x1;
    y= y1;
    }
   //copy constructor
   point(const Point &t2)
   {
    x=t2.x+10;
    y=t2.y+20;
   }
int getX()
{
    return x;
}
int getY()
{
 return y;
}
};
int main()
{
    Point p1(10, 15);//Normal constructor is called here
    Point p2=p1; //Copy constructor is called here

    //Let us access value assigned by constructors
    cout <<"p1.x ="<<p1.getX()<<", p1.y ="<<p1.getY();
    cout <<"\np2.x ="<<p2.getX()<<", p2.y ="<<p2.getY();
    return 0;
}

