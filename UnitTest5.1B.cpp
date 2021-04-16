#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1B/Vector3D.h"
#include "../Lab5.1B/Vector3D.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector3D A(1, 2, 3), B(4, 5, 6);
			//A * B	
			Assert::AreEqual(A * B, 32.);
		}
	};
}
