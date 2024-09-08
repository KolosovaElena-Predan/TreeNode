#pragma once
#include "TreeNode.h"
template <class T>
class BinTree
{
	public: TreeNode<T>* root; //указатель на корень дерева

          BinTree(TreeNode<T>* root1) {
              root = root1;
          }
	
          ///Вывод узлов дерева по-порядку Name-Left-Right
          void NRL_traversal(TreeNode<T>* root) {
              if (root != nullptr) {
                  std::cout << root->data << " "; //вывод значения текущего узла
                  NRL_traversal(root->left);
                  NRL_traversal(root->right); 
              }
          }

};

