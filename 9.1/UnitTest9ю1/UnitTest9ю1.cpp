#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>


#include "../9.1/var.h"
#include "../9.1/dod.h"
#include "../9.1/sum.h"

#include "../9.1/var.cpp"
#include "../9.1/dod.cpp"
#include "../9.1/sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest9ю1
{
	TEST_CLASS(UnitTest9ю1)
	{
	public:
		
        TEST_METHOD(TestDodRecurrence)
        {
            
            x = 2.0;
            n = 1;
            a = -0.5; 

            dod();

            double expected = 1.0 / 24.0;
            Assert::AreEqual(expected, a, 1e-7, L"Incorrect value for term a_1 at x = 2.0");
        }

       
        TEST_METHOD(TestSumAccuracy)
        {
            x = 2.0;
            eps = 1e-6;

            sum();

            double expected = std::atan(2.0);
            Assert::AreEqual(expected, s, 1e-5, L"Taylor sum does not match atan(2.0) within tolerance");
        }

        
        TEST_METHOD(TestTermsCount)
        {
            
            x = 2.0;
            eps = 0.0001;

            sum();

            Assert::AreEqual(6, n, L"Incorrect number of summed terms for x = 2.0, eps = 0.0001");
        }
	};
}
