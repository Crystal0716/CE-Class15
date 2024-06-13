#include<stdio.h>
#include<iomanip>
#include<iostream>
using namespace std ;
int main()
{
	int a , b , c[12][12] , d ;
	d = 2 ;
	int z = 2 ;
	do
	{
		cout << "Enter size [3-12] :" ;
		cin >> a ;
		if ( a < 3 )
		{
			cout << "Size should be at least 3 " << endl  ;
		}
		else if ( a > 12 )
		{
			cout << "Size should be no more than 12 " << endl ;
		}
	}
	while ( a < 3 || a > 12);
	do
	{
		cout << "Enter step [1-5] :" ;
		cin >> b ;
		if ( b < 1 )
		{
			cout << "Step should be at least 1 " << endl ;
		}
		else if ( b > 5 )
		{
			cout << "Step should be no more than 5 " << endl ;
		}
	}
	while ( b < 1 || b > 5);
	for ( int i = 0 ; i < 1 ; i++ )
	{
		for (int j = 0 ; j < a ; j++)
		{
			c[i][j] = d ;
			d = d + b ;
		}
	}
	for ( int i = 0 ; i < a ; i++ )
	{
		for (int j = 0 ; j < 1 ; j++)
		{
			
			c[i][j] = z ;
			z = z + b ;
		}
	}
	for ( int i = 1 ; i < a ; i++ )
	{
		for (int j = 1 ; j < a ; j++)
		{
			int x , y ;
			x = c[0][j] ;
			y = c[i][0] ;
			c[i][j] = x * y ;
		}
	}
	for ( int i = 0 ; i < a ; i++ )
	{
		for (int j = 0 ; j < a ; j++)
		{
			cout << setfill(' ') << setw(5) << c[i][j] << " ";
		}
		cout << endl ;
	}
	return(0) ;
}