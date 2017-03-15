#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* left;
	node* right;
	node(){
		left = NULL;
		right = NULL;
		data = 0;
	}
};
void crate(node* head){

	head = new node;
	while (cin>>head->data){
		if (head->data == 0)
			break;
		crate(head->left);
		crate(head->right);
	}

}
void PreOrder(node* head){
	while (head != NULL)
	{
		cout << head->data;
		PreOrder(head->left);
		PreOrder(head->right);
	}
}
int main()
{
	node* head=NULL;
	crate(head);
	PreOrder(head);
	system("pause");
	return 0;
}