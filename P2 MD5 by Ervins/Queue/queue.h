#ifndef QUEUE_H
#define QUEUE_H


template<class T>
class Queue{
	public:
		Queue(int = 5);
		~Queue();
		void enqueue(T = 0);
		T dequeue();
		void PrintQueue() const;
	
	private:
		T* array;
		int size, index;
};


#endif
