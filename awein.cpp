#include <iostream>
using namespace std;

int main(){
	int x = 0, y = 0, k = 0;
	int i = 0;
	bool found = false;
    cout<<"enter the numbers: ";
    cin>>x>>y>>k;

	if (k == 0){
		found = (x % 10 == y % 10);
	}
	else{
		while (x>0 && y>0 && !found)
		{
			if (i == k){
				if (x % 10 == y % 10)
				{
					found = true;
				}
			}
			x /= 10;
			y /= 10;
			i++;

		}

	}
	if (found)
		cout << "kth digit is the same";
	else
		cout << "kth digit is not the same";
 system("pause");
  return 0;
 }

