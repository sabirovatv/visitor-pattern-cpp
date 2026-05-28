#include "Visitor.hpp"

// Реализация методов ConcreteVisitor1
void ConcreteVisitor1::visitElementA(ConcreteElementA* const) {
    std::cout << "Concrete Visitor 1: Element A visited." << std::endl;
}

void ConcreteVisitor1::visitElementB(ConcreteElementB* const) {
    std::cout << "Concrete Visitor 1: Element B visited." << std::endl;
}

// Реализация методов ConcreteVisitor2
void ConcreteVisitor2::visitElementA(ConcreteElementA* const) {
    std::cout << "Concrete Visitor 2: Element A visited." << std::endl;
}

void ConcreteVisitor2::visitElementB(ConcreteElementB* const) {
    std::cout << "Concrete Visitor 2: Element B visited." << std::endl;
}

// Реализация методов ConcreteElementA
void ConcreteElementA::accept(Visitor &visitor) {
    visitor.visitElementA(this);
}

// Реализация методов ConcreteElementB
void ConcreteElementB::accept(Visitor &visitor) {
    visitor.visitElementB(this);
}
