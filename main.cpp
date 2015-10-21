#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void func(string A , vector<string> &B , int x )
{
	if(A.length() != x)
	{
		func(A+"0" , B , x );
		func(A+"1" , B , x );
		
	}
	else
		B.push_back(A);
		
}

int count(string a)
{
	int counter = 0 ;
	for(int i = 0 ; i < a.length(); i++)
       counter += a[i]-'0';
    return counter;
}

int main(int argc, char *argv[])
{
    
    ifstream inFile("3.txt", ios::in);
	int x , y ;
	
	inFile >> x >> y;
	vector<string> B;
	func("",B,x);
	
	string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int countCombination = 0;
	
	for(int i =0 ; i < B.size() ; i++)
	{	
		if(count(B[i]) == y )
		{
			countCombination++;
			//cout << B[i] <<"/*/"<< endl;
			for(int j = 0 ; j < B[i].length();j++)		
				if(B[i][j]=='1')
				{
					cout << ABC[j];
					
	    		}
		
		cout << endl;
		}
	}
	
	cout << countCombination <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
