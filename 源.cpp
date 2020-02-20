//编写一个程序，用同一个函数名对n个数据进行从小到大排序，数据类型可以是整型、单精度型、双精度型。要求用函数模板实现。
//函数模板代替重载函数的多次定义

//解决bug方法：名字命名用了c++的保留字
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
	cout << "数据从小到大排列顺序：";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
int main()
{

	int n, num;
	cout << "您想输入多少个数据：" << endl;
	cin >> n;
	cout << "您输入的数据类型：1（int型） 2（float型） 3（double型）" << endl << "请输入编号:";
	cin >> num;
	cout << "请输入数据：";

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
