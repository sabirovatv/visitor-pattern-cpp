#include "Visitor.hpp"

int main() {
    ConcreteElementA elementA;
    ConcreteElementB elementB;
    ConcreteVisitor1 visitor1;
    ConcreteVisitor2 visitor2;

    elementA.accept(visitor1);
    elementA.accept(visitor2);
    elementB.accept(visitor1);
    elementB.accept(visitor2);

    return 0;
}
