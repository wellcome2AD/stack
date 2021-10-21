#include <iostream>
#include <string>
#include "TStack.h"

using std::cout;
using std::cin;


int main() 
{
	// задание 1: заполнить стек, сделать очистку
	// с помощью цикла while(!st.IsEmpty)

	setlocale(LC_ALL, "");

	cout << "«адание 1: заполнить стек, сделать очистку" << '\n';

	int size = 10, elem = 0;
	TStack<int> st(size);

	cout << "«аполнение стека" << '\n';

	for (int i = 0; i < size; i++)
	{
		st.Push(i);
		cout << i << ' ';
	}

	cout << '\n' << "ќчистка стека" << '\n';

	while (!st.IsEmpty())
	{
		elem = st.Pop();
		cout << elem << ' ';
	}

	cout << '\n' << '\n';

	// задание 2: проверить корректную расстановку скобок 
	// в мат выражении (вложенность, число)

	cout << "«адание 2: проверить корректную расстановку скобок" << '\n';

	std::string formula;

	cout << "¬ведите выражение: ";
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
			cout << "—лишком много закрывающих скобок, дурень" << '\n';
			return 0;
		}
	}

	if (!st1.IsEmpty())
	{
		cout << "—лишком много открывающих скобок, дурень" << '\n';
		return 0;
	}
	else
		cout << " ака€ красива€ и верна€ строка :3" << '\n';
}