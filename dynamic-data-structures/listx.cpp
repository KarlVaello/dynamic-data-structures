#include "listx.h"

Listx::Listx() {
	this->id_control = 0;
	this->root = new Node(this->id_control);
}

Listx::~Listx() {

}

void Listx::insert_begin() {

	this->id_control = this->id_control + 1;
	Node* _n = new Node(this->id_control);
	_n->setLinkNode(this->root);
	this->root = _n;
}

void Listx::insert_at(unsigned int _idx) {

	if (_idx > 0) {
		bool endList = false;

		Node* pivotNode = this->root;
		Node* prevNode = this->root;
		unsigned int at_it = 0;

		bool outOfList = false;

		while (endList == false)
		{
			if (at_it == _idx)
			{
				endList = true;
			}
			else if (pivotNode->getLinkNode() == nullptr)
			{
				endList = true;
				outOfList = true;
			}
			else
			{
				at_it++;
				prevNode = pivotNode;
				pivotNode = pivotNode->getLinkNode();
			}
		}

		if (!outOfList) {

			this->id_control = this->id_control + 1;
			Node* nodeAt = new Node(this->id_control);

			prevNode->setLinkNode(nodeAt);
			nodeAt->setLinkNode(pivotNode);

		}
	}
	else
	{
		insert_begin();
	}
}

void Listx::insert_last() {

	this->id_control = this->id_control + 1;
	last()->setLinkNode(new Node(this->id_control));
}

void Listx::delete_begin() {

	Node* aux = this->root;
	this->root = this->root->getLinkNode();
	delete(aux);
}

void Listx::delete_at(unsigned int _idx) {

	bool endList = false;

	Node* pivotNode = this->root;
	Node* prevNode = this->root;
	unsigned int at_it = 0;

	bool outOfList = false;

	while (endList == false)
	{
		if (at_it == _idx+1)
		{
			endList = true;
		}
		else if (pivotNode->getLinkNode() == nullptr)
		{
			endList = true;
			outOfList = true;
		}
		else
		{
			at_it++;
			prevNode = pivotNode;
			pivotNode = pivotNode->getLinkNode();
		}
	}

}

void Listx::delete_last() {

	bool endList = false;

	Node* pivotNode = this->root;
	Node* prevNode = this->root;

	while (endList == false)
	{
		if (pivotNode->getLinkNode() == nullptr)
		{
			endList = true;
			prevNode->setLinkNode(nullptr);
			delete(pivotNode);
		}
		else
		{
			prevNode = pivotNode;
			pivotNode = pivotNode->getLinkNode();
		}
	}

}

Node* Listx::last() {
	
	bool endList = false;

	Node* pivotNode = this->root;

	while (endList == false)
	{
		if (pivotNode->getLinkNode() == nullptr)
		{
			endList = true;
		}
		else
		{
			pivotNode = pivotNode->getLinkNode();
		}
	}
	return pivotNode;
}

Node* Listx::begin() {
	return this->root;
}

void Listx::print_list() {
	bool endList = false;

	Node* pivotNode = this->root;

	while (endList == false)
	{
		std::cout << "[" << pivotNode->getId() << "]";
		
		if(pivotNode->getLinkNode() == nullptr)
		{
			endList = true;
			std::cout << std::endl;
		}
		else
		{
			pivotNode = pivotNode->getLinkNode();
		}
	}
}

