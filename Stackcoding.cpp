//
//  StackAdv.cpp
//  DSA-Stack
//
//  Created by Hina Khalid  on 25/01/2022.
//  Copyright © 2022 Hina Khalid . All rights reserved.
//


/* C++ program to implement basic stack
 operations */
#include <iostream>

using namespace std;

#define MAX 1000

class Stack {
    int top;
    
public:
    int a[MAX]; // Maximum size of Stack
    
    Stack() 
	{ top = -1; }
	
	bool push(int x){
    if (top >= (MAX - 1)) {
        cout << "Stack Full";
        return false;
    }
    else {
    	top++;
        a[top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int pop()
{
    if (top < 0) {
        cout << "Stack Empty";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool isEmpty()
{
    return (top < 0);
}

   
};


// Driver program to test above functions
int main()
{
     Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }
    
    return 0;
}

