#pragma once
#include <iostream>

class Base{
public:
	virtual ~Base() {};
	void someAlgorithm()
	{
		stepOne();
		stepTwo();
		stepThree();
	}
private:
	void stepOne()
	{
		std::cout << "step one" << std::endl;
	}
	void stepThree()
	{
		std::cout << "step three" << std::endl;
	}
	virtual void stepTwo() = 0;
};


class A : public Base{
	void stepTwo() override {
		std::cout << "step two for A" << std::endl;
	}
};

class B  : public Base {
	void stepTwo() override {
		std::cout << "step two for B" << std::endl;
	}
};
