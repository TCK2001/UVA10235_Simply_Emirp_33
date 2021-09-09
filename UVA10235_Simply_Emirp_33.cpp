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
//is not prime , emirp , is prime  3종류; 
using namespace std;

int main()
{
	int in1,in2;
	while(cin>>in1) //값 입력; 
	{
		int check=1; //기본은 prime; 
		in2=in1; //나중에 쓰일거; 
		int save=0;   
		for(int i=2;i<=sqrt(in1);i++) //이 연산법도 알아놓으면 좋음; 
		{
			if(in1%i==0) //만약에 나눠지면 prime 아님; 
			{
				check=0; //체크는0; 
				break;
			}
		}
		if(check==1) //체크가 1일때는prime; 
		{
			while(in2>0) //숫자 뒤집기; 
			{
				save=save*10+in2%10;
				in2/=10;
			}
			
			if(in1!=save) //전에숫자와 같으면 안됨; 
			{
				check=2; //뒤집어도 prime인 숫자; 
				for(int i=2;i<=sqrt(save);i++) //숫자 뒤집어서 계산 해보기; 
				{
					if(save%i==0) //만약 뒤집었는데 prime이 아니면; 
					{
						check=1; //안뒤집을때는 prime이니 1로 선언; 
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

