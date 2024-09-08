#pragma once
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

///Вывод узлов дерева по-порядку Name-Left-Right
template typename T
void NRL_traversal(TreeNode* root) {
	if (root != nullptr) {
		std::cout << root->data << " "; //вывод значения текущего узла
		NRL_traversal(root->left);
		NRL_traversal(root->right);
	}
};

