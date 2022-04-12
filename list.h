#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

template<class T>
class list
{
private:
	Node<T>* Top;
public:
	list();
	void push(Node<T>* n);
	void pop();
	bool is_empty() const;
	void print_list() const;
	Node<T>* sommet() const;
	~list();

};

template<class T>
list<T>::list()
{
	this->Top = nullptr;
}

template<class T>
void list<T>::push(Node<T>* n)
{
	n->next = this->Top;
	this->Top = n;
}

template<class T>
void list <T>::pop()
{
	Node<T>* tmp = this->Top;
	this->Top = this->top->next;
	delete tmp;
	tmp = nullptr;
}

template<class T>
bool list<T>::is_empty() const
{
	return (this->Top == nullptr);
}

template<class T>
void list<T>::print_list() const
{
	Node<T>* tmp = this->top;
	while (tmp != nullptr) {
		tmp->afficher();
		tmp = tmp->next;
	}
}

template<class T>
Node<T>* list<T>::sommet() const
{
	return this->top;
}

template<class T>
list<T>::~list()
{
	while (this->is_empty() != true) {
		this->pop();
	}
	std::cout << "Destructeur de la classe list" << std::endl
}
