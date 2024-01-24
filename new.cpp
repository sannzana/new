#include<bits/stdc++.h>
using namespace std;

class shape()
{
    virtual void draw()=0;
};

class Rectangle:public shape:{
public:void draw() override{cout<<"Inside Rectangle::draw() method."<<endl;}

};

class Square:public shape:{
public:void draw() override{cout<<"Inside Rectangle::draw() method."<<endl;}

};


int main() {
    ShapeFactory shapeFactory = new ShapeFactory();
Shape shape1 = shapeFactory.getShape("CIRCLE");shape1.draw();
Shape shape2 = shapeFactory.getShape("RECTANGLE");shape2.draw();
}
