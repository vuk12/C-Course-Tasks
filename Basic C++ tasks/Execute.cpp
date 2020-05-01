#include<iostream>
#include <math.h>
#include <algorithm> 
#include <vector>

#include"Cordinate.h"
#include"SingleLinkedList.h"
#include"StaticCast.h"

#include "Constructors.h"
#include"PolymorphismShape.h"

using namespace std;

int main()
{
	int opcijaBase = 111;

	while (opcijaBase != 0)
	{
		cout << "!!!!!!!!!!!!!!THIS IS THE MENU OF BASIC TASKS IN C++ !!!!!!!!!!!!!!" << endl;
		cout << endl;
		cout << "Please choose any of the options listed bellow:" << endl;
		cout << endl;
		cout << "1. Constructors and desctructors" << endl;
		cout << "2. Polymorphism for calculating surface area" << endl;
		cout << "3. Print even numbers between 1 and 20 " << endl;
		cout << "4. Create and sort Single Linked List" << endl;
		cout << "5. Sum cordinates of two dots using operator overloading" << endl;
		cout << "6. Vector sort" << endl;
		cout << "7. Static cast" << endl;

		cin >> opcijaBase;

		switch (opcijaBase)
		{
		case 0:
			break;
		case 1:
		{
			Person p1;
			Person* p2 = new Person("Zika", 33);
			Person* p6 = new Person(*p2);
			Person p3 = *p2;
			delete p2;
			break;
		}
		case 2:
		{
			Shape* retangle = new Rectangle();
			Shape* triangle = new Triangle;
			retangle->SetValues(8, 6);
			triangle->SetValues(8, 6);
			retangle->OutputArea();
			triangle->OutputArea();
		}
		break;
		case 3:
		{
			for (int i = 0; i <= 20; i++)
			{
				if (i % 2 == 0)
					cout << i << ",";
			}
			cout << endl;
		}
		break;
		case 4:
		{
			Node* node6;

			Node node1, node2, node3, node4, node5;
			node1.value = 3;
			node1.next = &node2;
			node2.value = 1;
			node2.next = &node3;
			node3.value = 11;
			node3.next = &node4;
			node4.value = 2;
			node4.next = &node5;
			node5.value = 12;
			node5.next = NULL;

			node6 = ReturnSortList(&node1);

			Node* iter = &(*node6);
			while (iter != NULL)
			{
				cout << iter->value << endl;
				iter = iter->next;
			}
			break;

		}
		case 5:
		{
			Cordinate k1;
			k1.SetCordinates(3, 6);
			Cordinate k2;
			k2.SetCordinates(5, 10);

			Cordinate k3 = k1 + k2;
			k3.OutputCordinates();

			Cordinate k4 = k4.SumCordinates(k3, k1);
			k4.OutputCordinates();
			break;
		}
		case 6:
		{

			vector<int> ::iterator it;

			vector<int> vec2;
			for (int i = 0; i < 13; i++)
			{
				vec2.push_back(rand());
			}
			sort(vec2.begin(), vec2.end(), greater<int>());
			
			cout << endl << "Sorted vector: " << endl;
			for (it = vec2.begin(); it != vec2.end(); it++)
			{
				cout << *it << endl;

			}
			break;
		}
		case 7:
		{
			Base* base = new Base();
			base->Set(1);
			Dirived1* derived = new Dirived1();
			derived->Set(2);
			derived->DoubleA();

			base = (Base*)derived;
			cout << base->a << endl;

			Dirived1* derived1;
			derived1 = static_cast<Dirived1*> (base);
			cout << derived->b << endl;

			Derived2* derived2;
			derived2 = static_cast<Derived2*> (derived1);
			cout << derived2->c << endl;
		}
		default:
			int x = 0;
		}
	}
	return 0;
}