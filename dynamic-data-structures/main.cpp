#include <iostream>

#include "node.h"
#include "listx.h"
#include "uuid.h"


int main() {

	Listx* myList = new Listx();

	myList->insert_last();
	myList->insert_last();
	myList->insert_last();
	myList->insert_last();
	myList->insert_begin();
	myList->insert_begin();
	myList->print_list();

	myList->delete_last();
	myList->delete_last();
	myList->delete_last();
	myList->print_list();

	myList->insert_at(2);
	myList->print_list();

	myList->insert_at(1);
	myList->print_list();

	myList->insert_at(0);
	myList->print_list();

	myList->insert_at(100);
	myList->print_list();

	myList->insert_at(5);
	myList->print_list();

	return 0;
}