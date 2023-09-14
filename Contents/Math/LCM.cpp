int GCD(int num1,int num2)
{
	if(num2==0)
	{
	 return num1;
	} 
	
	return GCD(num2,num1%num2);
}

int LCM(int num1,int num2) //2個最小公倍數
{
	return((num1*num2)/GCD(num1,num2));
}

int LCM2(int num1,int num2,int num3) //3個最小公倍數
{
	return((num1*num2)/GCD((num1,num2),num3));
}

int main()
{	
    cout<<GCD(6,3);
    cout<<LCM(6,3);
    cout<<LCM2(6,3,3);

    return 0;
}
