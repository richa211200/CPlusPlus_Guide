// enum (full form: enumeration)

// enum - user defined datatype
// use: to assign names to integral constants, names make program easy to read and maintain
// enumerators - (list of constants seperated by commas)
// declaration/ syntax: 
//      enum days_of_week {Sun, Mon, Tue, Wed, Thu, Fri, Sat}
//          here, enum - keyword
//                day_of_week - enum variable
//                sun,mon,.. sat - enumerators (list of constants seperated by commas)
//                here, sun = state 0, mon = state 1, ...sat = state 6

// https://www.geeksforgeeks.org/enumeration-enum-c/
	
// An example program to demonstrate working
// of enum in C
#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
	enum week day;
	day = Wed;
	printf("%d",day);
	return 0;
} 
