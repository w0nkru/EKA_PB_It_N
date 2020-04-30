#include <iostream>
#include "queue.h"
using namespace std;


template<class T>
Queue<T>::Queue(int s){
	array = new T[s];
	size = s;
	index = 0;
}


template<class T>
Queue<T>::~Queue(){
	delete [] array;
}


template<class T>
void Queue<T>::enqueue(T obj){
	if(index == size){
		cout << "Rinda ir pilna, nevar pievienot elementu!" << endl;
		return;}
	
	else{
		array[index] = obj;
		index++;}
}


template<class T>
T Queue<T>::dequeue(){
	if(index == 0){
		cout << "Rinda ir tuksa!" << endl;
		exit(1);}

	T value = array[0];
	
	for(int i = 0; i < size - 1; i++){
		array[i] = array[i + 1];
	}
	
	index--;
	return value;
}


template<class T>
void Queue<T>::PrintQueue(){
	for(int i = 0; i < index; i++){
		cout << i + 1 << ". ";
		array[i].PrintHuman();
	}
}
