#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int val; // value of this element
		Node *next; // pointer for next element
};

class LinkedList{
	private:
		Node *head;
		int size;
		
	public:
		LinkedList(){
			head = NULL;
			size = 0;
			cout << "Linked list created" << endl;
		}
		
		void addAtIndex(int index, int val){
			Node *pre = new Node;
			Node *cur = new Node;
			Node *temp = new Node;
			cur = head;
			
			if(index=0){
				addAtHead(val);
				return;
			}
			
			if(index=size){
				addAtTail(val);
				return;
			}
			
			for(int i=0; i<index; i++){
				pre = cur;
				cur = cur->next;
			}
			
			temp->val = val;
			pre->next = temp;
			temp->next = cur;
			size++;
		}
};
