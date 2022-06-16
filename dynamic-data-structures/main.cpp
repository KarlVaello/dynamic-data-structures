#include <iostream>

#include "node.h"
#include "listx.h"
#include "pilex.h"
#include "uuid.h"


int main() {

	std::cout << "--------myListx---------" << std::endl;

	Listx* myList = new Listx();
	std::cout << "new Listx()\t";
	myList->print_list();

	std::cout << "insert_last()\t";
	myList->insert_last();
	myList->print_list();

	std::cout << "insert_last()\t";
	myList->insert_last();
	myList->print_list();

	std::cout << "insert_last()\t";
	myList->insert_last();
	myList->print_list();

	std::cout << "insert_last()\t";
	myList->insert_last();
	myList->print_list();

	std::cout << "insert_begin()\t";
	myList->insert_begin();
	myList->print_list();

	std::cout << "insert_begin()\t";
	myList->insert_begin();
	myList->print_list();

	std::cout << "delete_last()\t";
	myList->delete_last();
	myList->print_list();

	std::cout << "delete_last()\t";
	myList->delete_last();
	myList->print_list();

	std::cout << "delete_last()\t";
	myList->delete_last();
	myList->print_list();

	std::cout << "insert_at(2)\t";
	myList->insert_at(2);
	myList->print_list();

	std::cout << "insert_at(1)\t";
	myList->insert_at(1);
	myList->print_list();

	std::cout << "insert_at(10)\t";
	myList->insert_at(100);
	myList->print_list();

	std::cout << "delete_at(2)\t";
	myList->delete_at(2);
	myList->print_list();

	std::cout << "delete_at(4)\t";
	myList->delete_at(4);
	myList->print_list();

	std::cout << "--------myPilex---------" << std::endl;
	Pilex* myPile = new Pilex();
	myPile->insert();
	myPile->insert();
	myPile->insert();
	myPile->print_pile();
	myPile->remove();
	myPile->print_pile();
	myPile->remove();
	myPile->print_pile();
	myPile->insert();
	myPile->print_pile();
	myPile->insert();
	myPile->print_pile();

	std::cout << "--------myQueuex---------" << std::endl;


	return 0;
}