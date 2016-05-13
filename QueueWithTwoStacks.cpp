#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//两个栈实现一个队列
#include<stack>

template<class T>
class Queue
{
public:
	void appendTail(const T& x)
	{
		s1.push(x);
	}

	void deleteHead()
	{
		  if (s2.empty())
		  {
			  while (!s1.empty())
			  {
				  s2.push(s1.top());
				  s1.pop();
			  }
			  cout << s2.top() << "  ";
			  s2.pop();
		  }
		  else
		  {
			   cout << s2.top() << "  ";
			   s2.pop();		  
		  } 
	}
private:
	stack<T> s1;
	stack<T> s2;
	
};


void Test()
{
	Queue<int> q;
	q.appendTail(1);
	q.appendTail(2);
	q.appendTail(3);
	q.appendTail(4);
	q.deleteHead();
	q.deleteHead();
	q.deleteHead();
	q.deleteHead();
}

int main()
{
	Test();
	system("pause");
	return 0;
}