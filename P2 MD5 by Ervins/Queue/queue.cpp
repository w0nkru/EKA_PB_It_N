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
void Queue<T>::enqueue(T data){
	if(index == size){
		cout << "Rinda ir pilna, nevar pievienot elementu!" << endl;
		return;}
	
	else{
		array[index] = data;
		index++;}
}


template<class T>
T Queue<T>::dequeue(){
	if(index == 0){
		cout << "Rinda ir tuksa!";
		exit(1);}
	
	for(int i = 0; i < size - 1; i++){
		array[i] = array[i + 1];
	}
	
	index--;
	return 0;
}


template<class T>
void Queue<T>::PrintQueue() const{
	for(int i = 0; i < index; i++){
		cout << array[i] << (i < index - 1 ? " <-- " : "");
	}
	
	cout << endl;
}
