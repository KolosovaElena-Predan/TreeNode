#pragma once
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

///����� ����� ������ ��-������� Name-Left-Right
template typename T
void NRL_traversal(TreeNode* root) {
	if (root != nullptr) {
		std::cout << root->data << " "; //����� �������� �������� ����
		NRL_traversal(root->left);
		NRL_traversal(root->right);
	}
};

