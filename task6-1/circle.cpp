#include "circle.h"

Circle::Circle(float a,float b,float r):Point(a,b),radius(r){ } //定义构造函数,对圆心坐标和半径初始化
void Circle::setRadius(float r)
{radius=r;} //设置半径值
float Circle::getRadius( ) const {return radius;} //读取半径值
float Circle::area( ) const
{return 3.14159*radius*radius;} //计算圆面积
//重载运算符“<<”,使之按规定的形式输出圆的信息
ostream & operator<<(ostream & output,const Circle &c)
{
    output<<"Center=["<<c.x<<","<<c.y<<"],r="<<c.radius<<",area="<<c.area( )<<endl;
    return output;
}

