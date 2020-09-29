#include <cstdio>						// C STandarD Input Output library

constexpr int maxSize = 1024;			//Define maxSize for buffer
constexpr int repeat = 5;				

int main()
{
	const char* fn = "testFile.txt";	//Define the name of the file as a pointer, since it's external to the compiler we can just point
	const char* text = "Carpe diem. \n";


	// Writing a file
	FILE* fw = fopen(fn, "w");			//Define a variable for writing
	for(int i=0; i<repeat;i++)
	{
		fputs(text, fw);			// What to put? where?
	}
	fclose(fw);


	//Reading a file
	char buffer[maxSize];		//define your buffer
	FILE* fr = fopen(fn, "r");		//Define a variable for reading
	while(fgets(buffer,maxSize,fr))		//	While there's still 
	{
		fputs(buffer,stdout);
	}

	fclose(fr);
	remove(fn);		//removes the file

	return 0;
}