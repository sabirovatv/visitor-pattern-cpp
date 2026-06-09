#include <gtest/gtest.h>
#include <sstream>
#include "Visitor.hpp"

TEST(VisitorTest, OutputCheck) {
    std::stringstream buffer;
    auto old_buf = std::cout.rdbuf(buffer.rdbuf());

    ConcreteElementA elementA;
    ConcreteElementB elementB;
    ConcreteVisitor1 visitor1;
    ConcreteVisitor2 visitor2;

    elementA.accept(visitor1);
    elementA.accept(visitor2);
    elementB.accept(visitor1);
    elementB.accept(visitor2);

    std::cout.rdbuf(old_buf);

    std::string expected =
        "Concrete Visitor 1: Element A visited.\n"
        "Concrete Visitor 2: Element A visited.\n"
        "Concrete Visitor 1: Element B visited.\n"
        "Concrete Visitor 2: Element B visited.\n";

    EXPECT_EQ(buffer.str(), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
