#pragma once

#include "node.h"
#include <iostream>

class Pilex
{

private:
	unsigned int id_control;
	Node* top;

public:

	Pilex();
	~Pilex();

	void insert();
	void remove();

	Node* getTop();

	void print_pile();

};

