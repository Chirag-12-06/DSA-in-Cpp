#include<iostream>
#include<stack>
using namespace std;

//WITH AUXILLARY STACK 
// struct mystacks{
//     stack<int> mains,minis;
//     void push(int x){
//     if(minis.empty() || minis.top()>x){
//         minis.push(x);
//     }
//     mains.push(x);
// }
// void pop(){
//     if(minis.top()==mains.top()){
//         minis.pop();
//     }
//     mains.pop();
// }
// int getmini(){
//     if(!minis.empty()){
//         return minis.top();
//     }
// }
// };
// int main(){
//     mystacks s;
//     s.push(10);
//     cout<<s.getmini()<<endl;
//     s.push(5);
//     cout<<s.getmini()<<endl;
//     s.push(1);
//     cout<<s.getmini()<<endl;
//     s.pop();
//     cout<<s.getmini()<<endl;
// }

//WITHOUT AUXILLARY STACK
// struct MyStack {
// 	stack<int> s;
// 	int minEle;
// 	void getMin() {
// 		if (s.empty())
// 			cout << "Stack is empty\n";
// 		else
// 			cout << "Minimum Element in the stack is: " << minEle << "\n";
// 	}
// 	void peek() {
// 		if (s.empty()) {
// 			cout << "Stack is empty ";
// 			return;
// 		}
// 		int t = s.top();
// 		cout << "Top Most Element is: ";
// 		(t < minEle) ? cout << minEle : cout << t;
// 	}
// 	void pop() {
// 		if (s.empty()) {
// 			cout << "Stack is empty\n";
// 			return;
// 		}
// 		cout << "Top Most Element Removed: ";
// 		int t = s.top();
// 		s.pop();
// 		if (t < minEle) {
// 			cout << minEle << "\n";
// 			minEle = 2 * minEle - t;
// 		} else
// 			cout << t << "\n";
// 	}
// 	void push(int x) {
// 		if (s.empty()) {
// 			minEle = x;
// 			s.push(x);
// 			cout << "Number Inserted: " << x << "\n";
// 			return;
// 		}
// 		else if (x < minEle) {
// 			s.push(2 * x - minEle);
// 			minEle = x;
// 		} else
// 			s.push(x);
// 		cout << "Number Inserted: " << x << "\n";
// 	}
// };
// int main() {
// 	MyStack s;
// 	s.push(3);
// 	s.push(5);
// 	s.getMin();
// 	s.push(2);
// 	s.push(1);
// 	s.getMin();
// 	s.pop();
// 	s.getMin();
// 	s.pop();
// 	s.peek();
// 	return 0;
// }
