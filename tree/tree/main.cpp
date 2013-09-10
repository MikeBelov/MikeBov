#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
	Tree tree1;
	
	tree1.Add(12);	
	tree1.Add(5);
	tree1.Add(3);
	tree1.Add(10);
	tree1.Add(7);
	tree1.Add(11);
	tree1.Add(6);
	tree1.Add(9);
	tree1.Add(15);
	tree1.Add(18);
	tree1.Add(17);
	tree1.Add(0);

	//tree1.Add(1);
	//tree1.Add(2);
	//tree1.Add(3);
	//tree1.Add(4);
	//tree1.Add(5);
	//tree1.Add(6);
	//tree1.Add(7);
	tree1.Print();
	
	/*cout << tree1.GetHight() << endl;
	cout << tree1.GetNodesOnLevel(3) << endl;*/
	//cout << tree1.GetAllItemsInfo() << endl;
	bool f = tree1.Find(1);
	cout << f << endl;
}
