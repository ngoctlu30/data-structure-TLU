#ifndef LIST_h
#define LIST_h
template<class Type>
class List
{
private:
	Type a[100];
	int N;
public:
	List()
	{
		N = 0;
	};
	void Add(Type t)
	{
			a(N++) = t;
		};
		T GetIteam(int pos) const
		{
		return a[pos-1];
		
		};
		int Count() const
		{
		return N;
		};
		void Set(int pos, T t)
		a[pos-1]=t;
	
	};

