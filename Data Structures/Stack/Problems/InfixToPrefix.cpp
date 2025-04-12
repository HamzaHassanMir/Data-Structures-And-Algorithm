#include <iostream>
#include<string>
#include<stack>

using namespace std;

bool isOperator(char ch) {
	return (ch == '+' || ch == '-' ||
		ch == '*' || ch == '/' || ch == '^');
}

int prec(char op) {
	if (op == '^') return 3;
	if (op == '*' || op == '/') return 2;
	if (op == '+' || op == '-') return 1;
	return -1;
}

string infixToPostfix(string s) 
{
	stack<char> st;
	string res;
	int sz = s.size();

	for (int i = 0; i < sz; i++) 
	{
		if (isalnum(s[i])) 
		{
			res += s[i];
		}
		else if (s[i] == '(') 
		{
			st.push(s[i]);
		}
		else if (s[i] == ')') 
		{
			while (!st.empty() && st.top() != '(') 
			{
				res += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && prec(s[i]) <= prec(st.top())) 
			{
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}

	while (!st.empty()) 
	{
		res += st.top();
		st.pop();
	}

	return res;
}

string toPrefix(string infix) 
{
	// if you don't want to use for loop to reverse the infix string then use reverse func below
	/*reverse(infix.begin(), infix.end());*/ 
	                                         
	int n = infix.length();
	for (int i = 0; i < n / 2; i++) 
	{
		swap(infix[i], infix[n - i - 1]);
	}

	for (int i = 0; i < infix.size(); i++) 
	{
		if (infix[i] == '(') 
		{
			infix[i] = ')';
		}
		else if (infix[i] == ')') 
		{
			infix[i] = '(';
		}
	}

	string postfix = infixToPostfix(infix);
	/*reverse(postfix.begin(), postfix.end());*/
	int m = postfix.length();
	for (int i = 0; i < m / 2; i++) 
	{
		swap(postfix[i], postfix[m - i - 1]);
	}

	return postfix;
}

int main() 
{
	string s = "(a-b/c)*(a/k-l)";
	cout << toPrefix(s) << endl;
	return 0;
}
