#include <iostream>
#include <string>
#include "TStack.h"

using std::cout;
using std::cin;


int main() 
{
	// ������� 1: ��������� ����, ������� �������
	// � ������� ����� while(!st.IsEmpty)

	setlocale(LC_ALL, "");

	cout << "������� 1: ��������� ����, ������� �������" << '\n';

	int size = 10, elem = 0;
	TStack<int> st(size);

	cout << "���������� �����" << '\n';

	for (int i = 0; i < size; i++)
	{
		st.Push(i);
		cout << i << ' ';
	}

	cout << '\n' << "������� �����" << '\n';

	while (!st.IsEmpty())
	{
		elem = st.Pop();
		cout << elem << ' ';
	}

	cout << '\n' << '\n';

	// ������� 2: ��������� ���������� ����������� ������ 
	// � ��� ��������� (�����������, �����)

	cout << "������� 2: ��������� ���������� ����������� ������" << '\n';

	std::string formula;

	cout << "������� ���������: ";
	std::getline(cin, formula);
	size = formula.size();
	TStack<char> st1(size);

	cout << '\n';

	for (int i = 0; i < size; i++)
	{
		if (formula[i] == '(')
			st1.Push('(');
		try
		{
			if (formula[i] == ')')
				st1.Pop();
		}
		catch (...)
		{
			cout << "������� ����� ����������� ������, ������" << '\n';
			return 0;
		}
	}

	if (!st1.IsEmpty())
	{
		cout << "������� ����� ����������� ������, ������" << '\n';
		return 0;
	}
	else
		cout << "����� �������� � ������ ������ :3" << '\n';
}