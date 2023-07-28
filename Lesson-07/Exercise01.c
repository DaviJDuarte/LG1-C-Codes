#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 20

struct Contact
{
	char name[50];
	char adress[120];
	int age;
	char phone_number[20];
};

void add_contact();
void search_contact();
void order_contacts();
void edit_contact();

struct Contact contacts[MAX_CONTACTS];
int contact_count = 0;

int main()
{
	int option;

	do
	{
		printf("\nContact List: ");
		printf("\n1. Add new contact");
		printf("\n2. Search contact by name");
		printf("\n3. Order alphabetically");
		printf("\n4. Edit contact");
		printf("\n5. Exit");

		printf("\n\nEnter option (1-5): ");
		scanf("%i", &option);

		switch (option)
		{
		case 1: 
			add_contact();
			break;
		case 2:
			search_contact();
			break;
		case 3:
			order_contacts();
			break;
		case 4:
			edit_contact();
			break;
		case 5:
			printf("\nClosing Contacts...\n");
			break;
		default:
			printf("Invalid Option!");
		}

	} while (option != 5);

	return 0;	
}


void add_contact()
{
	if (contact_count >= MAX_CONTACTS)
	{
		printf("\nContact List is full.");
		return;
	}

	printf("\nAdd new contact:");

	printf("\nEnter the name: ");
	scanf(" %[^\n]", &contacts[contact_count].name);

	printf("\nEnter the adress: ");
	scanf(" %[^\n]", &contacts[contact_count].adress);

	printf("\nEnter the age: ");
	scanf("%i", &contacts[contact_count].age);

	printf("\nEnter the phone number: ");
	scanf("%s", &contacts[contact_count].phone_number);

	contact_count++;
}

void search_contact()
{
	char name[50];
	printf("\nSearch contact: ");

	printf("\nEnter the name of the contact: ");
	scanf(" %[^\n]", &name);

	for (int i = 0; i < contact_count; i++)
	{
		if (strcmp(contacts[i].name, name) == 0)
		{
			printf("\nContact Found:");
			printf("\nName: %s", contacts[i].name);
			printf("\nAdress: %s", contacts[i].adress);
			printf("\nAge: %i", contacts[i].age);
			printf("\nPhone Number: %s\n", contacts[i].phone_number);
			return;
		}
	}

	printf("\nContact not found.");
}

void order_contacts()
{
	for (int i = 0; i < contact_count - 1; i++) 
	{
		for (int j = 0; j < contact_count - i - 1; j++) 
		{
			if (strcmp(contacts[j].name, contacts[j + 1].name) > 0) 
			{
				struct Contact temp = contacts[j];
				contacts[j] = contacts[j + 1];
				contacts[j + 1] = temp;
			}
		}
	}

	printf("Contacts have been ordered: ");
	for (int i = 0; i < contact_count; i++)
	{
		printf("\nContact %i: %s", i + 1, contacts[i].name);
	}
	printf("\n");
	return;
}

void edit_contact()
{
	char name[50];
	int option;

	printf("\nEdit Contact:");
	printf("\nEnter the name of the contact you would like to edit: ");
	scanf(" %[^\n]", &name);

	for (int i = 0; i < contact_count; i++)
	{
		if (strcmp(contacts[i].name, name) == 0)
		{
			printf("\nContact Found:");
			printf("\nName: %s", contacts[i].name);
			printf("\nAdress: %s", contacts[i].adress);
			printf("\nAge: %i", contacts[i].age);
			printf("\nPhone Number: %s", contacts[i].phone_number);

			printf("\n1. Name");
			printf("\n2. Adress");
			printf("\n3. Age");
			printf("\n4. Phone Number");
			printf("\n\nWhat info would you like to edit?");
			scanf("%i", &option);

			switch (option)
			{
			case 1:
				printf("\nEnter the new name: ");
				scanf(" %[^\n]", &contacts[i].name);
				break;
			case 2:
				printf("\nEnter the new adress: ");
				scanf(" %[^\n]", &contacts[i].adress);
				break;
			case 3:
				printf("\nEnter the new age: ");
				scanf("%i", &contacts[i].age);
				break;
			case 4:
				printf("\nEnter the new phone number: ");
				scanf("%s", &contacts[i].phone_number);
				break;
			default:
				printf("\nInvalid Option.");
			}
			return;
		}
	}

	printf("\nContact not found");
	return;
}