#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int ch = 0;
	//ctrl + z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/
	return 0;
}
//int main()
//{
//	/*while (1)
//		printf("hehe\n");*/
//	int i = 0;
//
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}*/
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; 
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default :
//		printf("�������\n");
//		break;
//	/*int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;*/
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
	//if (num = 5)// = ��ֵ == �ж����
	//{
	//	printf("hehe\n");
	//}

//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
	/*int age = 100;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("�ϲ���\n");*/
	/*if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");*/
	/*if (age < 18)
		printf("δ����\n");*/
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	;//�����-�����
//	return 0;
//}

//�ṹ��
//char int double....
//��
//�� - ���Ӷ���
//����+���+����+��ݺ���+....
//����+����+������+����+���....
//���Ӷ��� --�ṹ�� - �����Լ����������һ������
//����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 55 };
//	struct Book*  pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//.    �ṹ�����.��Ա
//	//-    �ṹ��ָ��->��Ա
//	//����pb��ӡ���ҵ������ͼ۸�
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	/*printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%d\n", sizeof(pd));//  32-4         64-8
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	//int a = 10;//������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int* p = &a;//p��һ������-ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}