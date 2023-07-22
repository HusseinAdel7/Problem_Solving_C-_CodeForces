# include <iostream > 
using namespace std;
void main()
{
	char ch;
	cout << " Enter any character \n ";
	cin >> ch;
	if (ch >= 65 && ch <= 90)
		cout << "IS CAPITAL \n ";
	else if (ch >= 97 && ch <= 122)
		cout << "  IS  SMALL  \n ";
	

}
