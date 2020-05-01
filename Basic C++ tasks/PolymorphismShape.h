#pragma once
#include<iostream>
using namespace std;

class Shape 
{
public:
	 int height = 8;
	 int width = 11;

	 virtual int Area() = 0;

	 virtual void OutputArea() = 0;

	 void SetValues(int a, int b)
	 {
		 height = a;
		  width = b;
	 }
};

class Rectangle :public Shape
{
	 int Area()
	 {
		  return height *width;
	 }

	 void OutputArea()
	 {
		  cout << "Area of Rectangle is: " << Area() << endl;
	 }
};

class Triangle :public Shape
{
	 int Area()
	 {
		  return height *width / 2;
	 }

	 void OutputArea()
	 {
		  cout << "Area of Triangl is: " << Area() << endl;
	 }
};