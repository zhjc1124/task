#include "circle.h"
# include <iostream>
using namespace std;
class Cylinder: public Circle
// Cylinder 是 Circle 的公有派生类
{
public:
    Cylinder (float x=0,float y=0,float r=0,float h=0);
//构造函数
    void setHeight(float);
//设置圆柱高
    float getHeight( ) const;
//读取圆柱高
    float area( ) const;
//计算圆表面积
    float volume( ) const;
//计算圆柱体积
    friend ostream & operator<<(ostream &, const Cylinder&);
//重载运算符“<<”
protected:
    float height;
//圆柱高
};