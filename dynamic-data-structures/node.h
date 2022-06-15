#pragma once
class Node
{

private:
	unsigned int id;
	Node* linkNode;

public:
	Node(unsigned int _id);
	~Node();

	inline void setId(unsigned int _id) { this->id = _id; }
	inline unsigned int getId() { return this->id; }
	inline void setLinkNode(Node* _linkNode) { this->linkNode = _linkNode; }
	inline Node* getLinkNode() { return this->linkNode; }

};

