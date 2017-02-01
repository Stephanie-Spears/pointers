#include <iostream>
#include <iomanip>
using namespace std;

void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);

int main()
{
	int ** table;
	int rows;
	int columns;

	cout << "enter the number of rows and columns: ";
	cin >> rows >> columns;
	cout << endl;

	//create the rows of table
	table = new int*[rows];
	//create the columns of table
	for (int row = 0; row < rows; row++)
	{
		table[row] = new int[columns];
	}
	//insert elements into table
	fill(table, rows, columns);
	cout << "table: " << endl;
	//output the elemnets of table
	print(table, rows, columns);


	//should print column of 0s 9 times, 1s 8x...down to 8 one time. triangle.
	//write code to allocate memory for the table, populate it with int, print the table, and deallocate memory for table.

	return 0;
}


void fill(int **p, int rowSize, int columnSize)
{
	for (int row = 0; row < rowSize; row++)
	{
		cout << "enter " << columnSize << " numbers for row " << "number " << row << ": ";
		for (int col = 0; col < columnSize; col++)
		{
			cin >> p[row][col];
			cout << endl;
		}
	}

}

void print(int **p, int rowSize, int columnSize)
{
	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < columnSize; col++)
			cout << setw(2) << p[row][col];
		cout << endl;
	}

}
//pointer variable  int * p; int num;	p = &num; sets teh value of p to the address of num. & is the address of  operator.
//*p = 25; 	the * is the 'dereferencing operator'. 	sets the value of the memory location indicated by the value of p to 25. 
//you can use the memory access operator -> to access the component of an object pointed to by a pointer.
//the only nuymber that can be directly assigned to a pointer variable is 0. otheriwse it needs to be null or the address of a variable os the same type
//you can only use aritmatic on pointers for -- or ++, addition/subtraction of one pointer var to/from another pointer var
//pointer math is DFIFFERENT, when an int is added to a pointer, the value of the pointer is the integer times the size of the object to which the pointer is pointing.
//similarly, when an int is subtracted from a pointer, the value subtracted from the value of the pointer is the int times the size of the object to which it is pointing.
//you can use relational operatoers to compare pointers. you can also assign the value of one pointer to another pointer.
//a variable created during porgram execution is called a dynamic variable.
//the operator 'new' is used to create a dynamic variable. 
//the operator 'delete' is used to deallocate the memory occupied by a dynamic variable. 
//new has two forms: one to create single dynamic variable, and one to create an array of dynamic variables
//if p is a pointer of type int..
//p = new int; 		allocates storage of type int somewhere in memory and stores the address of the allocated storage in p.
//the operator 'delete' has two forms--one to deallocate the memory occupied by a single dynamic var, and another to deallocate the memory of an array of dynamic var.
//delete p; 		deallocates memory pointed to by p.
//to create a dynamic array:
//p = new int[10]; 		creates an array of 10 componenets of type int. the base addresss of the array is stored in p. we call p a dynamic array. 

//array notation can access componenets of a dynamic array. so p[0] refers to the first array component. 
//NOTE: p[i] refers to p at [i+1]
//for dynamic array 'p':
//delete [] p; 		deallocates teh memory pccupied by p--that is, the components of p.

//DYNAMIC MULTIDIMENSIONAL ARRAYS
//int **board; 		the variable board is a pointer to a pointer. 
//in a shallow copy, two or more pointeers of the same type point to the same memory space--that is, they point to the same data. 
//in a deep copy, two or more pointers of the same type have their own copies of the data. 
//if a class has a destructor, the descructor automatically executes whenebever a class goes out of scope. 
//if a class has pointer member variables, the built in assignemtn operators provide a shallow copy of the data. 
//a copy constructor executes when an object is declared and initalized by using the value of another object AND when an object is passed by value as a paramater.