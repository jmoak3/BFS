#include "Queue.h"

bool Queue::insert(pNode node)
{
	backend.insert(backend.begin(), node);
	return true;
}

pNode Queue::pop()
{
	std::vector<pNode>::iterator it = backend.end();
	it--;
	pNode node = *it;
	backend.erase(it);

	return node;
}

bool Queue::isEmpty()
{
	return backend.size() == 0;
}

void Queue::clear()
{
	backend.clear();
}