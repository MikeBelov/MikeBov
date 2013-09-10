#pragma once
#include <sstream>
#include <string>

using namespace std;

class Tree
{

	struct Node
	{
		int item;
		Node * left, *right;

		Node(int i, Node *s = 0, Node *b=0):item(i), left(s), right(b)
		{}
	};

	Node *root;
	
public:
	Tree():root(0)
	{
		//root = 0;
	}

	~Tree()
	{
		DeleteSubtree(root);
	}

	int GetHight()
	{
		return GetHight(root);
	}

	int GetNodeleftLevel(int level)
	{
		return GetNodeleftLevel(root, level);
	}

	void Add(const int &elem)
	{
		Add(root, elem);
	}
	
	string GetAllItemsInfo()
	{
		return GetAllItemsInfo(root);
	}
	
	void Print()
	{
		Print(root, 0);
	}

	bool Find(const int &elem)
	{
		return Find(root, elem);
	}

	


private:
	void Add(Node * &node, const int &elem);
	void DeleteSubtree(Node *node);
	int GetHight(Node *node);
	int GetNodeleftLevel(Node *node, int level);
	string GetAllItemsInfo(Node *node);
	void Print(Node* root,unsigned k);
	bool Find(Node *curr, const int &elem);
};


bool Tree::Find(Node *curr, const int &elem)
{
	if (!curr)
		return false;
	if(elem > curr->item)
		return Find(curr->right, elem);
	else if (elem < curr->item)
		return Find(curr->left, elem);
	else
		return true;	
}



void Tree::Print(Node* root,unsigned k)
{ 
  if (root)
   {
	Print(root->right, k + 3);

	for(unsigned i = 0; i < k; i++)
	{
	  cout<<"  ";
	}
	 cout<< root->item << endl;
	 Print(root->left, k + 3);
	} 
}

void Tree::DeleteSubtree(Node *node)
{
	if(node)
	{
		DeleteSubtree(node->left);
		DeleteSubtree(node->right);
		delete node;
	}
}


int Tree::GetHight(Node *node)
{
	if(node == NULL)
		return 0;
	int max = 0;
		for (Node *current = node->left; current; current = current->right)
		{
			int curHight = GetHight(current);
			if(curHight > max)
				max = curHight;
		}
		return max + 1;
}


int Tree::GetNodeleftLevel(Node *node, int level)
{
	if(node == NULL)
		return 0;
	if(level <= 0)
		return 0;
	return GetNodeleftLevel(node->left, level-1) + (level == 1) +
		GetNodeleftLevel(node->right, level);

}



void Tree::Add(Node * &node, const int &item)
{
	if(node==NULL)
		node = new Node(item);
	else if (item < node->item)
		Add(node->left, item);
	else
		Add(node->right, item);
}

//string Tree::GetAllItemsInfo(Node *current =0)
//{
	/*stringstream stream;
	Node *current = root;
	
	GetAllItemsInfo()

		stream << current->item << ' ';
		current =  current->right;
	if(current==NULL)
	{
		stream << endl;
		return stream.str();
	}*/
	


//}

string Tree::GetAllItemsInfo(Node *node)
{
	//stringstream stream;
	if(node)
	{
		
		//stream << node->item << ' ';

		GetAllItemsInfo(node->left);
		GetAllItemsInfo(node->right);
		
		
	}
	else
	{
		//stream << endl;
		return "rjytw";
	}

	

}