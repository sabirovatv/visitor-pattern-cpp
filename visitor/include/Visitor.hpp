#ifndef VISITOR_HPP
#define VISITOR_HPP

#include <iostream>

class ConcreteElementA;
class ConcreteElementB;

class Visitor {
public:
    virtual ~Visitor() {}
    virtual void visitElementA(ConcreteElementA* const element) = 0;
    virtual void visitElementB(ConcreteElementB* const element) = 0;
};

class ConcreteVisitor1 : public Visitor {
public:
    ~ConcreteVisitor1() {}
    void visitElementA(ConcreteElementA* const);
    void visitElementB(ConcreteElementB* const);
};

class ConcreteVisitor2 : public Visitor {
public:
    ~ConcreteVisitor2() {}
    void visitElementA(ConcreteElementA* const);
    void visitElementB(ConcreteElementB* const);
};

class Element {
public:
    virtual ~Element() {}
    virtual void accept(Visitor &visitor) = 0;
};

class ConcreteElementA : public Element {
public:
    ~ConcreteElementA() {}
    void accept(Visitor &visitor);
};

class ConcreteElementB : public Element {
public:
    ~ConcreteElementB() {}
    void accept(Visitor &visitor);
};

#endif
