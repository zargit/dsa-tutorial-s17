#include <iostream>

using namespace std;

template<class T>
struct Item{
	T value;
	Item<T>* next;
};

template<class T>
class List{
	public:
		Item<T>* head;
		List(){
			head = new Item<T>();
			head->next = NULL;
		}
		void add(T value){
			Item<T>* tHead = head;
			while(tHead->next!=NULL){
				tHead = tHead->next;
			}
			tHead->next = new Item<T>();
			tHead->next->value = value;
			tHead->next->next = NULL;
		}

		void display(){
			Item<T>* tHead = head;
			while(tHead->next!=NULL){
				cout<<tHead->next->value<<" -> ";
				tHead = tHead->next;
			}
			cout<<"END"<<endl;
		}
};

int main(){
	List<double> list;
	list.add(5);
	list.add(6);

	list.display();
	return 0;
}
