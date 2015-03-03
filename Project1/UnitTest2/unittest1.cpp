#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project1/String.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:

				TEST_METHOD(EmptyConstructor)
				{
					String c;

					Assert::IsTrue(c.str[0] == '\0');

				}

				TEST_METHOD(Constructor1)
				{
					char* c2 = "hola";
					String s;

					s = c2;

					Assert::IsTrue(s.size == 5);     

				}

				TEST_METHOD(Constructor2)
				{
					String c3 = "hola";

					Assert::IsTrue(strcpy_s(c3.str, c3.size, c3.GetString()));
				}

				TEST_METHOD(OperatorEqualEqual)
				{
					String s2 = "hola";
					String s3 = "hola";
					Assert::IsTrue(s2.operator == (s3));
				}

				TEST_METHOD(OperatorEqualEqual2)
				{
					String s4 = "hola";
					char* c4 = "hola";
					Assert::IsTrue(s4.operator == (c4));
				}

				TEST_METHOD(OperatorDifferent)
				{
					String s5 = "hola";
					String s6 = "mundo";
					Assert::IsTrue(s5.operator != (s6) != 0);
				}

				TEST_METHOD(OperatorDifferent2)
				{
					String s7 = "hola";
					char* c5 = "mundo";
					Assert::IsTrue(s7.operator != (c5) != 0);
				}

				TEST_METHOD(OperatorEqual)
				{
					String s8 = "hola";
					String s9 = "mundo";

					s8 = s9;

					Assert::AreEqual(s8, s9);
				}

				TEST_METHOD(OperatorEqual2)
				{
					String s10 = "hola";
					char* c6 = "mundo";

					s10 = c6;

					Assert::AreEqual(s10.str, c6);
				}

				TEST_METHOD(OperatorPlusEqual)
				{
					String s11 = "hola";
					String s12 = "mundo";

					s11 += s12;

					Assert::IsTrue(s11 == "holamundo");
				}

				TEST_METHOD(OperatorPlusEqual2)
				{
					String s13 = "hola";
					char* c7 = "mundo";

					s13 += c7;
					Assert::IsTrue(s13 == "holamundo");
				}

				TEST_METHOD(Lenght)
				{
					String s14 = "hola";
					Assert::IsTrue(s14.len() == 10);
				}

				TEST_METHOD(Alloc)
				{
					String s15 = "hola";
					String s16 = "mundo";

				}

				TEST_METHOD(Clear)
				{
					String s17 = "hola";
					int capacity;

					capacity = s17.Capacity();

					Assert::IsTrue(capacity == 5);
				}

				TEST_METHOD(Capacity)
				{
					String s18 = "hola";
					int capacity;

					capacity = s18.Capacity();

					Assert::IsTrue(capacity == 5);
				}

				TEST_METHOD(GetString)
				{
					String s19 = "hola";
					String s20;
					Assert::IsTrue(s19 == s20);
				}
			};
		};
