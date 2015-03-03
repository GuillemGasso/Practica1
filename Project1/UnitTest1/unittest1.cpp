#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project1/Point2d.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOperatorPluse)
		{
			Point2d p1;
			Point2d p2;
			Point2d p3;

			p1.x = 1;
			p1.y = 1;

			p2.x = 2;
			p2.y = 2;

			p3 = p1 + p2;

			Assert::IsTrue(p3.x == 3 && p3.y == 3);
		}

		TEST_METHOD(TestOperatorMinus)
		{
			Point2d p4;
			Point2d p5;
			Point2d p6;

			p4.x = 2;
			p4.y = 2;

			p5.x = 1;
			p5.y = 1;

			p6 = p4 - p5;

			Assert::IsTrue(p6.x == 1 && p6.y == 1);
		}

		TEST_METHOD(TestOperatorPluseEqual)
		{
			Point2d p7;
			Point2d p8;

			p7.x = 7;
			p7.y = 7;

			p8.x = 8;
			p8.y = 8;

			p7 += p8;

			Assert::IsTrue(p7.x == 15 && p7.y == 15);

		}

		TEST_METHOD(TestOperatorMinusEqual)
		{
			Point2d p9;
			Point2d p10;

			p9.x = 9;
			p9.y = 9;

			p10.x = 10;
			p10.y = 10;

			p9 -= p10;

			Assert::IsTrue(p9.x == -1 && p9.y == -1);


		}

		TEST_METHOD(TestOperatorEqualEqual)
		{
			Point2d p11;
			Point2d p12;

			p11.x = 1;
			p11.y = 1;

			p12.x = 1;
			p12.y = 1;

			Assert::IsTrue(p11.operator== (p12));

		}

		TEST_METHOD(TestOperatorDifferent)
		{
			Point2d p13;
			Point2d p14;

			p13.x = 13;
			p13.y = 13;

			p14.x = 14;
			p14.y = 14;

			Assert::IsTrue(p13.operator!= (p14));
		}

		TEST_METHOD(TestOperatorIsZero)
		{
			Point2d p15;

			p15.x = 15;
			p15.y = 15;

			Assert::IsFalse(p15.IsZero());

		}

		TEST_METHOD(TestOperatorSetZero)
		{
			Point2d p16;

			p16.x = 16;
			p16.y = 16;

			p16.SetZero();

			Assert::IsTrue(p16.x == 0 && p16.y == 0);
		}

		TEST_METHOD(TestOperatorDistanceTo)
		{
			Point2d p17, p18;

			p17.x = 0;
			p17.y = 0;

			p18.x = 3;
			p18.y = 4;

			float Distance;

			Distance = p17.DistanceTo(p18);

			Assert::IsTrue(Distance == 5);
		}

	};
}
