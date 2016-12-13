#pragma once
#include "Util.h"

class Queue
{
public:
	Queue() : backend() {}
	~Queue() {}

	bool insert(pNode node);
	pNode pop();

	bool isEmpty();
	void clear();

private:
	std::vector<pNode> backend;
};