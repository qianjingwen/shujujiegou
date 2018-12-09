#include"LinkQueue.h"
template<class T>
void LinkQueue<T>::EnQueue(T x)
{
	Node<T>* f = rear->next;
	rear->next = new Node<T>;
	rear = rear->next;
	rear->data = x;
	rear->next = f;
}
template<class T>
T LinkQueue<T>::DeQueue()
{
	if (Empty())throw"Underflow";
	Node<T>* front = rear->next;
	Node<T>* p = front->next;
	front->next = p->next;
	if ((front->next) == front) rear = front;
	T x = p->data;
	delete p;
	return x;
}
template<class T>
Node<T>* LinkQueue<T>::GetFront()
{
	if (Empty()) return NULL;
	return rear->next->next;
}
template<class T>
LinkQueue<T>::~LinkQueue()
{
	Node<T>* front = rear->next;
	while (front)
	{
		rear = front->next;
		delete front;
		front = rear;

	}
}
