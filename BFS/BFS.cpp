#include <iostream>
#include "Util.h"
#include "Graph.h"

int main()
{
	//1 - 2,3,4
	//2 - 5,6
	//4 - 8
	//8 - 7
	std::cout << "BFS" << std::endl;
	pNode n1(new Node(1));
	pNode n2(new Node(2));
	pNode n3(new Node(3));
	pNode n4(new Node(4));
	pNode n5(new Node(5));
	pNode n6(new Node(6));
	pNode n7(new Node(7));
	pNode n8(new Node(8));

	std::vector<pNode> adj1;
	adj1.insert(adj1.begin(), n2);
	adj1.insert(adj1.begin(), n3);
	adj1.insert(adj1.begin(), n4);
	n1->setAdj(adj1);


	std::vector<pNode> adj2;
	adj2.insert(adj2.begin(), n5);
	adj2.insert(adj2.begin(), n6);
	n2->setAdj(adj2);


	std::vector<pNode> adj3;
	adj3.insert(adj3.begin(), n8);
	n4->setAdj(adj3);


	std::vector<pNode> adj4;
	adj4.insert(adj4.begin(), n7);
	n8->setAdj(adj4);

	Graph graph(n1);


	std::cout << "Looking for node 8" << std::endl;
	std::cout << "Visiting Node: ";
	pNode node8 = graph.getNode(8);
	std::cout << std::endl;

	std::cout << "Looking for node 2" << std::endl;
	std::cout << "Visiting Node: ";
	pNode node2 = graph.getNode(2);
	std::cout << std::endl;

	std::cin.get();
	return 0;
}