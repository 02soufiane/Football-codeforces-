#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int N,c;
	N=s.length();
	
	for(int i =1 ; i < 2 ; i++)
	{
		for(int j=0 ; j < N ; j++)
		{
			if(s[j]==s[j+i])
			{
				c+=1;
				if(c==7)
				{
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	if(c!=7)
	{
		cout<<"NO"<<endl;
	}
	
}
