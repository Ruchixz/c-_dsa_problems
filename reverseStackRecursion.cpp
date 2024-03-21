void insertAtBottom (stack<int> &stack, int element){
	//basecase
	id(stack.empty()){
		stack.push(element);
		return;
	}
	
	int num=s.top();
	s.pop()
	
	insertAtBottom(s,element);
	
	s.push(num); 
}

void reverseStack(stack<int> &stack){
	//basecase
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	
	//recursive call
	reverseStack(stack);
	
	insertAtBottom(stack ,num);
}
