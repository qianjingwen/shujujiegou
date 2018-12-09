
const int NULL = 0;
template<class T>
struct Node
{
	T data;
	struct Node<T>* next;
};
template<class T>
class LinkQueue
{
public:
	LinkQueue()
	{
		rear = new Node<T>;
		rear->next = rear;
	}
	~LinkQueue();
	void EnQueue(T x);
	T DeQueue();
	T GetFront();
	bool Empty() { return rear->next == rear ? ture : false; }
private:
	Node<T>* rear;
};
