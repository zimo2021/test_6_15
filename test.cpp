#include<iostream>
using namespace std;
//int main()
//{
	//���
	//cout << "hallo " << endl;
	//int a = 10;
	//cout << "a=" << a << endl;//a=10
	//char a = 'a';
	//cout << "a=" << a << endl;//a=a
	//int a = 10;
	//cout << "a���ֽ���Ϊ��" << sizeof(a) << endl;//a���ֽ���Ϊ��4
	//��������
	//bool p = false;
	//cout << "p=" << p << endl;//p=0
	//cout << "��p���ڣ�" << !p << endl;//��p����0
	//cout << "�������͵Ĵ�СΪ��" << sizeof(bool) << endl;//�������͵Ĵ�СΪ��1
	//����
	//int a;
	//cout << "������a��ֵ" << endl;
	//cin >> a;//5
	//cout << "a=" << a << endl;//a=5
	//double a;
	//cout << "������a��ֵ" << endl;
	//cin >> a;//3.14
	//cout << "a=" << a << endl;//a=3.14

	/*bool p = false;
	cout << "������p��ֵ��" << endl;
	cin >> p;
	cout << "p=" << p << endl;*/
	//int a = 10;
	//cout << "a++=" << a++ << endl;//10
	//cout << "a=" << a << endl;//11
	//int a = 10;
	//cout << "��a=" << !a << endl;//��a=0
	//if��ʹ��
	/*int a;
	cout << "���a��ֵ" << endl;
	cin >> a;
	if (a > 10)
	{
		cout << "a����10" << endl;
	}
	else
	{
		cout << "aС�ڻ����10" << endl;
	}*/
	//int a = 10, b = 20;
	//int c = a > b ? a : b;
	//cout << "c���ڣ�" << (a > b ? a : b) << endl;//c����20
	//cout << "c���ڣ�" << c << endl;//c����20
	//c++����Ŀ������Ǳ��������Ը�ֵ
	//int a = 10;
	//int b = 20;
	//a > b ? a : b = 100;//����b���������Ը�ֵ
	//cout << "a=" << a << endl;//10
	//cout << "b=" << b << endl;//100
	//switch case���  ��c���Բ�࣬ҲҪ��break;
	/*int input;
	cout << "��ѡ��1��2��3��" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "��ѡ����" << input << endl;
		break;
	case 2:
		cout << "��ѡ����" << input << endl;
		break;
	case 3:
		cout << "��ѡ����" << input << endl;
		break;
	default:
		cout << "�������" << endl;
	}*/
//
//	return 0;
//}
//��c++��һ����������Ϸ
//#include<ctime>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int val;
//	while (1)
//	{
//		cout << "�������" << endl;
//		cin >> val;
//		if (val < num)
//		{
//			cout << "��С��" << endl;
//		}
//		if (val > num)
//		{
//			cout << "�´���" << endl;
//		}
//		if (val == num)
//		{
//			cout << "�¶���" << endl;
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
//	} while (num<=10);//1��10
//	return 0;
//}
//��c++��������ˮ�ɻ���
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
//			cout << i << "Ϊˮ�ɻ���" << endl;
//		}
//		i++;
//	}
//	return 0;
//}
//��C++��һ����������Ϸ  ����1��100  ���������ָ�λʮλ����7�ı��������ӡ�����ӣ������ӡ����
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}
//c++��endl�൱�ڻ���
//��c++��ӡһ����������
//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			cout << "* " ;
//		}
//		cout << endl;//�൱�ڻ���
//	}
//	return 0;
//}
//��c++��ӡ�˷��ھ���
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
//goto���//���Ƽ�ʹ�ã���������߼�
//int main()
//{
//	cout << "1" << endl;
//	cout << "2" << endl;
//	goto hh;//�˴�Ϊ�ֺ�
//	cout << "3" << endl;
//	hh://�˱���������ȡ
//	cout << "4" << endl;//��ӡ��124
//
//	return 0;
//}
//c++�ж�������
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
//		cout << arr[i] << endl;//��ӡ1��9
//	}
//	return 0;
//}
//��c++����������Ԫ�صĸ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	cout << "�����ܴ�СΪ��" << sizeof(arr) << endl;
//	cout << "������ÿ��Ԫ�ش�СΪ��" << sizeof(arr[0]) << endl;
//	cout << "�����й���" << sizeof(arr) / sizeof(arr[0]) << "��Ԫ��" << endl;
//	cout << "������Ԫ�ص�ַΪ��" << (int)arr << endl;
//	return 0;
//}
//��c++�����ά����
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
//		{4,5,6}//������������
//	};
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << "\t";//����Ҳ��
//		}
//		cout << endl;
//	}
//	return 0;
//}
//��c++�����ά������ÿһ��Ԫ���ܺ�
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
//#include<string>//�����������
//int main()
//{
//	string arr[3] = { "����","����","����" };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//c++��������
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
//c++��Ҳ���Է��ļ��༭����c����һ�� һ��c++�ļ����ú��� һ��ͷ�ļ����к�������  һ��c++�ļ����к���ʵ�֣�����ʾ��
//ָ��
//int main()
//{
	/*int a = 10;*/
	//cout << &a << endl;//0056FA2C//��������һ����
	//cout << (int)&a << endl;//5700140
	//int* p = &a;
	//cout << sizeof(p) << endl;//4
	//char a = 'a';//������˫���Ÿ�ֵ
	//char* p = &a;
	//cout << sizeof(p) << endl;//4  ָ���С��ͬ

//	return 0;
//}

//const ����ָ��
//int main()
//{
	//����ָ���ָ�볣��
	//1.����ָ��
	/*int a = 10;*/
	/*int b = 20;*/
	//const int* p = &a;
	//p = &b;//���Բ���  p���Ըı�ָ��  �����ܸı�����ֵ
	//*p = 10;//�����Բ���  p���Ըı�ָ��  �����ܸı�����ֵ
	//ָ�볣��
	//int* const p = &a;
	//*p = 20;//���Բ��������Ըı�p��ֵ�������ܸı�p��ָ��
	//p = &b;//�����Բ��������Ըı�p��ֵ�������ܸı�p��ָ��
	/*return 0;
}*/

//c++�ṹ��
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	stu s = { "����",18 };//c++�п��Բ���struct
//	cout << s.name << "\t"<<s.age << endl;
//	return 0;
//}



