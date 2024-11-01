#include "pch.h"
#include "CppUnitTest.h"
#include "RockPaperScissor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingRockPaperScissor
{
	TEST_CLASS(TestingRockPaperScissor)
	{
	public:
		
        // Test cases for Player 1 wins
            TEST_METHOD(Player1WinsRockVsScissors)
        {
            Assert::AreEqual("Player1", winner_is("Rock", "Scissors"));
        }

        TEST_METHOD(Player1WinsPaperVsRock)
        {
            Assert::AreEqual("Player1", winner_is("Paper", "Rock"));
        }

        TEST_METHOD(Player1WinsScissorsVsPaper)
        {
            Assert::AreEqual("Player1", winner_is("Scissors", "Paper"));
        }

        // Test cases for Player 2 wins
        TEST_METHOD(Player2WinsRockVsPaper)
        {
            Assert::AreEqual("Player2", winner_is("Rock", "Paper"));
        }

        TEST_METHOD(Player2WinsPaperVsScissors)
        {
            Assert::AreEqual("Player2", winner_is("Paper", "Scissors"));
        }

        TEST_METHOD(Player2WinsScissorsVsRock)
        {
            Assert::AreEqual("Player2", winner_is("Scissors", "Rock"));
        }

        // Test cases for draws
        TEST_METHOD(DrawRockVsRock)
        {
            Assert::AreEqual("Draw", winner_is("Rock", "Rock"));
        }

        TEST_METHOD(DrawPaperVsPaper)
        {
            Assert::AreEqual("Draw", winner_is("Paper", "Paper"));
        }

        TEST_METHOD(DrawScissorsVsScissors)
        {
            Assert::AreEqual("Draw", winner_is("Scissors", "Scissors"));
        }
	};
}
