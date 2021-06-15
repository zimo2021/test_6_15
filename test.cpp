#include<iostream>
using namespace std;
//int main()
//{
	//输出
	//cout << "hallo " << endl;
	//int a = 10;
	//cout << "a=" << a << endl;//a=10
	//char a = 'a';
	//cout << "a=" << a << endl;//a=a
	//int a = 10;
	//cout << "a的字节数为：" << sizeof(a) << endl;//a的字节数为：4
	//布尔类型
	//bool p = false;
	//cout << "p=" << p << endl;//p=0
	//cout << "非p等于：" << !p << endl;//非p等于0
	//cout << "布尔类型的大小为：" << sizeof(bool) << endl;//布尔类型的大小为：1
	//输入
	//int a;
	//cout << "请输入a的值" << endl;
	//cin >> a;//5
	//cout << "a=" << a << endl;//a=5
	//double a;
	//cout << "请输入a的值" << endl;
	//cin >> a;//3.14
	//cout << "a=" << a << endl;//a=3.14

	/*bool p = false;
	cout << "请输入p的值：" << endl;
	cin >> p;
	cout << "p=" << p << endl;*/
	//int a = 10;
	//cout << "a++=" << a++ << endl;//10
	//cout << "a=" << a << endl;//11
	//int a = 10;
	//cout << "非a=" << !a << endl;//非a=0
	//if的使用
	/*int a;
	cout << "请给a赋值" << endl;
	cin >> a;
	if (a > 10)
	{
		cout << "a大于10" << endl;
	}
	else
	{
		cout << "a小于或等于10" << endl;
	}*/
	//int a = 10, b = 20;
	//int c = a > b ? a : b;
	//cout << "c等于：" << (a > b ? a : b) << endl;//c等于20
	//cout << "c等于：" << c << endl;//c等于20
	//c++中三目运算符是变量，可以赋值
	//int a = 10;
	//int b = 20;
	//a > b ? a : b = 100;//返回b变量，可以赋值
	//cout << "a=" << a << endl;//10
	//cout << "b=" << b << endl;//100
	//switch case语句  与c语言差不多，也要家break;
	/*int input;
	cout << "请选择（1，2，3）" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "你选择了" << input << endl;
		break;
	case 2:
		cout << "你选择了" << input << endl;
		break;
	case 3:
		cout << "你选择了" << input << endl;
		break;
	default:
		cout << "输入错误" << endl;
	}*/
//
//	return 0;
//}
//用c++做一个猜数字游戏
//#include<ctime>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int val;
//	while (1)
//	{
//		cout << "请猜数字" << endl;
//		cin >> val;
//		if (val < num)
//		{
//			cout << "猜小了" << endl;
//		}
//		if (val > num)
//		{
//			cout << "猜大了" << endl;
//		}
//		if (val == num)
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//	}
//	return 0;
//}
//do while
//int main()
//{
//	int num = 1;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num<=10);//1到10
//	return 0;
//}
//用c++计算手游水仙花数
//int main()
//{
//	int i = 100;
//	while (i < 1000)
//	{
//		int x = i % 10;
//		int y = (i / 10 )% 10;
//		int z = i / 100;
//		if ((x*x*x + y*y*y + z*z*z) == i)
//		{
//			cout << i << "为水仙花数" << endl;
//		}
//		i++;
//	}
//	return 0;
//}
//用C++做一个敲桌子游戏  即从1到100  如果这个数字个位十位或是7的倍数，则打印敲桌子，其余打印数字
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
//		{
//			cout << "敲桌子" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}
//c++中endl相当于换行
//用c++打印一个矩形星阵
//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			cout << "* " ;
//		}
//		cout << endl;//相当于换行
//	}
//	return 0;
//}
//用c++打印乘法口诀表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << j << " * " << i << " = " << i*j << "  ";
//		}
//		cout << endl;
//		cout << endl;
//
//	}
//	return 0;
//}
//goto语句//不推荐使用，会搞混代码逻辑
//int main()
//{
//	cout << "1" << endl;
//	cout << "2" << endl;
//	goto hh;//此处为分号
//	cout << "3" << endl;
//	hh://此变量可任意取
//	cout << "4" << endl;//打印了124
//
//	return 0;
//}
//c++中定义数组
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;//打印1到9
//	}
//	return 0;
//}
//用c++计算数组中元素的个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	cout << "数组总大小为：" << sizeof(arr) << endl;
//	cout << "数组中每个元素大小为：" << sizeof(arr[0]) << endl;
//	cout << "数组中共有" << sizeof(arr) / sizeof(arr[0]) << "个元素" << endl;
//	cout << "数组首元素地址为：" << (int)arr << endl;
//	return 0;
//}
//用c++定义二维数组
//int main()
//{
//	int arr[3][3];
//	int i, j, num = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			arr[i][j] = num;
//			num++;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << endl;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[2][3]=
//	{
//		{1,2,3},
//		{4,5,6}//还能这样定义
//	};
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << "\t";//这样也行
//		}
//		cout << endl;
//	}
//	return 0;
//}
//用c++计算二维数组中每一行元的总和
//int main()
//{
//	int arr[3][3]=
//	{
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << sum << endl;//6,15,24
//	}
//	return 0;
//}
//#include<string>//不包含会出错
//int main()
//{
//	string arr[3] = { "张三","李四","王五" };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//c++函数定义
//int sum(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = sum(a, b);
//	cout << c << endl;
//	return 0;
//}
//c++中也可以分文件编辑，和c语言一样 一个c++文件调用函数 一个头文件进行函数声明  一个c++文件进行函数实现（不演示）
//指针
//int main()
//{
	/*int a = 10;*/
	//cout << &a << endl;//0056FA2C//这两个是一样的
	//cout << (int)&a << endl;//5700140
	//int* p = &a;
	//cout << sizeof(p) << endl;//4
	//char a = 'a';//不能用双引号赋值
	//char* p = &a;
	//cout << sizeof(p) << endl;//4  指针大小相同

//	return 0;
//}

//const 修饰指针
//int main()
//{
	//常量指针和指针常量
	//1.常量指针
	/*int a = 10;*/
	/*int b = 20;*/
	//const int* p = &a;
	//p = &b;//可以操作  p可以改变指向  但不能改变他的值
	//*p = 10;//不可以操作  p可以改变指向  但不能改变他的值
	//指针常量
	//int* const p = &a;
	//*p = 20;//可以操作，可以改变p的值，但不能改变p的指向
	//p = &b;//不可以操作，可以改变p的值，但不能改变p的指向
	/*return 0;
}*/

//c++结构体
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	stu s = { "张三",18 };//c++中可以不加struct
//	cout << s.name << "\t"<<s.age << endl;
//	return 0;
//}



