#include <stdio.h>

// A + B 问题
/*
描述
		给出两个整数 aa 和 bb , 求他们的和。

		你不需要从输入流读入数据，只需要根据aplusb的两个参数a和b，计算他们的和并返回就行。

说明
		a和b都是 32位 整数么？				是的
		我可以使用位运算符么？				当然可以

样例
		如果 a=1 并且 b=2，返回3。

挑战
		显然你可以直接 return a + b，但是你是否可以挑战一下不这样做？（不使用+等算数运算符）
			
*/

int aplusb(int aa, int bb)
{
	return aa+bb;
}

/*
	杭电ACM-A+B problem

topic:

*/

/*
	ACM入门之输入输出格式

	A+B for Input-Output Practice (I)

	
*/

/*
	ACM新手之八大输入输出格式

	在ACM题库中, 不管是文件输出(输入), 还是标准输出(输入), 都有着一定的格式, 下面我就以杭电1089-----1096为例子, 简单的介绍一下。
*/

/*
	第一种:		A+B for Input-Output Practice (I) 

	【输入】有多组输入数据, 但没有具体的告诉你有多少组, 只是让你对应每组输入, 应该怎样输出?
	【输出】有多组输出，对应着每组输入，每组输出占一行。

*/
void aADDb1()
{
	int m = 0;
	int n = 0;

	while (EOF != scanf("%d%d", &m, &n)) 
	{
		m += n;

		printf("%d\n", m);
	}
}

/*
		第二种：A+B for Input-Output Practice (II) 

		【输入】先输入一个整数, 告诉我们接下来有多少组数据, 然后在输入每组数据的具体值。
		【输出】有多组输出, 对应着每组输入, 每组输出占一行。

		这也是一种常见的输入形式，简单的代码，我们可以先用scanf函数输入第一个整数来确定有多少行，然后在用for循环一组一组的输入。
*/
void aADDb2()
{
	int n;
	int x;
	int y;
	int i;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d%d", &x, &y);
		x += y;
		printf("%d\n", x);
	}
}

/*
		第三种:		A+B for Input-Output Practice (III)   

		【输入】有多组输入数据，没有具体的告诉你有多少组,但是题目却告诉你遇见什么结束。
		【输出】有多组输出，没对应一组输入都有相应的输出，结束标记不用管！

		【代码】这种类型的题目和第一种差不多，但是有一点值得注意，就是要加上结束条件。

		你也可以将条件写在while循环的内部，条件满足时break即可。
*/
void aADDb3() 
{
	int  numX = 0;
	int  numY = 0;
	
	while (scanf("%d%d", &numX, &numY) && (!(numX==0 && numY==0))) 
	{
		printf("%d\n", numX+numY);
	}

	printf("Out the while loop......\n");
}

/*
	第四种：A+B for Input-Output Practice (IV)

	【输入】输入有多组，并且题目告诉你每组输入遇见什么结束，与第三种不同之处在于，每组输入都有相应的细化。
	【输出】没有什么变化，只需要对应输出即可。

	这类题目的代码是在第三种代码的基础之上，对于每种输入都进行第二种的精确输入。
*/
void aADDb4()
{
	int i = 0;
	int s = 0;
	int m = 0;
	int n = 0;

	while (scanf("%d", &n) != EOF && n != 0)
	{
		s = 0;

		//for (i = 0; i < n; i++)
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &m);

			s += m;
		}

		printf("%d\n", s);
	}
}

/*
	根据上边介绍的八种输入输出，我们可以归纳出如下内容：
	对于输入，如果没有告诉你有多少组，我们常用while。如果告诉你有多少组，我们用for。
	对于输出，输入用while，我们常常判断是否为第一个输出样例，来指定特殊的输出格式。
			  输入用for，我们常常判断是否为最后的输出样例，来指定特殊的输出格式。
	当然输入输出的格式远远不止上边的八种，但它们却是最常见的，特别是前三种是一定要掌握的。
*/