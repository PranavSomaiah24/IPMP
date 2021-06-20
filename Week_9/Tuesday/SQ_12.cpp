#include <bits/stdc++.h>
using namespace std;

int precedence(char op){
	if(op == '+'||op == '-')
	    return 1;
	if(op == '*'||op == '/')
	    return 2;

	return 0;
}


int applyOp(int a, int b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
	}
}

int evaluate(string tokens){
	int i;
	stack <int> valueStack;
	stack <char> opStack;

	for(i = 0; i < tokens.length(); i++){	
		if(tokens[i] == ' ')
			continue;
		else if(tokens[i] == '('){
			opStack.push(tokens[i]);
		}
		else if(isdigit(tokens[i])){
			int val = 0;
			while(i < tokens.length() && isdigit(tokens[i]))
			{
				val = (val*10) + (tokens[i]-'0');
				i++;
			}
			valueStack.push(val);
			i--;
		}else if(tokens[i] == ')')
		{
			while(!opStack.empty() && opStack.top() != '(')
			{
				int val2 = valueStack.top();
				valueStack.pop();
				
				int val1 = valueStack.top();
				valueStack.pop();
				
				char op = opStack.top();
				opStack.pop();
				
				valueStack.push(applyOp(val1, val2, op));
			}
			if(!opStack.empty())
			opStack.pop();
		}else
		{
			while(!opStack.empty() && precedence(opStack.top())
								>= precedence(tokens[i])){
				int val2 = valueStack.top();
				valueStack.pop();
				
				int val1 = valueStack.top();
				valueStack.pop();
				
				char op = opStack.top();
				opStack.pop();
				
				valueStack.push(applyOp(val1, val2, op));
			}
			
			
			opStack.push(tokens[i]);
		}
	}
	
	while(!opStack.empty()){
		int v2 = valueStack.top();
		valueStack.pop();
				
		int v1 = valueStack.top();
		valueStack.pop();
				
		char op = opStack.top();
		opStack.pop();
				
		valueStack.push(applyOp(v1, v2, op));
	}
	
	return valueStack.top();
}
