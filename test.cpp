#define _CRT_SECURE_NO_WARNINGS   1

////1.���̶�����
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int val = 1234;
////	/*
////	printf����ʹ��ʹ�ø�ʽ���ƴ���%o������%X���ֱ����
////	�˽���������ʮ��������������ʹ�����η���#������ǰ����ʾ
////	*/
////	printf("%#o %#X\n", val, val);
////	return 0;
////}
//
//
////2.ʮ������תʮ����
////#include<stdio.h>
////int main()
////{
////	int a = 0XABCDEF;
////	printf("%15d", a);
////	return 0;
////}
//
////3.printf�ķ���ֵ
////#include<stdio.h>
////int main()
////{
////	int a = printf("Hello world!");
////	printf("\n");
////	printf("%d\n", a);
////	return 0;
////}
//
//
////4.�ɼ����������
////#include<stdio.h>
////int main()
////{
////	int score1 = 60, score2 = 80, score3 = 90;
////	scanf("%d %d %d", &score1, &score2, &score3);
////	printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
////	return 0;
////}
//
//
////5.ѧ��������Ϣ���������
////#include <stdio.h>
////
////int main() {
////	int number = 0;
////	float c_score = 0.f, math_score = 0.f, english_score = 0.f;
////	scanf("%d;%f,%f,%f", &number, &c_score, &math_score, &english_score);
////	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n", number, c_score, math_score, english_score);
////	return 0;
////}
//
//
//////6.�ַ�������
////#include<stdio.h>
////int main()
////{
////	int i, j;
////	char k = 0;
////	scanf("%c", &k);
////	for (i = 0; i < 5; i++)
////	{
////		for (j = 0; j < (4 - i); j++)
////		{
////			printf(" ");
////		}
////		for (j = 0; j <= i; j++)
////		{
////			printf("%c ", k);
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
//
////7.ASSIC��
//
////#include <stdio.h>
////int main() {
////	char strings[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 ,'\0'};
////	printf("%s\n", strings);
////	return 0;
////}
//
//
////8.���յ��������
////#include <stdio.h>
////
////int main() {
////
////	int year = 0, month = 0, day = 0;
////	scanf("%4d%2d%2d", &year, &month, &day);
////	//ʹ��%0�������ǰ��0
////	printf("year=%d\n", year);
////	printf("month=%02d\n", month);
////	printf("date=%02d\n", day);
////	return 0;
////}
//
//
////9������������
////#include <stdio.h>
////
////
////int main() {
////
////	int a = 0, b = 0, tmp;
////	scanf("a=%d,b=%d", &a, &b);
////	//ʹ���м����tmp��������������
////	tmp = a;
////	a = b;
////	b = tmp;
////	printf("a=%d,b=%d\n", a, b);
////	return 0;
////}
//
//
////10��תASSIC
////#include <stdio.h>
////
////int main() {
////	char ch = 0;
////	scanf("%c", &ch);
////	//%d���ɿ��ư��������
////	printf("%d\n", ch);
////	return 0;
////}
//
////
////11.kiki����
////#include <stdio.h>
////int main() {
////	int a = 0, b = 0;
////	scanf("%d %d", &a, &b);
////	printf("%d\n", (a + b) % 100);
////	return 0;
////}
//
///*12.���������
//long sum;
//
//scanf("%d", &age);
//
//sum = age*3.156E7;
//
//printf("%ld\n", sum);
//
//return 0*/;
//
////13.ʱ��ת��
/////* ʹ�õ���C���� */
////#include<stdio.h>
////int main(){
////	int seconds, h, m, s;
////	scanf("%d", &seconds);
////	h = seconds / 3600;
////	m = (seconds % 3600) / 60;
////	s = (seconds % 3600) % 60;
////	printf("%d %d %d", h, m, s);
////}
//
////14.�ɼ�
////#include<stdio.h>
////#include<iostream>
////using namespace std;
////int main()
////{
////	double a, b, c;
////	cin >> a >> b >> c;
////	double sum, avg;
////	sum = a + b + c;
////	avg = sum / 3;
////	printf("%.2f", sum);
////	cout << " ";
////	printf("%.2f", avg);
////	return 0;
////}
//
//
////15��������ָ��
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int weight = 0, height = 0;
////	scanf("%d %d", &weight, &height);
////	printf("%.2f\n", weight / (height / 100.f * height / 100.f));
////	return 0;
////}
//
////16�����ε��ܳ������
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a, b, c;
////	//���������ε������߳�
////	scanf("%d %d %d", &a, &b, &c);
////	//���㺣�׹�ʽ��p
////	float p = (a + b + c) / 2.f;
////	//���ú��׹�ʽ������
////	printf("circumference=%.2f area=%.2f\n", (a + b + c)*1.f, sqrt(p*(p - a)*(p - b)*(p - c)));
////	return 0;
////}
////
////17��������
////#include <bits/stdc++.h>
////using namespace std;
////#define PI 3.1415926
//////���� const float PI = 3.1415926;
////
////int main() {
////	float radius = 0.f;
////	scanf("%f", &radius);
////	printf("%.3f\n", 4.f*PI*radius*radius*radius / 3.f);
////	//���η���������pow�������ж�Ӧָ�����㣬Ч��ͬ�ϡ�
////	//printf("%.3f\n", 4.f*PI*pow(radius,3)/3.f);
////	return 0;
////}
//
//
////18.��Сдת��
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//ѭ����ζ��룬����gethar��ȥ����Ļ��з�
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//ch+32��ΪСд��ĸ
////		printf("%c\n", ch + 32);
////	}
////}
////
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//�ò�����������ʾ
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//�������õ�tolower��������ת��
////		printf("%c\n", tolower(ch));
////	}
////}
//
//
////19,2��n�η�
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a = 0;
////	while (scanf("%d", &a) != EOF) {
////		//��Ч��ʵ�ֿ���ʹ�����ƣ��ƶ�aλ��Ϊ2��a�η�
////		printf("%d\n", 1 << a);
////	}
////	return 0;
////}
//
////20.kiki������
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	int n = 0, h = 0, m = 0;
////	//ѭ������n h m
////	while (scanf("%d %d %d", &n, &h, &m) != EOF) {
////		//�ж��Ƿ��ܹ����������������� n - ��m / h������֮��1
////		if (m % h == 0)
////			printf("%d\n", n - (m / h));
////		else
////			printf("%d\n", n - (m / h) - 1);
////	}
////	return 0;
////}
//
////21��������Ϣ
////#include<iostream>
////using namespace std;
////int main()
////{
////	cout << "I lost my cellphone!" << endl;
////	return 0;
////}
//
////22���ѧ����Ϣ
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	printf("Name    Age    Gender\n");
////	printf("---------------------\n");
////	/*����
////	for(int i = 0; i < 21; ++i)
////	if(i == 20)
////	printf("-\n");
////	else
////	printf("-");
////	*/
////	printf("Jack    18     man\n");
////	return 0;
////}
//
//
////23.����ƽ���ɼ�
////#include<iostream>
////#include<stdio.h>
////using namespace std;
////int main()
////{
////	int a, b, c, d, e;
////	cin >> a >> b >> c >> d >> e;
////	int sum = a + b + c + d + e;
////	double avg = sum*1.0 / 5;
////	printf("%.1f", avg);
////	return 0;
////}
//
//
////24����A+B
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a = 0, b = 0;
////	//�ֱ���ʮ�����ƺͰ˽��ƶ���a b
////	scanf("%x %o", &a, &b);
////	//ֱ�����a+b����
////	printf("%d\n", a + b);
////	return 0;
////}
//
//
////25�жϴ���
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	char ch = 0;
////	while (~scanf("%c", &ch)) {
////		//����س���
////		getchar();
////		//����ʹ��isalpha���������ж�
////		//if(isalpha(ch))
////		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
////			printf("YES\n");
////		else
////			printf("NO\n");
////	}
////	return 0;
////}
//
////26��������
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	double weight = 0.0, height = 0.0;
////	//orz������bmi����
////	//��������֮����빫ʽ�ó�bmi��ֵ
////	scanf("%lf %lf", &weight, &height);
////	double BMI = weight / (height * height);
////	//�ж�bmi��ֵ�Ƿ�������������
////	if (BMI >= 18.5 && BMI <= 23.9)
////		printf("Normal\n");
////	else
////		printf("Abnormal\n");
////	return 0;
////}
//
////
////27����
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	double price = 0.0;
////	int month = 0, day = 0, dz = 0;
////	//�������������
////	scanf("%lf %d %d %d", &price, &month, &day, &dz);
////	//�Ƿ����ۿ�
////	bool discount = dz == 1 ? true : false;
////
////	if (month == 11 && day == 11) {
////		price *= 0.7;
////		//�ж��Ƿ�������Ż�ȯ��˫ʮ��ͬ��ͬʱҪ�жϼ۸��ܵ���50
////		if (price >= 50.)
////			printf("%.2lf\n", discount ? price - 50 : price);
////		else
////			printf("0.00\n");
////	}
////	else if (month == 12 && day == 12) {
////		price *= 0.8;
////		if (price >= 50.)
////			printf("%.2lf\n", discount ? price - 50 : price);
////		else
////			printf("0.00\n");
////	}
////	else {
////		//û���ۿۣ��������
////		printf("%.2lf\n", price);
////	}
////	return 0;
////}
//
////28����ˮ�ɻ���
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	//�������е���λ������10000��ʼ
////	for (int i = 10000; i <= 99999; i++) {
////		//���õ�ǰ�ͣ�����
////		int sum = 0, mod = 10000, cur = i;
////		//ѭ��ֱ��mod/10Ϊ0
////		while (mod / 10) {
////			//���ݹ�ʽ���㵱ǰ�ĳ����������������ۼ����
////			sum += (cur % mod) * (cur / mod);
////			//����mod
////			mod /= 10;
////		}
////		//�ж��Ƿ�����ˮ�ɻ���
////		if (i == sum)
////			printf("%d ", i);
////	}
////	return 0;
////}
//
////
////29����ǰ����
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int n = 0;
////	scanf("%d", &n);
////
////	//���������鲢�����ʼ��
////	int a[40] = { 0 };
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &a[i]);
////	}
////
////	int m = 0, index = 0;
////	//��ѭ���������ɸѡ��ÿ��ɸѡ����ǰ������ֵ
////	for (int i = 0; i < 5; ++i) {
////		//��ѭ�����������е���ֵ����������ȵ�ǰ�������ֵ�򱣴�����
////		for (int j = 0; j < n; ++j) {
////			if (a[j] > m) {
////				m = a[j];
////				index = j;
////			}
////		}
////		//����������㣬��ֹ��������Ȼ�������ǰ���ֵ
////		a[index] = 0;
////		printf("%d ", m);
////		m = 0;
////	}
////	return 0;
////}
//
//
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int n = 0;
////	scanf("%d", &n);
////
////	//���������鲢�����ʼ��
////	int a[40] = { 0 };
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &a[i]);
////	}
////	//ʹ���㷨�����õ�sort������������greater<int>��STL���õıȽϺ���
////	sort(a, a + n, greater<int>());
////	//���ǰ������ֵ
////	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
////	return 0;
////}
//
////30��ѡ�糤
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a_count = 0, b_count = 0;
////	char ch = 0;
////	//ѭ����ȡͶƱ
////	while (scanf("%c", &ch) != EOF) {
////		//��ǰ�ַ�Ϊ0���˳�
////		if (ch == '0')
////			break;
////		//ͳ��a��Ʊ����ͬ��ҲҪͳ��b��Ʊ��
////		if (ch == 'A')
////			a_count++;
////		if (ch == 'B')
////			b_count++;
////	}
////
////	//��a��b��Ʊ�������жϣ�Ȼ�������Ӧ���
////	if (a_count == b_count)
////		printf("E\n");
////	else if (a_count > b_count)
////		printf("A\n");
////	else
////		printf("B\n");
////	return 0;
////}
//
//
////31�����ɼ�
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int val = 0;
////	//ѭ������ɼ�
////	while (scanf("%d", &val) != EOF) {
////		//if �жϳɼ��Ƿ�����������������
////		if (val >= 90 && val <= 100)
////			printf("Perfect\n");
////	}
////	return 0;
////}
//
////32�������
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	int score = 0;
////	//ѭ������ɼ�
////	while (scanf("%d", &score) != EOF) {
////		//�жϳɼ��Ƿ����60�֣���֮���������
////		if (score >= 60)
////			printf("Pass\n");
////		else
////			printf("Fail\n");
////	}
////	return 0;
////}
//
//
////33�ж���������ż��
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int val = 0;
////	//ѭ����������
////	while (scanf("%d", &val) != EOF) {
////		int ret = val & 0x01;
////		//�ж������֮��Ľ���Ƿ���ż
////		if (ret == 1)
////			printf("Odd\n");
////		else
////			printf("Even\n");
////	}
////	return 0;
////}
//
//
//
////34��߷���
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int m = 0, cnt = 0, val = 0;
////	//ѭ�����뵥���ɼ�
////	while (scanf("%d", &val) != EOF) {
////		//����������ͬʱ��鵱ǰֵ�Ƿ����ֵ
////		cnt++;
////		m = val > m ? val : m;
////		//ÿ����������ֵ��Ȼ������
////		if (cnt % 3 == 0) {
////			printf("%d\n", m);
////			m = 0;
////		}
////	}
////	return 0;
////}
//
////35�ж���Ԫ�����Ǹ���
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//ѭ�������ַ�
////	while (scanf("%c", &ch) != EOF) {
////		//���Ի��з�
////		if (ch == '\n')
////			continue;
////		//ͳһ���ַ�ת���ɴ�д����������ж�
////		if (ch >= 'a' && ch <= 'z')
////			ch -= 32;
////		//�ж��Ƿ�ΪԪ����ĸ
////		if (ch == 'A' || ch == 'E' || ch == 'I'
////			|| ch == 'O' || ch == 'U')
////		{
////			printf("Vowel\n");
////		}
////		else
////		{
////			printf("Consonant\n");
////		}
////	}
////	return 0;
////}
//
////36�ж��ǲ�����ĸ
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//ѭ�������ַ�������ȥ���з�
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//����isalpha�ж��ַ��Ƿ�Ϊ��ĸ����������ֵΪbool����
////		if (isalpha(ch))
////			printf("%c is an alphabet.\n", ch);
////		else
////			printf("%c is not an alphabet.\n", ch);
////	}
////	return 0;
////}
//
////37��ĸ��Сдת��
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//ѭ�������ַ�������getchar��ȥ���з�
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//�ж��Ƿ��д��ĸ������ǵ���ת��Сд�ĺ���tolower����֮��Ȼ
////		if (ch >= 'A' && ch <= 'Z')
////			printf("%c\n", tolower(ch));
////		else
////			printf("%c\n", toupper(ch));
////	}
////	return 0;
////}
//
////
////38�ж���������С��ϵ
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a, b;
////	//ѭ������ab
////	while (scanf("%d %d", &a, &b) != EOF) {
////		//if elseǶ���жϣ�����ʹ����algorithm���õ�max��min����
////		if (a == b)
////			printf("%d=%d\n", a, b);
////		else if (a > b)
////			printf("%d>%d\n", max(a, b), min(a, b));
////		else
////			printf("%d<%d\n", min(a, b), max(a, b));
////	}
////	return 0;
////}
//
//
////39���㵥λ��Ծ����
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int t = 0;
////	//ѭ������t
////	while (scanf("%d", &t) != EOF) {
////		//�ֱ��ж�t�����䷶Χ��Ȼ���Ӧ���������ɡ�
////		if (t == 0)
////			printf("0.5\n");
////		else if (t > 0)
////			printf("1\n");
////		else
////			printf("0\n");
////	}
////	return 0;
////}
//
//
////40�������ж�
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a, b, c;
////	//ѭ�����������߳�
////	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
////		//�ж��Ƿ�ȱ�������
////		if (a == b &&  b == c)
////			printf("Equilateral triangle!\n");
////		else if ((a == b || a == c || b == c) && a + b > c && a + c > b && c + b > a) //�ж��Ƿ����������
////			printf("Isosceles triangle!\n");
////		else if (a + b > c && a + c > b && c + b > a) //�ж��Ƿ�һ��������
////			printf("Ordinary triangle!\n");
////		else //����������
////			printf("Not a triangle!\n");
////	}
////	return 0;
////}
//
////
////41�����������ݳ̶�
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int weight = 0, height = 0;
////	float BMI = 0.f;
////	//ѭ���������غ����
////	while (scanf("%d %d", &weight, &height) != EOF) {
////		//���ݹ�ʽ����BMI
////		BMI = weight / (height / 100.f * height / 100.f);
////		//ʹ��if elseǶ���ж�BMI���ڵ����䣬�������
////		if (BMI < 18.5f)
////			printf("Underweight\n");
////		else if (BMI >= 18.5f && BMI <= 23.9f)
////			printf("Normal\n");
////		else if (BMI > 23.9f && BMI <= 27.9f)
////			printf("Overweight\n");
////		else
////			printf("Obese\n");
////	}
////	return 0;
////}
//
//
////42����һԪ��η���
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	double a, b, c;
////	//ѭ������a b c
////	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
////		//����delta
////		double delta = b*b - 4 * a*c;
////
////		//�ж�aΪ������
////		if (a == 0.0) {
////			printf("Not quadratic equation\n");
////			continue;
////		}
////
////		//deltaС��0����������������
////		if (delta < 0.0) {
////			double x1 = -b / (2. * a);
////			double x2 = sqrt(-delta) / (2. * a);
////			printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x1, x2, x1, x2);
////		}
////		else if (delta == 0.0) { //delta����0���ظ�
////			double x1 = (-b) / (2. * a);
////			printf("x1=x2=%.2lf\n", x1, x1);
////		}
////		else { //����������ʵ����
////			double x1 = (-b - sqrt(delta)) / (2. * a);
////			double x2 = (-b + sqrt(delta)) / (2. * a);
////			printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
////		}
////	}
////	return 0;
////}
//
//43����·�����
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int year = 0, month = 0;
//    //���ú������ƽ���ÿ���µ�����
//    int normal[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//    int gap[] = {31,29,31,30,31,30,31,31,30,31,30,31};
//    //ѭ����������
//    while(scanf("%d %d", &year, &month) != EOF) {
//        //�ж��Ƿ�Ϊ���꣬�ֱ�ͨ�������������в�ѯ�·ݵ�����
//        if(year % 4 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//            printf("%d\n", gap[month-1]);
//        } else {
//            printf("%d\n", normal[month-1]);
//        }
//    }
//    return 0;
//}


