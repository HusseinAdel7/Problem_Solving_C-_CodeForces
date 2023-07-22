# include < iostream > 
using namespace std;
void main()
{
	int x;
	cout << " Enter Number \n ";
	cin >> x;
	for (int i = 2; i <= x; i++)
	{
		if (i % 2 != 0 && i % 3 != 0||i==2||i==3)
		{
			cout << i;
			cout << "\n";
		}
	}
		
}