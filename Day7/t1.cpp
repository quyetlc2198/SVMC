#include <iostream>
using namespace std;

const int MAX = 405;

// Trả về true nếu kí tự ch là toán hạng
bool checkchu(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

// Trả về true nếu kí tự ch là toán tử
bool checkkytu(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') return true;
	return false;
}

// Trả về độ ưu tiên cho các toán tử
int rank(char ch)
{
	if(ch == '+') return 1;
	if(ch == '-') return 2;
	if(ch == '*') return 3;
	if(ch == '/') return 4;
	if(ch == '^') return 5;
	return -1;
}

// Trả về độ dài xâu str
int getlength(char *str)
{
	int length = 0;
	while(str[length] != '\0') length++;
	return length;
}

int main()
{
	ios::sync_with_stdio(false);

	int T = 0;
	char str[MAX];
    freopen("BT1.txt", "r", stdin);
	cin >> T;
	for(int tc = 0; tc < T; tc++)
	{
		cin >> str;
		int length = getlength(str);

		char *stack = new char[length + 1];
		int size = 0;

		// Thực hiện theo thuật toán
		for(int i = 0; i < length; i++)
		{
			if(checkchu(str[i]))
			{
				cout << str[i];
			}
			else if(str[i] == '(') 
			{
				stack[size++] = str[i];
			}
			else if(str[i] == ')')
			{
				while (stack[size-1] != '(')
				{
					cout << stack[size-1];
					size--;
				}
				size--;
			}
			else if(checkkytu(str[i]))
			{
				while(checkkytu(stack[size-1]) && 
				        (rank( stack[size-1] ) >= rank( str[i]) ))
				{
					cout << stack[size-1];
					size--;
				}

				stack[size] = str[i];
				size++;
			}
		}
		cout << endl;
		delete[] stack;
	}
	return 0;
}