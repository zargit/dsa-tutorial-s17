#include <iostream>

using namespace std;

template<class T>
class Node{
	public:
		T value;
		Node<T>* left;
		Node<T>* right;

		Node(T value){
			this->value = value;
			this->left = NULL;
			this->right = NULL;
		}
};

template<class F>
class BST{ // Binary Search Tree (BST)
	private:
		Node<F>* root;
	public:
		BST(){
			root = NULL;
		}

		void insert(F value){
			if(root==NULL){
				root = new Node<F>(value);
			}else{
				Node<F>* temp = root;
				while(temp!=NULL){
					if(value > temp->value){ 
					// go right, new value is greater than current tree node:w
						if(temp->right == NULL){
							temp->right = new Node<F>(value);
							break;
						}
						temp = temp->right;
					}else{ // go left, new value is less than current tree node
						if(temp->left == NULL){
							temp->left = new Node<F>(value);
							break;
						}
						temp = temp->left;
					}
				}
			}
		}

		bool find(F value){
			Node<F>* temp = root;
			while(temp!=NULL){
				if(value > temp->value){ 
					temp = temp->right;
				}else if(value < temp->value){ 
					temp = temp->left;
				}else{
					return true;
				}
			}
			return false;
		}

		void prefix(Node<F>* current){
			if(current!=NULL){
				cout<<current->value<<" ";
				prefix(current->left);
				prefix(current->right);
			}
		}

		void infix(Node<F>* current){
			if(current!=NULL){
				infix(current->right);
				cout<<current->value<<" ";
				infix(current->left);
			}
		}

		void postfix(Node<F>* current){
			if(current!=NULL){
				postfix(current->left);
				postfix(current->right);
				cout<<current->value<<" ";
			}
		}

		void display(int order=0){
			if(order==0){
				prefix(root);
			}else if(order==1){
				infix(root);
			}else if(order==2){
				postfix(root);
			}
		}
};

int main(){
	BST<int> tree;
	tree.insert(5);
	tree.insert(10);
	tree.insert(3);
	tree.insert(7);

	int x = 55;

	if(tree.find(x)){
		cout<<"Found "<<x<<endl;
	}else{
		cout<<x<<" not in tree"<<endl;
	}

	tree.display(1);
	return 0;
}
