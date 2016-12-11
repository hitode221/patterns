#pragma once
#include <string>

class Base{
public:
	Base() {};
	virtual ~Base() {};
	virtual std::string info() = 0;
};

class Factory{
public:
	Factory() {};
	virtual ~Factory() {};
	virtual Base* createObject() = 0;
		
};

class A : public Base{
public:
	std::string info() override{
		return "classA";
	}
};

class B : public Base{
public:
	std::string info() override{
		return "classB";
	}
};

class FactoryA : public Factory{
public:
	Base* createObject() override{
		return new A();
	};
};

class FactoryB : public Factory{
public:
	Base* createObject() override{
		return new B();
	}
};

