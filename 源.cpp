//��дһ��������ͬһ����������n�����ݽ��д�С���������������Ϳ��������͡��������͡�˫�����͡�Ҫ���ú���ģ��ʵ�֡�
//����ģ��������غ����Ķ�ζ���

//���bug������������������c++�ı�����
#include<iostream>
using namespace std;
template<class T>
T rankandput(T* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			T t;
			if (a[i] > a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	cout << "���ݴ�С��������˳��";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
int main()
{

	int n, num;
	cout << "����������ٸ����ݣ�" << endl;
	cin >> n;
	cout << "��������������ͣ�1��int�ͣ� 2��float�ͣ� 3��double�ͣ�" << endl << "��������:";
	cin >> num;
	cout << "���������ݣ�";

	if (num == 1)
	{
		int *a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rankandput(a ,n);
	}
	if (num == 2)
	{
		float *a = new float[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rankandput(a, n);
	}
	if (num == 3)
	{
		double *a = new double[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rankandput(a, n);
	}
	return 0;
}
