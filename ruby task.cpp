// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
 int main()
{   
	int r;
	
	while(1){cout << "Welcome,\nChoose what challenge you want to try!\n1 - Fibonacci challenge.\n2 - The missing numbers game challenge.\n3-Exit\n\n";
	cin >> r;
	switch (r)
	{
	case 1:{
		int x, y, z=0,n=9;
		cout << "Choose first number:";
		cin >> x;
		cout << "\n";
		cout << "Choose second number:";
		cin >> y;
		cout << "\n";
		cout << "{" << x <<',' << y ;
		while (n--)
		{
			if (x == 0 && y == 0) {
				
				cout <<"}\nEnter an error,It is forbidden to enter two numbers with a value of zero.\n";
				break;
			}
			z=0;
			z = x + y;
			x = y;
			y = z;
			cout << ','<< z ;



		}
		cout << "}";
		cout<<"\n\n-------------------------------------------\n\n";
break		;}

		
	case 2:
	{
	    int n,t;
	    cout<<"enter the size of array:";
	    cin>>n;
	    cout<< "\n";
	    t=1;
	    int a[n-1];
	    for(int i=0;i<n-1;i++){
	        cout<<"enter the number of array "<<i+1<<":";
	        cin>>a[i];
	    }
	    cout<< "\n";
	    int u = sizeof(a)/sizeof(a[0]);
	    sort(a,a+u);
	    if(a[0]==1)
	    for(int i=0;i<n-1;i++){
	        if(t==u+2)break;
	        if(a[t]-a[i] != 1){
	        cout<<"\nMissing number is :"<<(a[i])+1;break;
	           
	        }
	       
	       t++;
	        } 
	        else if (a[0]==2)cout<<"\nMissing number is :"<<1;
	        else  cout<<"\nMissing number is :"<<u+1;
	        cout<<"\n\n-------------------------------------------\n\n";
            
break;	    }
	    
	    
	
	
	
default:{
	cout << "noun of mention try again.";
	r=0;
}
	break;
	}
	}
	
	return 0;
}
	


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
