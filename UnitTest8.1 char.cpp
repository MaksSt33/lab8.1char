#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1 char/lab8.1 char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		TEST_METHOD(TestContainsTripleStars_StandardC)
		{
			char str1[] = "abc***def";
			char str2[] = "abc**def";
			Assert::IsTrue(ContainsTripleStars(str1));
			Assert::IsFalse(ContainsTripleStars(str2));
		}

		TEST_METHOD(TestReplaceTripleStars_StandardC)
		{
			char str1[] = "abc***def***ghi";
			char str2[] = "abc**def";
			Assert::AreEqual("abc!!def!!ghi", ReplaceTripleStars(str1));
			Assert::AreEqual("abc**def", ReplaceTripleStars(str2));
		}
	};
}
