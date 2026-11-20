//demonstrate the difference between structure and union
#include<stdio.h>
#include<string.h>
struct struct_ex
{
    char name[30];
    int integer;
    float decimal;
};
union union_ex
{
    char name[30];
    int integer;
    float decimal;
};
int main()
{
    struct struct_ex s = {"structure", 1, 1.00};
    union union_ex u;
    strcpy(u.name, "union");
    //u.integer = 1; 
    // You can assign a different member of the union, but not both   
    printf("\n Demonstration of difference between structure and union");
    printf("\n Structure:\n name=%s \t integer=%d \t decimal=%f", s.name, s.integer, s.decimal);
    printf("\n Union:\n name=%s \t integer=%d \t decimal=%f", u.name, u.integer, u.decimal);
    printf("\n Acessing all structure and union members at a time:");
    s.integer=100;
    s.decimal=10.999;
    strcpy(s.name,"New structure");

    u.integer=200;
    u.decimal=20.888;
    strcpy(u.name,"New union");
    printf("\n Structure:\n name=%s \t integer=%d \t decimal=%f", s.name, s.integer, s.decimal);
    printf("\n Union:\n name=%s \t integer=%d \t decimal=%f", u.name, u.integer, u.decimal);
    return 0;
}
/*
OUTPUT:
Demonstration of difference between structure and union
Structure:
name=structure      integer=1           decimal=1.000000   
Union:
name=union          integer=1869180533  decimal=72243541645409505970581667840.000000
Acessing all structure and union members at a time:
Structure:
name=New structure  integer=100         decimal=10.999000
Union:
name=New union      integer=544695630   decimal=0.000000
*/