/*
demo on pointers
*/

#include <stdio.h>
struct students
{
	int rollno;
	char Name[200];
};

int main()
{
	int qty=100;
	char ch='A';
	float f=10.5;
	double d=101.22;
	int qty1=201;
	int sum=0;
	struct  students s;
	struct students *ptr1;
		
	void *ptr;

	printf("\nAddress of qty = %u and its value=%d",&qty,qty);
	printf("\nAddress of ch = %u and its value=%c",&ch,ch);
	printf("\nAddress of f = %u and its value=%f",&f,f);
	printf("\nAddress of d = %u and its value=%lf",&d,d);
	
	printf("\nAddress of ptr = %u and its value=%u",&ptr,ptr);
	printf("\n\n");
	ptr = &qty;
	

	printf("\nAddress of qty = %u and its value=%d",&qty,qty);
	printf("\nAddress of ptr = %u and its value=%u",&ptr,ptr);

	printf("\nvalue of qty using ptr=%d",*(int*)ptr);
	sum = sum + *(int*)ptr;
	printf("\nSum =%d",sum);

	printf("\n\n");
	ptr = &ch;
	printf("\n\n");
	printf("\nAddress of ch = %u and its value=%c",&ch,ch);
	printf("\nAddress of ptr = %u and its value=%u",&ptr,ptr);
	printf("\nvalue of ch using ptr=%c",*(char *)ptr);

	
	ptr = &f;
	printf("\n\n");
	printf("\nAddress of f = %u and its value=%f",&f,f);
	printf("\nAddress of ptr = %u and its value=%u",&ptr,ptr);
	printf("\nvalue of f using ptr=%f",*(float *)ptr);

	
	ptr = &d;
	printf("\n\n");
	printf("\nAddress of d = %u and its value=%lf",&d,d);
	printf("\nAddress of ptr = %u and its value=%u",&ptr,ptr);
	printf("\nvalue of d using ptr=%lf",*(double *)ptr);
	
	// ptr = &qty1;
	sum = sum + *(double*)ptr;
	printf("\nSum =%d",sum);

	s.rollno = 1001;
	
	ptr = &s;
	ptr1 = ptr;
	printf("\nRoll No : %d",s.rollno);
	printf("\nRollNo using ptr1: %d",ptr1->rollno);
	// sum = sum + *(struct students *)ptr->rollno;	
	printf("\n\n");
	return 0;
}


