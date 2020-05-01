#pragma once

#include<iostream>
using namespace std;

class Person
{
public:
	 string name;
	 int age;

	 Person() 
	 { 
		  name = "unknown"; age = 18;
		  cout << "Call to default constructor of class Person." << endl;
	 }

	 Person(const Person &objP)
	 {
		  name = objP.name;
		  age = objP.age;
		  cout << "Call to copy Constructor of class Person." << endl;
	 }

	 Person(string name, int age)
	 {
		  this->name = name;
		  this->age = age;

		  cout << "Call to paramerrized constructor of class Person." << endl;
	 }

	 ~Person() 
	 {
		  cout << "Call to destructor of class Person." << endl;
	 }

};
