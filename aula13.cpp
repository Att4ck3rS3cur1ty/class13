#include <iostream>

struct Node{
	float info;
	Node* next;
};

int main(){
	Node* n = new Node();
	Node* n2 = new Node();
	Node* n3 = new Node();


	n->info = 20;
	n2->info = 30;
	n3->info = 40;

	n->next = n2;
	n2->next = n3;
	n3->next = nullptr;

	std::cout << n->info << std::endl;	
	std::cout << n2->info << std::endl;	
	std::cout << n3->info << std::endl;	

	delete n;
	delete n2;
	delete n3;
}
