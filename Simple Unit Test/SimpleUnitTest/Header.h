#pragma once
#include<iostream>
#include<string>

using namespace std;

class Building
{
public:
	 int nmbFlats;
	 string address;

	 Building()
	 {
		  nmbFlats = 0;
		  address = "non";
	 }
	 Building(int nmbFlats, string address)
	 {
		  this->address = address;
		  this->nmbFlats = nmbFlats;
	 }

};