#pragma once
#include "TreeNode.h"
template <class T>
class BinTree
{
	public: TreeNode<T>* root; //��������� �� ������ ������

          BinTree(TreeNode<T>* root1) {
              root = root1;
          }
	
          ///����� ����� ������ ��-������� Name-Left-Right
          void NRL_traversal(TreeNode<T>* root) {
              if (root != nullptr) {
                  std::cout << root->data << " "; //����� �������� �������� ����
                  NRL_traversal(root->left);
                  NRL_traversal(root->right); 
              }
          }

};

