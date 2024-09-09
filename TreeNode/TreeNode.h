#pragma once
#include <iostream>
///Автор Колосова Елена вмк-22
///Узел бинарного дерева
template <class T>
class TreeNode
{
public: 
	///значение
	T data;

	///указатель на левого потомка
	TreeNode* left;

	///указатель на правого потомка
	TreeNode* right;

	///Конструктор без параметров
	TreeNode() {
		left = nullptr;
		right = nullptr;
	}

	///Конструктор с параметром, где value значение узла
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
///Выводит значения узлов дерева по-порядку Name-Left-Right
///root-корень дерева
template <typename T>
void NRL_traversal_cout(TreeNode<T>* root) {
	if (root != nullptr) {
		std::cout << root->data << " "; //вывод значения текущего узла
		NRL_traversal_cout(root->left);
		NRL_traversal_cout(root->right);
	}
};

///Выводит значения узлов дерева по-порядку Left-Name-Right
///root-корень дерева
template <typename T>
void LNR_traversal_cout(TreeNode<T>* root) {
	if (root != nullptr) {
		LNR_traversal_cout(root->left);
		std::cout << root->data << " "; //вывод значения текущего узла
		LNR_traversal_cout(root->right);
	}
};


///Выводит значения узлов дерева по-порядку Left-Right-Name
///root-корень дерева
template <typename T>
void LRN_traversal_cout(TreeNode<T>* root) {
	if (root != nullptr) {
		LRN_traversal_cout(root->left);
		LRN_traversal_cout(root->right);
		std::cout << root->data << " "; //вывод значения текущего узла
	}
};


///Удаления бинарного дерева
template <typename T>
void delete_bin_tree(TreeNode<T>* root) {
	if (root != nullptr) {
		delete_bin_tree(root->left);   // Удалить левое поддерево
		delete_bin_tree(root->right);  // Удалить правое поддерево
		delete root;                   // Удалить текущий узел
	}
};


///Возвращает кол-во узлов
template <typename T>
unsigned long long number_of_nodes(TreeNode<T>* root) {
	if (root == nullptr) return 0;
	else { return 1 + number_of_nodes(root->left) + number_of_nodes(root->right); }
};

///Определение глубины дерева
template <typename T>
long long height(TreeNode<T>* root) {
	if (root == nullptr) return -1; 
	else { return max(height(root->left), height(root->right)) + 1; }
};

