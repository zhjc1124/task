# include <iostream>
#include "cylinder.h"
using namespace std;

Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r),height(h){}
//定义构造函数

void Cylinder::setHeight(float h)
{height=h;} //设置圆柱高

float Cylinder::getHeight( ) const {return height;} //读取圆柱高

float Cylinder::area( ) const
{ return 2*Circle::area( )+2*3.14159*radius*height;} //计算圆柱表面积

float Cylinder::volume() const {return Circle::area()*height;}
//计算圆柱体积

ostream &operator<<(ostream & output, const Cylinder& cy) //重载运算符“<<”,输出圆柱体信息
{
    output<<"Center=["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height<<"\narea="<<
          cy.area( )<<", volume="<<cy.volume( )<<endl;
    return output;
}