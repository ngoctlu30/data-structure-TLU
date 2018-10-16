#ifndef QUEUENODE_H
#define QUEUENODE_H
template<class T>
struct QueueNode
{
	T value;
	QueueNode *next;
};

#endif