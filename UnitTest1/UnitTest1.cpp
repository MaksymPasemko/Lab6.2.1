#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../Lab6.2.1/pr6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> a = { 2, 4, 7, 18, 15, 3, 8, 9 };
			int t = FindLargestOddElement(a);
			Assert::AreEqual(t, 15);
		}
	};
}
