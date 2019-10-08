// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



struct Node
{
	
	int m_Value;
	Node* m_LeftChild;
	Node* m_RightChild;
	Node(int p_Value) {
		m_Value = p_Value;
	}
};

struct Node* g_root = NULL;

void InsertInteger(Node** p_tree,int p_value) {
	
	Node** iter = p_tree;
	while (*iter != NULL)
	{
		int t_currentValue = (*iter)->m_Value;
		if (t_currentValue==p_value)
		{
			(*iter)->m_Value = p_value;
			return;
		}
		if (p_value>t_currentValue)
		{
			iter = &(*iter)->m_RightChild;
		}
		if (p_value < t_currentValue)
		{
			iter = &(*iter)->m_LeftChild;
		}

		
	}
	*iter = new Node(p_value);
	

}










int main()
{
    std::cout << "Hello World!\n";
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
