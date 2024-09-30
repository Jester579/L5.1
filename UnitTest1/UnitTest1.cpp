#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = h(2.0, 3.0);
			double c = (2.0 / (3.0 * 3.0 + 1) + 1 / (2.0 * 2.0 + 3.0 * 3.0));
			Assert::AreEqual(t, c, 0.0001);
		}
	};
}
