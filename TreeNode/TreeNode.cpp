///Автор Колосова Елена вмк-22

#include <iostream>
#include "TreeNode.h"

//                   1
//                 /   \
//                2     3
//               / \
//              4   5

int main()
{
   //объявление переменных
	TreeNode<int>* a1 = new TreeNode<int>(1);
	TreeNode<int>* a2 = new TreeNode<int>(2);
	TreeNode<int>* a3 = new TreeNode<int>(3);
	TreeNode<int>* a4 = new TreeNode<int>(4);
	TreeNode<int>* a5 = new TreeNode<int>(5);


	//постороение дерева
	a1->left = a2;
	a1->right = a3;
	a2->left = a4;
	a2->right = a5;

	/*//примеры обращения к элементам
	std::cout << a1->data << std::endl;
	std::cout << a1->left->data << std::endl;*/

	NRL_traversal_cout(a1);
	std::cout << number_of_nodes(a1);
	std::cout << "    " << height(a1);

	//удаление узлов
	delete a4;
	delete a5;
	delete a2;
	delete a3;
	delete a1;
}

