#define _CRT_SECURE_NO_WARNINGS   1

////1.缩短二进制
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int val = 1234;
////	/*
////	printf可以使用使用格式控制串“%o”、“%X”分别输出
////	八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
////	*/
////	printf("%#o %#X\n", val, val);
////	return 0;
////}
//
//
////2.十六进制转十进制
////#include<stdio.h>
////int main()
////{
////	int a = 0XABCDEF;
////	printf("%15d", a);
////	return 0;
////}
//
////3.printf的返回值
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
////4.成绩的输入输出
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
////5.学生基本信息的输入输出
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
//////6.字符金字塔
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
////7.ASSIC码
//
////#include <stdio.h>
////int main() {
////	char strings[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 ,'\0'};
////	printf("%s\n", strings);
////	return 0;
////}
//
//
////8.生日的输入输出
////#include <stdio.h>
////
////int main() {
////
////	int year = 0, month = 0, day = 0;
////	scanf("%4d%2d%2d", &year, &month, &day);
////	//使用%0可以填充前导0
////	printf("year=%d\n", year);
////	printf("month=%02d\n", month);
////	printf("date=%02d\n", day);
////	return 0;
////}
//
//
////9，交换两个数
////#include <stdio.h>
////
////
////int main() {
////
////	int a = 0, b = 0, tmp;
////	scanf("a=%d,b=%d", &a, &b);
////	//使用中间变量tmp来交换两个数字
////	tmp = a;
////	a = b;
////	b = tmp;
////	printf("a=%d,b=%d\n", a, b);
////	return 0;
////}
//
//
////10，转ASSIC
////#include <stdio.h>
////
////int main() {
////	char ch = 0;
////	scanf("%c", &ch);
////	//%d即可控制按整数输出
////	printf("%d\n", ch);
////	return 0;
////}
//
////
////11.kiki算术
////#include <stdio.h>
////int main() {
////	int a = 0, b = 0;
////	scanf("%d %d", &a, &b);
////	printf("%d\n", (a + b) % 100);
////	return 0;
////}
//
///*12.年龄多少秒
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
////13.时间转换
/////* 使用的是C语言 */
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
////14.成绩
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
////15计算体重指数
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
////16三角形的周长和面积
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a, b, c;
////	//读入三角形的三条边长
////	scanf("%d %d %d", &a, &b, &c);
////	//计算海伦公式的p
////	float p = (a + b + c) / 2.f;
////	//利用海伦公式输出面积
////	printf("circumference=%.2f area=%.2f\n", (a + b + c)*1.f, sqrt(p*(p - a)*(p - b)*(p - c)));
////	return 0;
////}
////
////17，球的体积
////#include <bits/stdc++.h>
////using namespace std;
////#define PI 3.1415926
//////或者 const float PI = 3.1415926;
////
////int main() {
////	float radius = 0.f;
////	scanf("%f", &radius);
////	printf("%.3f\n", 4.f*PI*radius*radius*radius / 3.f);
////	//三次方可以利用pow函数进行对应指数计算，效果同上。
////	//printf("%.3f\n", 4.f*PI*pow(radius,3)/3.f);
////	return 0;
////}
//
//
////18.大小写转换
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//循环多次读入，利用gethar消去读入的换行符
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//ch+32即为小写字母
////		printf("%c\n", ch + 32);
////	}
////}
////
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//该部分如上述所示
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//调用内置的tolower函数进行转换
////		printf("%c\n", tolower(ch));
////	}
////}
//
//
////19,2的n次方
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a = 0;
////	while (scanf("%d", &a) != EOF) {
////		//高效的实现可以使用左移，移动a位即为2的a次方
////		printf("%d\n", 1 << a);
////	}
////	return 0;
////}
//
////20.kiki喝酸奶
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	int n = 0, h = 0, m = 0;
////	//循环读入n h m
////	while (scanf("%d %d %d", &n, &h, &m) != EOF) {
////		//判断是否能够整除，如果可以输出 n - （m / h），反之减1
////		if (m % h == 0)
////			printf("%d\n", n - (m / h));
////		else
////			printf("%d\n", n - (m / h) - 1);
////	}
////	return 0;
////}
//
////21，发布信息
////#include<iostream>
////using namespace std;
////int main()
////{
////	cout << "I lost my cellphone!" << endl;
////	return 0;
////}
//
////22输出学生信息
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	printf("Name    Age    Gender\n");
////	printf("---------------------\n");
////	/*或者
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
////23.计算平均成绩
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
////24进制A+B
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a = 0, b = 0;
////	//分别以十六进制和八进制读入a b
////	scanf("%x %o", &a, &b);
////	//直接输出a+b即可
////	printf("%d\n", a + b);
////	return 0;
////}
//
//
////25判断代码
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	char ch = 0;
////	while (~scanf("%c", &ch)) {
////		//读入回车符
////		getchar();
////		//或者使用isalpha函数进行判断
////		//if(isalpha(ch))
////		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
////			printf("YES\n");
////		else
////			printf("NO\n");
////	}
////	return 0;
////}
//
////26健康评估
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	double weight = 0.0, height = 0.0;
////	//orz，又是bmi。。
////	//输入数据之后带入公式得出bmi的值
////	scanf("%lf %lf", &weight, &height);
////	double BMI = weight / (height * height);
////	//判断bmi的值是否属于正常区间
////	if (BMI >= 18.5 && BMI <= 23.9)
////		printf("Normal\n");
////	else
////		printf("Abnormal\n");
////	return 0;
////}
//
////
////27网购
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	double price = 0.0;
////	int month = 0, day = 0, dz = 0;
////	//读入输入的数据
////	scanf("%lf %d %d %d", &price, &month, &day, &dz);
////	//是否有折扣
////	bool discount = dz == 1 ? true : false;
////
////	if (month == 11 && day == 11) {
////		price *= 0.7;
////		//判断是否可以用优惠券，双十二同理，同时要判断价格不能低于50
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
////		//没有折扣，正常输出
////		printf("%.2lf\n", price);
////	}
////	return 0;
////}
//
////28变种水仙花数
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	//遍历所有的五位数，从10000开始
////	for (int i = 10000; i <= 99999; i++) {
////		//设置当前和，除数
////		int sum = 0, mod = 10000, cur = i;
////		//循环直到mod/10为0
////		while (mod / 10) {
////			//根据公式计算当前的除数和余数，进行累计求和
////			sum += (cur % mod) * (cur / mod);
////			//更新mod
////			mod /= 10;
////		}
////		//判断是否满足水仙花数
////		if (i == sum)
////			printf("%d ", i);
////	}
////	return 0;
////}
//
////
////29争夺前五名
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int n = 0;
////	scanf("%d", &n);
////
////	//申请存放数组并输入初始化
////	int a[40] = { 0 };
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &a[i]);
////	}
////
////	int m = 0, index = 0;
////	//外循环进行五次筛选，每次筛选出当前最大的数值
////	for (int i = 0; i < 5; ++i) {
////		//内循环遍历数组中的数值，如果碰到比当前数更大的值则保存起来
////		for (int j = 0; j < n; ++j) {
////			if (a[j] > m) {
////				m = a[j];
////				index = j;
////			}
////		}
////		//对最大数置零，防止多次输出，然后输出当前最大值
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
////	//申请存放数组并输入初始化
////	int a[40] = { 0 };
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &a[i]);
////	}
////	//使用算法库内置的sort函数进行排序，greater<int>是STL内置的比较函数
////	sort(a, a + n, greater<int>());
////	//输出前五大的数值
////	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
////	return 0;
////}
//
////30竞选社长
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a_count = 0, b_count = 0;
////	char ch = 0;
////	//循环读取投票
////	while (scanf("%c", &ch) != EOF) {
////		//当前字符为0则退出
////		if (ch == '0')
////			break;
////		//统计a的票数，同理也要统计b的票数
////		if (ch == 'A')
////			a_count++;
////		if (ch == 'B')
////			b_count++;
////	}
////
////	//对a，b的票数进行判断，然后输出对应结果
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
////31完美成绩
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int val = 0;
////	//循环读入成绩
////	while (scanf("%d", &val) != EOF) {
////		//if 判断成绩是否在完美分数的区间
////		if (val >= 90 && val <= 100)
////			printf("Perfect\n");
////	}
////	return 0;
////}
//
////32及格分数
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////
////	int score = 0;
////	//循环读入成绩
////	while (scanf("%d", &score) != EOF) {
////		//判断成绩是否大于60分，反之输出不及格
////		if (score >= 60)
////			printf("Pass\n");
////		else
////			printf("Fail\n");
////	}
////	return 0;
////}
//
//
////33判断整数奇数偶数
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int val = 0;
////	//循环读入数据
////	while (scanf("%d", &val) != EOF) {
////		int ret = val & 0x01;
////		//判断与操作之后的结果是否奇偶
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
////34最高分数
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int m = 0, cnt = 0, val = 0;
////	//循环读入单个成绩
////	while (scanf("%d", &val) != EOF) {
////		//自增计数，同时检查当前值是否最大值
////		cnt++;
////		m = val > m ? val : m;
////		//每三个输出最大值，然后置零
////		if (cnt % 3 == 0) {
////			printf("%d\n", m);
////			m = 0;
////		}
////	}
////	return 0;
////}
//
////35判断是元音还是辅音
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//循环读入字符
////	while (scanf("%c", &ch) != EOF) {
////		//忽略换行符
////		if (ch == '\n')
////			continue;
////		//统一将字符转换成大写，方便后续判断
////		if (ch >= 'a' && ch <= 'z')
////			ch -= 32;
////		//判断是否为元音字母
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
////36判断是不是字母
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//循环读入字符串，消去换行符
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//调用isalpha判断字符是否为字母，函数返回值为bool类型
////		if (isalpha(ch))
////			printf("%c is an alphabet.\n", ch);
////		else
////			printf("%c is not an alphabet.\n", ch);
////	}
////	return 0;
////}
//
////37字母大小写转换
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	char ch = 0;
////	//循环读入字符串，用getchar消去换行符
////	while (scanf("%c", &ch) != EOF) {
////		getchar();
////		//判断是否大写字母，如果是调用转换小写的函数tolower，反之亦然
////		if (ch >= 'A' && ch <= 'Z')
////			printf("%c\n", tolower(ch));
////		else
////			printf("%c\n", toupper(ch));
////	}
////	return 0;
////}
//
////
////38判断两个数大小关系
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a, b;
////	//循环读入ab
////	while (scanf("%d %d", &a, &b) != EOF) {
////		//if else嵌套判断，这里使用了algorithm内置的max和min函数
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
////39计算单位阶跃函数
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int t = 0;
////	//循环输入t
////	while (scanf("%d", &t) != EOF) {
////		//分别判断t的区间范围，然后对应输出结果即可。
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
////40三角形判断
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int a, b, c;
////	//循环读入三条边长
////	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
////		//判断是否等边三角形
////		if (a == b &&  b == c)
////			printf("Equilateral triangle!\n");
////		else if ((a == b || a == c || b == c) && a + b > c && a + c > b && c + b > a) //判断是否等腰三角形
////			printf("Isosceles triangle!\n");
////		else if (a + b > c && a + c > b && c + b > a) //判断是否一般三角形
////			printf("Ordinary triangle!\n");
////		else //不是三角形
////			printf("Not a triangle!\n");
////	}
////	return 0;
////}
//
////
////41衡量人体胖瘦程度
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	int weight = 0, height = 0;
////	float BMI = 0.f;
////	//循环读入体重和身高
////	while (scanf("%d %d", &weight, &height) != EOF) {
////		//根据公式计算BMI
////		BMI = weight / (height / 100.f * height / 100.f);
////		//使用if else嵌套判断BMI所在的区间，输出即可
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
////42计算一元额次方程
////#include <bits/stdc++.h>
////using namespace std;
////
////int main() {
////	double a, b, c;
////	//循环读入a b c
////	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
////		//计算delta
////		double delta = b*b - 4 * a*c;
////
////		//判断a为零的情况
////		if (a == 0.0) {
////			printf("Not quadratic equation\n");
////			continue;
////		}
////
////		//delta小于0，则有两个虚数根
////		if (delta < 0.0) {
////			double x1 = -b / (2. * a);
////			double x2 = sqrt(-delta) / (2. * a);
////			printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x1, x2, x1, x2);
////		}
////		else if (delta == 0.0) { //delta等于0有重根
////			double x1 = (-b) / (2. * a);
////			printf("x1=x2=%.2lf\n", x1, x1);
////		}
////		else { //否则有两个实数根
////			double x1 = (-b - sqrt(delta)) / (2. * a);
////			double x2 = (-b + sqrt(delta)) / (2. * a);
////			printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
////		}
////	}
////	return 0;
////}
//
//43获得月份天数
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int year = 0, month = 0;
//    //设置好闰年和平年的每个月的天数
//    int normal[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//    int gap[] = {31,29,31,30,31,30,31,31,30,31,30,31};
//    //循环读入年月
//    while(scanf("%d %d", &year, &month) != EOF) {
//        //判断是否为闰年，分别通过上述的数组中查询月份的天数
//        if(year % 4 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//            printf("%d\n", gap[month-1]);
//        } else {
//            printf("%d\n", normal[month-1]);
//        }
//    }
//    return 0;
//}


//序列中整数去重
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
//有序合并
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


//矩阵倒置
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


