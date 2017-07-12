// reverse string using stack and Linked List
#include <bits/stdc++.h>
using namespace std;

// Reverse String using Stack
string ReverseString(string exp){
	stack<char> s;
	for(int i=0;i<exp.length();i++)
		s.push(exp[i]);
	for(int i=0;i<exp.length();i++){
		exp[i] = s.top();
		s.pop();
	}
	return exp;
}
// Reverse Linked List Using Stack;
struct Node{
	int data;
	Node *next;
};
Node *head = NULL;
void InsertHead(int x){
	Node *temp = new Node ();
	temp->data = x;
	temp->next = head;
	head = temp;
}
void Display(){
	Node *temp = head ;
	cout<<"List : ";
	while(temp !=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

void ReverseLinkedList(){
	stack<Node *> s;
	Node *temp = head;
	while(temp != NULL){
		s.push(temp);
		temp= temp->next;
	}
	head = s.top();
	s.pop();
	temp = head;
	while(!s.empty()){
		temp ->next = s.top();
		s.pop();
		temp = temp->next;
	}
	temp->next = NULL;
}

int main() {
	cout<<ReverseString("Mahmoud")<<"\n";
	InsertHead(5);
	InsertHead(4);
	InsertHead(3);
	InsertHead(2);
	InsertHead(1);
	Display();
	ReverseLinkedList();
	Display();
}
