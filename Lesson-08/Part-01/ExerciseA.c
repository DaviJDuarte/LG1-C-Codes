#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_CONTACTS 5

struct Contact
{
	char name[90];
	char adress[120];
	char phone_number[20];
	char email[40];
};
struct Contact contacts[MAX_CONTACTS];

int contacts_counter = 0;

void show_all_contacts();
void add_new_contact();
int search_contact();
void edit_contact();
void delete_contact();
void order_contacts();

int main()
{
	int option;

	do
	{
		printf("\n\nContact List:\n");
		printf("\n1 - Show all contacts");
		printf("\n2 - Add new contact");
		printf("\n3 - Search contact");
		printf("\n4 - Edit contact");
		printf("\n5 - Remove Contact");
		printf("\n6 - Exit program");

		printf("\nSelect an option: ");
		scanf("%i", &option);
		

		switch (option)
		{
		case 1:
			show_all_contacts();
			break;
		case 2:
			add_new_contact();			
			break;
		case 3:
			search_contact();
			break;
		case 4:
			edit_contact();
			break;
		case 5:
			delete_contact();
			break;
		case 6:
			break;
		default:
			printf("Invalid Option!");
		}
	} while (option != 6);

	printf("\nClosing contact list. Press any key to exit...\n");
	getch();
	return 0;
}

void show_all_contacts()
{
	if (contacts_counter == 0)
	{
		printf("\nThe contact list is empty.");
		return;
	}

	printf("\nShowing all contacts:\n");

	for (int i = 0; i < contacts_counter; i++)
	{
		printf("Contact %i out of %i", i + 1, contacts_counter);
		printf("\nName: %s", contacts[i].name);
		printf("\nAdress: %s", contacts[i].adress);
		printf("\nPhone Number: %s", contacts[i].phone_number);
		printf("\nEmail: %s\n", contacts[i].email);
	}

	order_contacts();

	return;
}
	
void add_new_contact()
{
	if (contacts_counter == MAX_CONTACTS)
	{
		printf("The contact list is full. Max limit of %i has been reached", MAX_CONTACTS);
		return;
	}

	printf("\nAdd new contact:\n");
	
	printf("Enter the name: ");
	scanf(" %[^\n]", &contacts[contacts_counter].name);

	printf("Enter the adress: ");
	scanf(" %[^\n]", &contacts[contacts_counter].adress);

	printf("Enter the phone number: ");
	scanf(" %[^\n]", &contacts[contacts_counter].phone_number);

	printf("Enter the email: ");
	scanf(" %[^\n]", &contacts[contacts_counter].email);

	contacts_counter++;

	order_contacts();

	printf("\nContact sucessfully added!\n");
	return;
}

int search_contact()
{
	char search_name[90];

	printf("\nSearch:\n");
	printf("Enter the name of the contact: ");
	scanf(" %[^\n]", &search_name);

	for (int i = 0; i < contacts_counter; i++)
	{
		if (strcmp(search_name, contacts[i].name) == 0)
		{
			printf("\nContact found:");
			printf("Contact %i out of %i", i + 1, contacts_counter);
			printf("\nName: %s", contacts[i].name);
			printf("\nAdress: %s", contacts[i].adress);
			printf("\nPhone Number: %s", contacts[i].phone_number);
			printf("\nEmail: %s\n", contacts[i].email);
			return i;
		}
	}

	printf("\nContact not found.");
	return -1;
}

void edit_contact()
{
	int option;
	int i = search_contact();

	if (i == -1)
	{
		return;
	}

	printf("\nEdit");

	printf("\nWhat would you like to change?");
	printf("\n1 - Name");
	printf("\n2 - Adress");
	printf("\n3 - Phone Number");
	printf("\n4 - Email");

	printf("Select an option (1-4): ");
	scanf("%i", &option);

	switch (option)
	{
	case 1:
		printf("Enter the new name: ");
		scanf(" %[^\n]", contacts[i].name);
		order_contacts();
		break;
	case 2:
		printf("Enter the new adress: ");
		scanf(" %[^\n]", contacts[i].adress);
		break;
	case 3:
		printf("Enter the new phone number: ");
		scanf(" %[^\n]", contacts[i].phone_number);
		break;
	case 4:
		printf("Enter the new email: ");
		scanf(" %[^\n]", contacts[i].email);
		break;
	default:
		printf("Invalid Option!");
		break;
	}

	return;
}

void delete_contact()
{
	char delete_name[90];

	if (contacts_counter == 0)
	{
		printf("The contact list is empty.");
		return;
	}

	printf("\nRemove Contact:\n");
	printf("Enter the name of the contact to remove: ");
	scanf(" %[^\n]", delete_name);

	for (int i = 0; i < contacts_counter; i++)
	{
		if (strcmp(delete_name, contacts[i].name) == 0)
		{
			if (i == contacts_counter - 1)
			{
				strcpy(contacts[i].name, "");
				strcpy(contacts[i].adress, "");
				strcpy(contacts[i].phone_number, "");
				strcpy(contacts[i].email, "");
			}
			else
			{
				for (int j = i; j < contacts_counter - 1; j++)
				{
					strcpy(contacts[j].name, contacts[j + 1].name);
					strcpy(contacts[j].adress, contacts[j + 1].adress);
					strcpy(contacts[j].phone_number, contacts[j + 1].phone_number);
					strcpy(contacts[j].email, contacts[j + 1].email);
				}
			}

			contacts_counter--;
			order_contacts();
			printf("\nContact '%s' has been removed from the list.\n", delete_name);
			return;
		}
	}


	printf("\nContact '%s' not found in the list.\n", delete_name);

	return;
}


void order_contacts()
{
	for (int i = 0; i < contacts_counter - 1; i++)
	{
		if (strcmp(contacts[i].name, contacts[i + 1].name) > 0)
		{
			char temp[90];

			strcpy(temp, contacts[i].name);
			strcpy(contacts[i].name, contacts[i + 1].name);
			strcpy(contacts[i + 1].name, temp);
		}
	}

	return;
}