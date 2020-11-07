#pragma once
#ifndef STACKOBJ_H
#define STACKOBJ_H
#include <iostream>
#include "doubleNode.h";
using namespace std;
struct charNode;
class stackObj
{
public:
	stackObj(){};
	void Push(double input);
	void Pop();
	double getTop() {
		return topPtr->in;
	}
	void add();
	void minus();
	void mult();
	void div();
private:
	doubleNode* topPtr = new doubleNode;
};
#endif

