#include<iostream>
#include<string.h>
using namespace std;
void fibonacci(int A[],int);

main()
{   int j,k;
	char key = 'V';
	char str[]="HELLO";
	int len = strlen(str);
	char cipher[len];
	int *A = new int[len];
	int *cy = new int[len];
	A[0]=1; A[1]=2;
	fibonacci(A,len);

	for(j=0;j<len;j++) 
    	{   
    		//cout << (int(key)+A[j]-1)<<" ";
    		if ((int(key)+A[j]-1)>=92)
    			cipher[j]=char((int(key)+A[j]-1)-91+65);
    		else
    			cipher[j] =  char((int(key) + A[j] - 1));
    		//cout << cipher[j] <<" ";

    	}
    	cout << endl;
	for(j=0;j<len;j++)
		{   k = int(cipher[j]);
			cy[j] = 3*k + int(str[len-j-1]);
                
    		cout << cy[j] <<" ";

}}

void fibonacci(int A[],int L)
{   int i;
	for(i=2;i<L;i++)
		A[i] = A[i-1] + A[i-2];
}













