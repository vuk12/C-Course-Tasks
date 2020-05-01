#pragma once

using namespace std;

class Base 
{
public:
	 int a=0;
	 void Set(int x)
	 {
		  a = x;
	 }
	 void DoubleA()
	 { 
		  a =a*2;
	 }
};

class Dirived1:public Base
{
public:
	 int b=0;
	 void Set(int x)
	 {
		  b = x;
	 }
};

class Derived2: public Dirived1
{
public:
	 int c;
	 void SetC(int x)
	 {
		  c = x;
	 }
};
