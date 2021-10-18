#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0, y = 0;
			int t;
			t = cos(1.*y) / (1 + fabs(1.*(x * y)));
			Assert::AreEqual(t, 1);
		}
	};
}
