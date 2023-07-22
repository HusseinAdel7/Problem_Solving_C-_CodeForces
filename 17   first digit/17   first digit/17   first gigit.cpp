# include < iostream > 
using namespace std;
void main()
{
	int num,s;
	cout << " enter number \n";
	cin >> num;
	if (num >= 1000)
	{
		s = num / 1000;
		if (s % 2 == 0)
		{
			cout << " EVEN \n";
		}
		else
			cout << " ODD \n";
	}
	else
		cout << " the number shoud be between 999 : 9999 \n";
}