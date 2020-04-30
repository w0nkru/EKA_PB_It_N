#ifndef QUEUE_H
#define QUEUE_H


#include "human.h"


template<class T>
class Queue{
	public:
		Queue(int = 5);
		~Queue();
		void enqueue(T);
		T dequeue();
		void PrintQueue();
	
	private:
		T* array;
		int size, index;
};


#endif
