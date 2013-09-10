#include<iostream>

using namespace std;

struct list
{
	int item;	
	list *next;
	list(int i, list *n = 0):item(i), next(n)
	{}

};

list *first;
list *last;

void AddLast(int item)
{
		list *newItem = new list(item);
	if(!last)	 // если нет последнего (ласт равен нулю)
		first = newItem;
	else
		last->next = newItem;
	last = newItem;	
}





int main()
{
	AddLast(5);
	AddLast(4);
	AddLast(1);
	AddLast(2);

	list *current = first;

	while(current)
	{	
	cout << current->item<< ' ';
	current=current->next;
	}
	cout << endl;


	/*ListItem *newItem = new ListItem(item);
	if(!last)	
		first = newItem;
	else
		last->next = newItem;
	last = newItem;
	itemsCount++;*/

	list *cur = 0;
	list *next = first;

	while(next)
	{	
		cur = next;
		next = next->next;
		delete cur;
	}
	

	
}
