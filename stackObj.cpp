#include "stackObj.h"
void stackObj::Push(double input) {//adds on top
	doubleNode* temp = new doubleNode;
	temp->in = input; //temp's in is the input
	temp->next = topPtr; //temp's ref points to top of stack
	topPtr = temp; //top of stack pointer points to temp
}
void stackObj::Pop(){
	doubleNode* temp = new doubleNode; 
	temp = topPtr; 
	topPtr = topPtr->next;
	delete temp;
}
void stackObj::add(){
	double result = topPtr->next->in + topPtr->in;
	stackObj::Pop();//pops top num
	stackObj::Pop();//pops next num
	stackObj::Push(result);//pushes result from adding
}
void stackObj::minus() {
	double result = topPtr->next->in - topPtr->in; 
	stackObj::Pop();//pops top num
	stackObj::Pop();//pops next num
	stackObj::Push(result);//pushes result from substraction
}
void stackObj::mult() {
	double result = topPtr->next->in * topPtr->in;
	stackObj::Pop();//pops top num
	stackObj::Pop();//pops next num
	stackObj::Push(result);//pushes result from multiplying
}
void stackObj::div() {
	double result = topPtr->next->in / topPtr->in;
	stackObj::Pop();//pops top num
	stackObj::Pop();//pops next num
	stackObj::Push(result);//pushes result from divide
}

