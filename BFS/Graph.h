#pragma once
#include "Util.h"
#include "Node.h"
#include "Queue.h"
//O(e + v)
class Graph
{
public:
	Graph() : root(nullptr), queue() {}
	Graph(pNode node) : root(node), queue() {}
	~Graph() {}

	pNode getNode(int value);

private:
	pNode root;
	pNode BFS(int value, pNode node);

	Queue queue;
};
