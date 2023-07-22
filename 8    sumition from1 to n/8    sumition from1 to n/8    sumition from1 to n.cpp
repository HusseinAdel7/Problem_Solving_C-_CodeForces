# include < iostream> 
using namespace std;
void main()
{
	long num;
	long long sum=0;
	cout << " Enter The Number \n";
	cin >> num;
	for (int i = 1; i <= num; i++)
		sum += i;
	cout << " The Sumition from 1 to N = " << sum << "\n";
}