

using namespace std;

template<class T>
struct Node
{
	int value;
	Node<T> *next;
};
template<class T>
class list
{
private:
	Node <T> *head;
	Node <T> *tail;
public:
	list()
	{
		head = 0;
		tail = 0;
	};

	void pushBack(T newValue)
	{
		Node<T> *n = new Node<T>;
		n -> value = newValue;
		n -> next = 0;
		if(head == 0)
			head = n;
		else
		{
			Node<T> *p = head;
			while (p -> next != 0)
				p = p -> next;
			p -> next = n;
		}
	}
	void size()
	{
		Node<T> *n = head;
		int count = 0;
		while(n != 0)
		{
			n = n -> next;
			count++;

		}
		cout<<count;

	}
	list (T t, int count)
	{
		head = 0;
		for(int i=0;i<count;i++)
		{
			Node<T> *n = head;
			pushBack(t);
		}
	}
	list(T t, int from, int to)
	{
		Node <T> *n = head;
		Node <T> *p = new Node<T>;
		for(int i=0;i<size();i++)
		{
			n = n -> next;
		}

		for(int i=from ; i<=to ; i++)
		{
			p = n -> p;
		}
	}
	void pushTop(T newValue)
	{
		Node<T> *n = new Node<T>;

	}
	void printAll() const
	{
		Node<T> *p = head;
		while(p != 0)
		{
			cout<<p -> value<<" ";
			p = p-> next;
		}
	}

	// void insert(int pos, T value);
	// void Delete(int pos);
	// void Delete (int from, int to);
	// int max() const;
	// int min() const;
	// list reverse(T t);


};
