#include <sstream>
#include <cassert>
#include "Visitor.hpp"

int main() {
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

    assert(buffer.str() == expected);
    return 0;
}
