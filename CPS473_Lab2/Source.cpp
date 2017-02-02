#include <stdio.h>
#include <string.h>

//add 12 bytes to BSS
int password1 = 0;
int password2 = 0;
int password3 = 0;



//add 15 bytes to data
double pi = 3.14;
int three = 3;
int two = 2;
int one = 1;
char ten = 10;

void main()
{
	//BSS --> STACK
	//add uninitialized variables to local array.
	//move 12 bytes from BSS to the stack.
	int myArray[3];

	myArray[0] = password1;
	myArray[1] = password2;
	myArray[2] = password3;






	//HEAP --> DATA
	char a, b, c, d, e, f, g, h, i, j, k, l, m;
	char* secondArray = new char[13];
	//adds to 13 bytes to heap array.
	for (int i = 0; i < 12; i++)
	{
		secondArray[i] = i + 1;
	}

	//copies 13 bytes to data.
	a = secondArray[0];
	b = secondArray[1];
	c = secondArray[2];
	d = secondArray[3];
	e = secondArray[4];
	f = secondArray[5];
	g = secondArray[6];
	h = secondArray[7];
	i = secondArray[8];
	j = secondArray[9];
	k = secondArray[10];
	l = secondArray[11];
	m = secondArray[12];







	//STACK --> HEAP
	//create array in stack.
	char thirdArray[14];
	//fills with 14 bytes.
	for (int i = 0; i < 13; i++)
	{
		thirdArray[i] = i + 1;
	}
	//create array in heap.
	char* fourthArray = new char[14];
	//copy values from stack array to heap array.
	for (int i = 0; i < 13; i++)
	{
		fourthArray[i] = thirdArray[i];
	}






	//DATA --> BSS
	//set initialized variables to 0.
	//move 15 bytes from data to BSS.
	pi = 0;
	three = 0;
	two = 0;
	one = 0;
	ten = 0;






	//TEXT --> DATA
	char password[4];
	//enter 4 bytes through code.
	printf("Enter a password:\n");
	scanf_s("%s", password);

	//store 4 bytes as data.
	char first = password[0];
	char second = password[1];
	char third = password[2];
	char fourth = password[3];

}
