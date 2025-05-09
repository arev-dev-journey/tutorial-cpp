#include <iostream>
#include <list>
#include <stack>
#include <vector>
using namespace std;

template <typename T>
void display(stack<T> s)
{
  cout << "[";
  while (!s.empty())
  {
    T elem = s.top();
    s.pop();
    cout << elem << " ";
  }
  cout << "]" << endl;
}

int main()
{
  stack<int> s;
  stack<int, vector<int>> s1;
  stack<int,list<int>> s2;
  stack<int, deque<int>> s3;

  for (int i: {1,2,3,4,5})
    s.push(i);
  display(s);

  s.push(100);
  display(s);

  s.pop();
  s.pop();
  display(s);

  while (!s.empty())
    s.pop();
  display(s);

  cout << "Size: " << s.size() << endl;

  s.push(10);
  display(s);

  s.top() = 100;
  display(s);

  return 0;
}
