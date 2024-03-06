#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.7/Payment.h"
#include "../OOP1.7/Money.h"
#include "../OOP1.7/Payment.cpp"
#include "../OOP1.7/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest17
{
	TEST_CLASS(UnitTest17)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m;
			long value1 = 10000;
            long value2 = 5000;
			m.Init(value1, value2, 100, 50); 
			long result = m.addition(); 
			long value3 = 15000;
			Assert::AreEqual(value3, result);
		}
	};
}