//����������ȥ��
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	int a[100] = { 0 };
//	int* p = a;
//
//	scanf("%d", &n);
//
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);
//
//	for (i = 0; i<n; i++)
//	for (j = 1; j<n + 1; j++)
//	if (a[i] == a[i + j])
//		*(p + i + j) = 0;
//	for (i = 0; i<n; i++)
//	if (a[i] != 0)
//		printf("%d ", a[i]);
//	return 0;
//}


//
//����ϲ�
//#include<stdio.h>
//int main()
//{
//	int n, m, t, i, j;
//	int a[100], c[100] = { 0 }, b[100];
//	scanf("%d %d", &n, &m);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//		c[i] = a[i];
//	}
//	for (i = n; i<m + n; i++)
//	{
//		scanf("%d", &b[i]);
//		c[i] = b[i];
//	}
//	for (j = 0; j<n + m; j++)
//	{
//		for (i = 0; i<n + m; i++)
//		if (c[i]>c[i + 1])
//		{
//			t = c[i];
//			c[i] = c[i + 1];
//			c[i + 1] = t;
//		}
//	}
//	for (i = 1; i<n + m + 1; i++)
//		printf("%d ", c[i]);
//	return 0;
//}


//������
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int tmp[n][m];
//	int res[m][n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d ", &tmp[i][j]);
//			res[j][i] = tmp[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", res[i][j]);
//		}
//		printf("\n");
//	}
//}


