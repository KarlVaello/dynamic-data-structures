#include "pilex.h"

Pilex::Pilex() {
	this->id_control = 0;
	this->top = new Node(this->id_control);
}

Pilex::~Pilex() {

}

void Pilex::insert() {
	this->id_control = this->id_control + 1;
	Node* node_insert = new Node(this->id_control);
	node_insert->setLinkNode(this->top);
	this->top = node_insert;
}

void Pilex::remove() {
	Node* aux = this->getTop();
	this->top = this->top->getLinkNode();
}

Node* Pilex::getTop() {

	return this->top;
}

void Pilex::print_pile() {
	
	bool endList = false;

	Node* pivotNode = this->top;

	while (endList == false)
	{
		std::cout << "[" << pivotNode->getId() << "]" << std::endl;

		if (pivotNode->getLinkNode() == nullptr)
		{
			endList = true;
			std::cout << "----" << std::endl;
		}
		else
		{
			pivotNode = pivotNode->getLinkNode();
		}
	}


}

