#pragma once



class Tree
{

	struct Node
	{
		int item;
		Node * son, *brother;

		Node(int i, Node *s = 0, Node *b=0):item(i), son(s), brother(b)
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

	int GetNodesOnLevel(int level)
	{
		return GetNodesOnLevel(root, level);
	}

	void Add(const int &elem)
	{
		Add(root, elem);
	}

private:
	void Add(Node * &node, const int &elem);
	void DeleteSubtree(Node *node);
	int GetHight(Node *node);
	int GetNodesOnLevel(Node *node, int level);
	
};


void Tree::DeleteSubtree(Node *node)
{
	if(node)
	{
		DeleteSubtree(node->son);
		DeleteSubtree(node->brother);
		delete node;
	}
}


int Tree::GetHight(Node *node)
{
	if(node == NULL)
		return 0;
	int max = 0;
		for (Node *current = node->son; current; current = current->brother)
		{
			int curHight = GetHight(current);
			if(curHight > max)
				max = curHight;
		}
		return max + 1;
}


int Tree::GetNodesOnLevel(Node *node, int level)
{
	if(node == NULL)
		return 0;
	if(level <= 0)
		return 0;
	return GetNodesOnLevel(node->son, level-1) + (level == 1) +
		GetNodesOnLevel(node->brother, level);

}



void Tree::Add(Node * &node, const int &item)
{
	if(node==NULL)
		node = new Node(item);
	else if (item < node->item)
		Add(node->son, item);
	else
		Add(node->brother, item);
}

