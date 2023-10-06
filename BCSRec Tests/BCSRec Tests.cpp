#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
//void printWelcomeMenu();
//void printOptions();
//int getIntInput(char message[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(getPerimeterFunctionality)
		{	//testing getPerimeter with l = 20, w = 15, expect: p = 70
			int result = 0, length = 20, width = 15;

			result = getPerimeter(&length, &width);
			Assert::AreEqual(70, result);
		}

		TEST_METHOD(getAreaFunctionality)
		{	//testing getArea with l = 20, w = 15, expect: 300
			int result = 0, length = 20, width = 15;
			result = getArea(&length, &width);
			Assert::AreEqual(300, result);
		}

		TEST_METHOD(setLengthFunctionality1)
		{	//testing setLength with input = 20, l = 0, expect: l = 20
			int length = 0;
			
			setLength(20, &length);
			Assert::AreEqual(20, length);
		}

		TEST_METHOD(setLengthFunctionality2)
		{	//testing setLength with input = -5, l = 0, expect: l = 0
			int length = 0;

			setLength(-5, &length);
			Assert::AreEqual(0, length);
		}

		TEST_METHOD(setLengthFunctionality3)
		{	//testing setLength with input = 200, l = 0, expect: l = 0
			int length = 0;

			setLength(200, &length);
			Assert::AreEqual(0, length);
		}

		TEST_METHOD(setWidthFunctionality1)
		{	//testing with input 20, width = 0 expect width = 20
			int width = 0;

			setWidth(20, &width);
			Assert::AreEqual(20, width);
		}

		TEST_METHOD(setWidthFunctionality2)
		{	//testing with input 500, width = 0 expect width = 0
			int width = 0;

			setWidth(500, &width);
			Assert::AreEqual(0, width);
		}

		TEST_METHOD(setWidthFunctionality3)
		{	//testing with input -3, width = 0 expect width = 0
			int width = 0;

			setWidth(-3, &width);
			Assert::AreEqual(0, width);
		}

		TEST_METHOD(TestMethod1)
		{
		}
	};
}
