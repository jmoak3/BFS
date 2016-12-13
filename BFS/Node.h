#pragma once
#include "Util.h"

class Node {
public:
	Node() : value(0), adjacent() {}
	Node(int value) : value(value), adjacent() {}
	Node(int value, std::vector<pNode> adj) : value(value), adjacent(adj) {}
	~Node() {}

	int getValue() const { return value; }
	int getNumAdjacencies() const { return adjacent.size(); }
	void setAdj(std::vector<pNode> newAdj) { adjacent = newAdj; }
	std::vector<pNode> getAdj() const { return adjacent; }
	pNode getAdj(int index) { return adjacent.at(index); }
	bool setValue(int newValue) { value = newValue; return true; }

private:
	int value;
	std::vector<pNode> adjacent;
};
