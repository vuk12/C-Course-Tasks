#pragma once
#include<iostream>
using namespace std;
class Cordinate
{
public:
	 int x = 0;
	 int y = 0;

	 void SetCordinates(int a, int b)
	 {
		  x = a;
		  y = b;
	 }

	 Cordinate operator+(const Cordinate &obj1)
	 {
		  Cordinate k;
		  k.x = this->x + obj1.x;
		  k.y = this->y + obj1.y;

		  return k;
	 }

	 Cordinate SumCordinates(const Cordinate &obj1, const Cordinate &obj2)
	 {
		  this->x = obj1.x + obj2.x;
		  this->y = obj1.y + obj2.y;

		  return *this;
	 }

	 void OutputCordinates()
	 {
		  cout << "First cordinate : " << x << ", second cordinate: " << y<< endl;
	 }

};