#include "Graph.h"

pNode Graph::getNode(int value)
{
	if (root == nullptr)
	{
		std::cout << "cannot perform operations on an empty graph" << std::endl;
		return nullptr;
	}
	queue.clear();
	pNode result = BFS(value, root);
	if (result == nullptr) std::cout << "COULD NOT FIND!";
	return result;
}

pNode Graph::BFS(int value, pNode node)
{
	std::cout << node->getValue() << " ";
	if (node->getValue() == value)
	{
		return node;
	}
	if (node->getNumAdjacencies() > 0)
	{
		std::vector<pNode> adj = node->getAdj();
		std::vector<pNode>::iterator it = adj.begin();
		for (; it != adj.end(); ++it)
		{
			queue.insert(*it);
		}

		while (!queue.isEmpty())
		{
			pNode foundNode = BFS(value, queue.pop());
			if (foundNode != nullptr) return foundNode;
		}
	}

	return nullptr;
}