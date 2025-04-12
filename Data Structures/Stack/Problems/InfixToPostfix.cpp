#include<iostream>
#include<stack>
#include <string>
using namespace std;

int prec(char c) 
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

string infixToPostfix(string s) 
{
	stack<char> s1;
	string result;

	for (int i = 0; i < s.length(); i++) 
	{
		char c = s[i];

		// If the scanned character is
		// an operand, add it to the output string.
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (c == '(')
			s1.push('(');

		// If the scanned character is an ‘)’,
		// pop and add to the output string from the stack
		// until an ‘(‘ is encountered.
		else if (c == ')')
		{
			while (s1.top() != '(')
			{
				result += s1.top();
				s1.pop();
			}
			if (s1.top() == '('){
				s1.pop();
			}
		}
		// If an operator is scanned
		else {
			while (!s1.empty() && prec(c) <= prec(s1.top())) 
			{
				result += s1.top();
				s1.pop();
			}
			s1.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!s1.empty()) 
	{
		result += s1.top();
		s1.pop();
	}

	return result;
}

int main() {
	string input = "a+b*(c^d-e)";
	cout << infixToPostfix(input);
	return 0;
}

/* 


Approach:
Scan the infix expression from left to right.
If the scanned character is an operand, put it in the postfix expression.
Otherwise, do the following
If the precedence of the current scanned operator is higher than the precedence of the operator on top of the stack, 
or if the stack is empty, or if the stack contains a ‘(‘, then push the current operator onto the stack.
Else, pop all operators from the stack that have precedence higher than or equal to that of the current operator. 
After that push the current operator onto the stack.
If the scanned character is a ‘(‘, push it to the stack.
If the scanned character is a ‘)’, pop the stack and output it until a ‘(‘is encountered, and discard both the parenthesis.
Repeat steps 2 - 5 until the infix expression is scanned.
Once the scanning is over, Pop the stack and add the operators in the postfix expression until it is not empty.
Finally, print the postfix expression.
*/