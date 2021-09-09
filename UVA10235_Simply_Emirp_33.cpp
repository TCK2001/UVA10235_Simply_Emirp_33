/*
Sample Input
17
18
19
179
199
Sample Output
17 is emirp.
18 is not prime.
19 is prime.
179 is emirp.
199 is emirp.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
//is not prime , emirp , is prime  3����; 
using namespace std;

int main()
{
	int in1,in2;
	while(cin>>in1) //�� �Է�; 
	{
		int check=1; //�⺻�� prime; 
		in2=in1; //���߿� ���ϰ�; 
		int save=0;   
		for(int i=2;i<=sqrt(in1);i++) //�� ������� �˾Ƴ����� ����; 
		{
			if(in1%i==0) //���࿡ �������� prime �ƴ�; 
			{
				check=0; //üũ��0; 
				break;
			}
		}
		if(check==1) //üũ�� 1�϶���prime; 
		{
			while(in2>0) //���� ������; 
			{
				save=save*10+in2%10;
				in2/=10;
			}
			
			if(in1!=save) //�������ڿ� ������ �ȵ�; 
			{
				check=2; //����� prime�� ����; 
				for(int i=2;i<=sqrt(save);i++) //���� ����� ��� �غ���; 
				{
					if(save%i==0) //���� �������µ� prime�� �ƴϸ�; 
					{
						check=1; //�ȵ��������� prime�̴� 1�� ����; 
						break;
					}
				}	
			}	
		}
		
		if(check==2)
		{
			cout<<in1<<" is emirp."<<endl;
		}
		else if(check==1)
		{
			cout<<in1<<" is prime."<<endl;
		}
		else
		{
			cout<<in1<<" is not prime."<<endl;
		}
	}
return 0;
}

