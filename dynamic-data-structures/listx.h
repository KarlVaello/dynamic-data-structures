#pragma once

#include "node.h"
#include <iostream>

class Listx
{

private:
	unsigned int id_control;
	Node* root;

public:

	Listx();
	~Listx();

	inline Node* getRoot() { return this->root; }
	inline void setRoot(Node* _root) { this->root = _root; }

	void insert_begin();
	void insert_at(unsigned int _idx);
	void insert_last();

	void delete_begin();
	void delete_at(unsigned int _idx);
	void delete_last();

	Node* begin();
	Node* at();
	Node* last();

	void print_list();

};

