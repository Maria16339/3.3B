#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/3.3B/3.3B/Pair.h"
#include "C://Users/User/source/repos/3.3B/3.3B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair A(2, 2);
			Pair B(2, 3);
			bool test = A == B;
			Assert::AreEqual(test, false);
		}
	};
}
