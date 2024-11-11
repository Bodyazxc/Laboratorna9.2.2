#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest922
{
	TEST_CLASS(UnitTest922)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
			int size = 7;
			char targetChar = 'c';
			int targetCode = static_cast<int>(targetChar);

			
			bool found = false;
			int position = -1;
			for (int i = 0; i < size; i++)
			{
				if (static_cast<int>(array[i]) == targetCode)
				{
					found = true;
					position = i;
					break;
				}
			}

			Assert::IsTrue(found);
			Assert::AreEqual(2, position);
			
		}
	};
}
