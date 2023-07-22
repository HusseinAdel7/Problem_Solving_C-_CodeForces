# include < iostream > 
using namespace std;
void main()
{
	char ch, x;
	cout << " enter character \n";
	cin >> ch;
	if (ch >= 65 && ch <= 90)
	{

		x = ch + 32;
		cout << x<<"\n";
	}
	if (ch >= 97 && ch <= 122)
	{

		x = ch - 32;
		cout << x << "\n";
	}


}