#include "cylinder.h"
int main()
{
    //建立 Point 类对象 p
    Point p(3.5,6.4);
    cout<<"x="<<p.getX( )<<",y="<<p.getY( )<<endl;
    p.setPoint(8.5,6.8);
    cout<<"p(new):"<<p<<endl;


    //建立 Circle 类对象 c,并给定圆心坐标和半径
    Circle c(3.5,6.4,5.2);
    cout<<"original circle:\nx="<<c.getX()<<", y="<<c.getY()<<", r="<<c.getRadius( )<<", area="
        << c.area( )<< endl;
    c.setRadius(7.5);
    c.setPoint(5,5);
    cout<<"new circle:\n"<<c;
    Point &pRef=c;
    cout<<"pRef:"<<pRef;

    //定义 Cylinder 类对象 cy1
    Cylinder cy1(3.5,6.4,5.2,10);
    cout<<"\noriginal cylinder:\nx="<<cy1.getX( )<<", y="<<cy1.getY( )<<", r="<<cy1.getRadius( )
        <<", h="<<cy1.getHeight( )<<"\narea="<<cy1.area()<<",volume="<<cy1.volume()<<endl;
    cy1.setHeight(15);
    cy1.setRadius(7.5);
    cy1.setPoint(5,5);
    cout<<"\nnew cylinder:\n"<<cy1;
    Point &pRef1=cy1;
    cout<<"\npRef as a Point: "<<pRef1;
    Circle &cRef=cy1;
    cout<<"\ncRef as a Circle: "<<cRef;

    return 0;
}

