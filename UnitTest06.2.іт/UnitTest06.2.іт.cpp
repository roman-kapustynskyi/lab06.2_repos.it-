#include "pch.h"
#include "CppUnitTest.h"
#include "../PR06.2.іт./FileName.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062іт
{
	TEST_CLASS(UnitTest062іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test_arr[] = { 4, -2, 15, 7, 3 };
			int n = 5;
			int expected = 2;
			int actual = findMax(test_arr, n);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod2)
		{
			int test_arr[] = { 4, -2, 15, 7, 3 };
			int n = 5;
			int actual = findMax(test_arr, n);
			swapLastWithMax(test_arr, n, actual);
			Assert::AreEqual(15, test_arr[4]);
			Assert::AreEqual(3, test_arr[2]);
		}
	};
}
