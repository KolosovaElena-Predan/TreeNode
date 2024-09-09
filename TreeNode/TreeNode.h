#pragma once
#include <iostream>
///����� �������� ����� ���-22
///���� ��������� ������
template <class T>
class TreeNode
{
public: 
	///��������
	T data;

	///��������� �� ������ �������
	TreeNode* left;

	///��������� �� ������� �������
	TreeNode* right;

	///����������� ��� ����������
	TreeNode() {
		left = nullptr;
		right = nullptr;
	}

	///����������� � ����������, ��� value �������� ����
	TreeNode(T value) {
		left = nullptr;
		right = nullptr;
		data = value;
	}

};


template <typename T>
T max(T a1, T a2) {
	if (a1 < a2) return a2;
	else return a1;
}
///������� �������� ����� ������ ��-������� Name-Left-Right
///root-������ ������
template <typename T>
void NRL_traversal_cout(TreeNode<T>* root) {
	if (root != nullptr) {
		std::cout << root->data << " "; //����� �������� �������� ����
		NRL_traversal_cout(root->left);
		NRL_traversal_cout(root->right);
	}
};

///������� �������� ����� ������ ��-������� Left-Name-Right
///root-������ ������
template <typename T>
void LNR_traversal_cout(TreeNode<T>* root) {
	if (root != nullptr) {
		LNR_traversal_cout(root->left);
		std::cout << root->data << " "; //����� �������� �������� ����
		LNR_traversal_cout(root->right);
	}
};


///������� �������� ����� ������ ��-������� Left-Right-Name
///root-������ ������
template <typename T>
void LRN_traversal_cout(TreeNode<T>* root) {
	if (root != nullptr) {
		LRN_traversal_cout(root->left);
		LRN_traversal_cout(root->right);
		std::cout << root->data << " "; //����� �������� �������� ����
	}
};


///�������� ��������� ������
template <typename T>
void delete_bin_tree(TreeNode<T>* root) {
	if (root != nullptr) {
		delete_bin_tree(root->left);   // ������� ����� ���������
		delete_bin_tree(root->right);  // ������� ������ ���������
		delete root;                   // ������� ������� ����
	}
};


///���������� ���-�� �����
template <typename T>
unsigned long long number_of_nodes(TreeNode<T>* root) {
	if (root == nullptr) return 0;
	else { return 1 + number_of_nodes(root->left) + number_of_nodes(root->right); }
};

///����������� ������� ������
template <typename T>
long long height(TreeNode<T>* root) {
	if (root == nullptr) return -1; 
	else { return max(height(root->left), height(root->right)) + 1; }
};

