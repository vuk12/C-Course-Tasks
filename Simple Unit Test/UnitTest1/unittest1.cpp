#include "stdafx.h"
#include "CppUnitTest.h"
#include<string>
#include "..\\SimpleUnitTest\\Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(nmbFlatsUDefaulnomKonstruktoru)
		{
			 Building z;
			 Assert::AreEqual(z.nmbFlats, 0);
			// TODO: Your test code here
		}
		TEST_METHOD(addressZgradeUDefaulnomKonstruktoru)
		{
			 Building z;
			 string address = "non";
			 Assert::AreEqual(z.address, address);
			 // TODO: Your test code here
		}
		TEST_METHOD(ParametrizovaniKonstruktor)
		{
			 int x = 12;
			 string address = "Kopernikova";
			 Building z(x, address);
			

			 Assert::AreEqual(z.address, address);
			 Assert::AreEqual(z.nmbFlats, x);
			 // TODO: Your test code here
		}
		TEST_METHOD(ParametrizovaniKonstruktorFalse)
		{
			 int x = 12;
			 string address = "Kopernikova";
			 Building z(x, address);
			 address = "Kopernikovo";

			 Assert::AreNotEqual(z.address, address);
			 // TODO: Your test code here
		}

	};
}