#include  <stdio.h>

int main ()
{
	int m, n, temp, r, p;
	
	printf("�������������������м��ÿո�������");

	scanf("%d%d", &m, &n);

	if (m<n)
	{
		temp=m;

		m=n;

		n=temp;
	}

	p=m*n;

	while (n != 0)
	{
		r=m%n;

		m=n;

		n=r;
	}

	printf("������������������Լ���ǣ�%d\n", m);

	printf("�����������������󹫱����ǣ�%d\n", p/m);

	return 0;
}