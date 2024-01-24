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

