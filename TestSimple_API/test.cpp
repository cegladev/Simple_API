#include "pch.h"
#include "../Simple_API/InputParses.h"
#include "../Simple_API/InputTypes.h"

class InputParserTest : public ::testing::Test {
protected:
	void SetUp() override {
		parser1.setInput("123asdqwd");
		parser2.setInput("123");
		parser3.setInput("123.123");
	}

	InputParses parser1;
	InputParses parser2;
	InputParses parser3;


};

TEST_F(InputParserTest, ReturnsCorrectValue) {
	int	outcome = parser1.getInputType();
	EXPECT_EQ(outcome, InputTypes::DOUBLE);

	int outcome2 = parser2.getInputType();
	EXPECT_EQ(outcome2, InputTypes::STRING);

	int outcome3 = parser3.getInputType();
	EXPECT_EQ(outcome3, InputTypes::DOUBLE);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}