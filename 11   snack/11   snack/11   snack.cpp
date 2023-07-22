# include < iostream > 
using namespace std; 
void main()
{
	int x, y;
	cout << " Enter The Code Of Item \n";
	cin >> x;
	cout << " Enter The Mount Of Item \n ";
	cin >> y;
	if (x <= 5 && x >= 1)
	{
		switch (x)
		{
		case 1:
			cout << y*4.00;
			break;
		case 2:
			cout << y*4.50;
			break;
		case 3:
			cout << y*5.00;
			break;
		case 4:
			cout << y*2.00;
			break;
		case 5:
			cout << y*1.50;
			break;
		default:
			cout << "  The Code Shoud Between 1 To 5 \n";
		}
	}
	else 
		cout << "  The Code Shoud Between 1 To 5 \n";
}