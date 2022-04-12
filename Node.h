#pragma once
#include<iostream>
using namespace std;
template<class T>
class Node
{
public:
	Node(T data);
	void afficher() const;
	void set_Next(Node* x);
	~Node();
	friend class list;
private:
	T Data;
	Node<T>* next;
};

template<class T>
Node<T>::Node(T data) {
	this->Data = data;
	this->next = NULL;
}

template<class T>
void Node<T>::afficher() const
{
	std::cout << this->Data << std::endl;
}

template<class T>
void Node<T>::set_Next(Node* x)
{
	this->next = x;
}

template<class T>
Node<T>::~Node()
{
	std::cout << "Destructeur de la classe Node" << std::endl;
}


