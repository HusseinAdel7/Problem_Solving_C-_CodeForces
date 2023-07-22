# include < iostream > 
using namespace std; 
void main()
{
	double x,s;
	
	cout << " enter number \n";
	cin >> x;
	s =x- (int)x;
	if (s == 0)
		cout << " long long " << " " << int(x) << "\n";
	else
		cout << " double " << " " << int(x) << " " << s<<"\n";
}