#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_STUDENTS 20
#define	MAX_CHARACTERS 50

typedef struct student
{
	char name[MAX_CHARACTERS];
	float grade;
} student;

student students[MAX_STUDENTS];

int student_count = 0;

void add_student(void);
void order_students(void);
void edit_student(void);
int search_student(char name[MAX_CHARACTERS]);
void show_student(void);
void show_passed(void);
void show_failed(void);

int main()
{
	int option;

	do
	{
		printf("Student Gradebook %i/%i", student_count, MAX_STUDENTS);

		printf("\n\n1 - Add new student");
		printf("\n2 - Edit student");
		printf("\n3 - Search by name");
		printf("\n4 - Show students that passed");
		printf("\n5 - Show students that failed");
		printf("\n6 - Exit program");

		printf("\n\nSelect an Option(1-6): ");
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			add_student();
			break;
		case 2:
			edit_student();
			break;
		case 3:
			show_student();
			break;
		case 4:
			show_passed();
			break;
		case 5:
			show_failed();
			break;
		case 6:
			printf("\nPress any key to exit...");
			break;
		default:
			printf("Invalid Option!");
		}
	} while (option != 6);
	
	getch();
	return 0;
}

void merge(student arr[], int left, int mid, int right) {
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	student leftArr[n1], rightArr[n2];

	for (i = 0; i < n1; i++)
		leftArr[i] = arr[left + i];
	for (j = 0; j < n2; j++)
		rightArr[j] = arr[mid + 1 + j];

	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2) {
		if (strcmp(leftArr[i].name, rightArr[j].name) <= 0) {
			arr[k] = leftArr[i];
			i++;
		}
		else {
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = leftArr[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}

void merge_sort(student arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

void order_students(void) {
	merge_sort(students, 0, student_count - 1);
}

void add_student(void)
{
	printf("\nAdd Student:\n");
	char option;
	float exam1, exam2;

	do
	{
		if (student_count >= MAX_STUDENTS)
		{
			printf("Max limit of %i students has been reached!", MAX_STUDENTS);
			return;
		}

		printf("Enter the student's name: ");
		getchar();
		fgets(students[student_count].name, MAX_CHARACTERS, stdin);
		students[student_count].name[strcspn(students[student_count].name, "\n")] = 0;

		printf("Enter Exam 1 score:");
		scanf("%f", &exam1);

		printf("Enter Exam 2 score:");
		scanf("%f", &exam2);

		students[student_count].grade = (exam1 + exam2) / 2; 

		printf("\n%s's final grade: %.2f", students[student_count].name, students[student_count].grade);

		student_count++;
		order_students();

		printf("\nAdd new student? [y/n]: ");
		scanf(" %c", &option);
	} while (tolower(option) != 'n');

	return;
}

int search_student(char name[MAX_CHARACTERS])
{
	for (int i = 0; i < student_count; i++)
	{
		if (strcmp(name, students[i].name) == 0)
		{
			return i;
		}
	}

	return -1;
}

void edit_student(void)
{
	char name[MAX_CHARACTERS];
	int option;

	printf("\nEdit student:\n");


	printf("Enter the name of the student for editing: ");
	getchar();
	fgets(name, MAX_CHARACTERS, stdin);
	name[strcspn(name, "\n")] = 0;


	int i = search_student(name);

	if (i == -1)
	{
		printf("Student not found!");
		return;
	}

	printf("\n1 - Student: %s", students[i].name);
	printf("\n2 - Grade: %.2f", students[i].grade);

	printf("\nWhat would you like to edit? (1-2): ");
	scanf("%i", &option);

	switch (option)
	{
	case 1: 
	{
		printf("Enter new name: ");
		getchar();
		fgets(students[i].name, MAX_CHARACTERS, stdin);
		students[i].name[strcspn(students[i].name, "\n")] = 0;


		printf("Edit succesful!\n");
		break;
	}
	case 2: 
	{
		float exam1, exam2;

		printf("Enter Exam 1 score:");
		scanf("%f", &exam1);

		printf("Enter Exam 2 score:");
		scanf("%f", &exam2);

		students[i].grade = (exam1 + exam2) / 2;

		printf("\n%s's new final grade: %.2f\n", students[i].name, students[i].grade);
		printf("Edit succesful!\n");
		break;
	}
	default:
		printf("Invalid Option!\n");
		break;
	}

	return;
}

void show_student(void)
{
	printf("\nShow student: ");

	char name[MAX_CHARACTERS];

	printf("\nEnter student's name: ");
	getchar();
	fgets(name, MAX_CHARACTERS, stdin);
	name[strcspn(name, "\n")] = 0;

	int i = search_student(name);

	if (i == -1)
	{
		printf("Student not found!\n");
		return;
	}

	printf("\nStudent: %s", students[i].name);
	printf("\nGrade: %.2f\n", students[i].grade);

	return;
}

void show_passed(void)
{
	printf("\nShow students that passed: ");

	bool found = false;

	for (int i = 0; i < student_count; i++)
	{
		if (students[i].grade > 7.0)
		{
			printf("\nStudent: %s", students[i].name);
			printf("\nGrade: %.2f\n", students[i].grade);

			found = true;
		}
	}

	if (!found)
	{
		printf("\nNo students passed.\n");
	}
}

void show_failed(void)
{
	printf("\nShow students that failed:\n");

	bool found = false;

	for (int i = 0; i < student_count; i++)
	{
		if (students[i].grade < 7.0)
		{
			printf("\nStudent: %s", students[i].name);
			printf("\nGrade: %.2f\n", students[i].grade);

			found = true;
		}
	}

	if (!found)
	{
		printf("\nNo students failed.\n");
	}
}