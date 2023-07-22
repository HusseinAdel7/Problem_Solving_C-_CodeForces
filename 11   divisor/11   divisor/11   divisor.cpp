# include < iostream > 
using namespace std;
void main()
{
	int num;
	cout << " Enter Number \n";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num%i == 0)
		{
			cout << i;
			cout << "\n";
		}
	}
}