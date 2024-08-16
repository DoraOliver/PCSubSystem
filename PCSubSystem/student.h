#pragma once
#include <iostream>
#include <string>
#include "identity.h"

using namespace std;

class Student :public Identity
{
public:

	Student();

	Student(int Id, string name, string Pwd);

	virtual void openMenu();

	void applyOrder();

	void showMyOrder();

	void showAllOrder();

	void cancelOrder();

	int m_Id;
};