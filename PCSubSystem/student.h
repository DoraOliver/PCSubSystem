#pragma once
#include <iostream>
#include <string>
#include "identity.h"
#include <vector>
#include "orderFile.h"
#include "computerRoom.h"
#include <fstream>

using namespace std;

class Student :public Identity
{
public:

	Student();

	Student(int Id, string name, string pwd);

	virtual void openMenu();

	void applyOrder();

	void showMyOrder();

	void showAllOrder();

	void cancelOrder();

	int m_Id;

	vector<ComputerRoom> vCom;
};