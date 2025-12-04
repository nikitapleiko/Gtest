#include "pch.h"
#include "C:\Users\Admin\Desktop\DU\2025\test\Gtest\GoogleTest\GoogleTest\Header.h"


TEST(TestPassword, TestCreatePassword) {
	EXPECT_EQ(CreatePassword("ABC"), "ABC");
	EXPECT_EQ(CreatePassword("P@ssw0rd"), "P@ssw0rd");
	EXPECT_EQ(CreatePassword(""), "");
}

TEST(TestPassword, TestChangePassword) {
	EXPECT_EQ(ChangePassword("P@ssw0rd","P@ssw0rd","NewP@ssw0rd"), "NewP@ssw0rd");
	EXPECT_EQ(ChangePassword("FailP@ssw0rd", "P@ssw0rd", "NewP@ssw0rd"), "P@ssw0rd");
	EXPECT_EQ(ChangePassword("P@ssw0rd", "FailP@ssw0rd", "NewP@ssw0rd"), "FailP@ssw0rd");
}

TEST(TestPassword, TestCekPassword) {
	EXPECT_TRUE(CekPassword("P@ssw0rd", "P@ssw0rd"));
	EXPECT_FALSE(CekPassword("FailP@ssw0rd", "P@ssw0rd"));
	EXPECT_FALSE(CekPassword("P@ssw0rd", "FailP@ssw0rd"));
}