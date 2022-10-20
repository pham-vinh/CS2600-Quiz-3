// Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c
// gcc employeeMain.c employeeTable.c employeeTwo.c

#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void)
{
	// defined in employeeSearchOne.c
	// in employeeOne.c
	// adding new 2 new methods
	PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
	PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
	PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char *phoneToFind);
	PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

	// defined in employeeTable.c
	// Defined somewhere else
	extern Employee EmployeeTable[];
	extern const int EmployeeTableEntries;

	PtrToEmployee matchPtr; // Declaration
	matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

	// Example not found
	if (matchPtr != NULL)
		printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
	else
		printf("Employee ID is NOT found in the record\n");

	// Example found
	matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");

	if (matchPtr != NULL)
		printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
	else
		printf("Employee Tony Bobcat is NOT found in the record\n");

	matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "310-555-1215");

	if (matchPtr != NULL)
		printf("Employee Dorris Perl is in record %d\n", matchPtr - EmployeeTable);
	else
		printf("Employee Dorris Perl is NOT found in the record\n");

	matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.52);

	if (matchPtr != NULL)
		printf("Employee Brian Height is in record %d\n", matchPtr - EmployeeTable);
	else
		printf("Employee Brian Height is NOT found in the record\n");

	return EXIT_SUCCESS;
}
