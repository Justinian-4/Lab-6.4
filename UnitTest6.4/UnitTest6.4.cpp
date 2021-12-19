#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.4/Lab-6.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { -100, 75, -50, 25, 0, -25, 50, -75, 100, -99 };

			int count = 0;

			int expectedCount = 5;

			Calculate(a, n, count);

			Assert::AreEqual(expectedCount, count);
		}
	};
}
