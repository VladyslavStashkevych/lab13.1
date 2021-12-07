#include "pch.h"
#include "CppUnitTest.h"

#include "../lab13.1/init.cpp"
#include "../lab13.1/add.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsInit;
using namespace nsAdd;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
public:

	TEST_METHOD(TestMethod1) {
		a = 1;
		n = 1;
		x = 0;
		Add();
		Assert::AreEqual(0., a);
	}
	};
}
