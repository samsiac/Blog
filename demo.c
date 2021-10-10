#include<stdio.h>//预处理指令preprocessor directive
void one_three(void);
void two(void);
/*p2_7
void Smile(void);
p2_5
void br(void);
void ic(void);
p2_4
void jolly(void);
void deny(void);
c_2.3
void butler(void);//ANSI/ISO C函数原型=function declaration；告知编译器；此处v为空的，不是无效；老式编译器无2V
//1v:无返回值（通 常，被调函数会向主调函数返回一个值，但是 bulter()函数没有）；2v:无参数
*/
int main(void)//int 为main()函数的返回类型
{
	/*c_1
	printf("Hello Wold!\n");
	printf("23+55=%d\n", 23+55);	//逗号后面的%表取余
	printf("你好！");	//  .sln文件为项目文件
	//getchar();	可在debug直接打开运行文件===>>生成release文件发送，接收方可直接执行exe
	//x86为32位；C为面向过程的语言，C++为面向对象的语言。《C Primer Plus》
	//创建项目时选用桌面生成，不点空白页，则不弹出黑框终端(windows API/SDK);实际应用多使用Csharp或其他编写：C/S（窗口界面软件）eg.lol、极品飞车、暴雪使用QT（C++）
*/

/*cPrimerPlus_1.1

int dogs;
printf("How many dogs do you have?\n");
scanf_s("%d", &dogs);	//& what means.按值或地址传递参数
printf("So you have %d dog(s)!\n", dogs);

c_1.2
printf("Concrete contains gravel and cement.\n");//混凝土包含沙砾和水泥

c_2.1

int num;//declaration,变量variable。数据类型确定变量在内存中分配的储存空间
num = 1;
printf("I am a simple");//调用一个printf()函数
printf("computer.\n");
printf("My favourite number is %d because it is first.\n",num);//%d占位符十进制

c_2.2

//把2音寻转换成英寸
int feet, fathoms;
fathoms = 2;
feet = 6 * fathoms;//1（音）寻=6英尺=1.8米
printf("There are %d feet in %d fathoms!\n",feet, fathoms);
printf("Yes, I said %d feet!\n",6*fathoms);

c_2.3
two_func.c --一个文件中包含两个函数

printf("I will summon the butler function.\n");//召唤，管家
butler();//调用function call
printf("Yes. Bring me some tea and writeable DVDs.\n");
return 0;//对应int main
}
void butler(void)//函数定义开始;定义即函数本身的源代码。定义位置与执行顺序无关，始终先从main()开始。c惯例将main()置于开头，他提供了程序的基本框架
{
	printf("You rang, sir?\n");//响应
}
c_2.4程序改错

	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n * n2;//四次方语义错误修改
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);//cubed立方语义错误
	//??program state是在程序的执行过程中，某给定点上所有变量值的集合。它是计算机当前状态的一个快照。
c_2.11
	_6.关键字：int char
	_8: 2,5; 5,5; 5,5
	_9: 10,5; 10,15; 150,15
	_7


	int words, lines;
	words = 3020;
	lines = 350;
	printf("There are %d words and %d lines.\n", words, lines);

c_2.12编程练习

p2_1:

	printf("Black Sheep\n");
	printf("Black\nSheep\n");
	printf("Black ");
	printf("Sheep\n");

p2_2:
	printf("Black sheep\nPeking\n");
p2_3:
	int age, days;
	age = 23;
	days = age * 365;
	printf("Your age is %d which means you've experienced %d days.\n", age, days);
	//An age of %d years is %d days.\n
p2_4:
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
void jolly(void){
	printf("For he's a jolly good fellow!\n");//定义时就提前换了行
}
void deny(void){
	printf("Which nobody can deny!\n");
}
p2_5
br();
printf(", ");//单输出符号空格与格式
ic();
printf("\n");
ic();
printf(",\n");
br();
	return 0;
}
void br(void) {
	printf("Brazil, Russia");
}
void ic(void) {
	printf("India, China");
}
p2_6
int toes, t_2, t_3;
toes = 10;
t_2 = toes * 2;
t_3 = toes * toes;
printf("toes = %d, double toes = %d, toes squared = %d\n", toes, t_2, t_3);
	return 0;
}
p2_7
Smile();
Smile();
Smile();
printf("\n");
Smile();
Smile();
printf("\n");
Smile();
	return 0;
}
void Smile(void) {
	printf("Smile!");
}
p2_8*/
printf("starting now:\n");
one_three();
printf("\n");a
two();
printf("\n");
printf("done!\n");
	return 0;
}
void one_three(void) {
	printf("one");
}
void two(void) {
	printf("two\nthree");
}
