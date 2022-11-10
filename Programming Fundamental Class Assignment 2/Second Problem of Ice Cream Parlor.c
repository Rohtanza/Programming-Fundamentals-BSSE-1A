#include <stdio.h>
#include <stdlib.h>
// All the Below #define is to define the values of the items as constant.
#define Chocolate_Cone 200
#define Vanilla_Cone 250
#define Strawberry_Cone 200
#define Orea_Cone 250
#define Chocolate_Small_Cup 200
#define Vanilla_Small_Cup 250
#define Strawberry_Small_Cup 200
#define Orea_Small_Cup 250
#define Chocolate_Medium_Cup 250
#define Vanilla_Medium_Cup 200
#define Strawberry_Medium_Cup 250
#define Orea_Medium_Cup 300
#define Chocolate_Large_Cup 300
#define Vanilla_Large_Cup 350
#define Strawberry_Large_Cup 300
#define Orea_Large_Cup 400
void Suggestion(int Budget);
// The above Function Suggest user items according to his budget.
void Budget_200(int Budget);
// This Function show user items to according to his budget of  200
void Budget_250300(int Budget);
// This Function show user items according to his budget of  250 to 300
void Budget_300350(int Budget);
// This Function show user items according to his budget of  300 to 350
void Budget_350400(int Budget);
// This Function show user items to according to his budget of  350 to 400
void Budget400(int Budget);
// This Function show user items to according to his budget of  400
void Menu(void);
// This Function shows the menu to the user.
void Lines(void);
// Just a Function to Make the program look more readable.
int CorCC(int Budget);
// This Function Selects Between Cup and Cone.
int Bill(int Order);
// Proceeds the Bill
int flavour(int Budget, int CorC);
// This Function Selects between Flavours
int Cup_Sizes(int Budget, int flavour);
// This Function tells the user to Select the Function.
int Cone(int Budget, int flavour);
// Determine which cone the user select
int Budget;
// A global Variable because all the functions use it.
int main()
{
    int Choice;
    Lines();
    // Showing a Greeting Message.
    printf("\nHi There, Welcome to the Ice Cream Parlor.\n\nKindly Enter your Budget:");
    scanf("%d", &Budget);
    if (Budget == -1)
    {
        // invalid Entry checker
        printf("-1");
        exit(0);
    }

    else
    {
        if (Budget < 200)
        {
            // Checking if budget is less than Budget.
            printf("\nSorry our least expensive ice cream costs \"200\"\nYou'r just \"%d\" buck short.\n", 200 - Budget);
            Lines();
            printf("\n");
            return 0;
        }
    }
    // calling the function to Show Suggestion.
    Suggestion(Budget);
    // calling the function to start the order.
    CorCC(Budget);
    return 0;
}
int CorCC(int Budget)
{
    int CorC;
    printf("\n\nEnter the \"1\" for Cone and \"2\" for Cup:");
    scanf("%d", &CorC);
    if (CorC == -1)
    {
        // invalid Entry checker
        printf("-1");
        exit(0);
    }
    switch (CorC)
    {
        // Giving the user an option to select either cup or cone to order
    case 1:
        flavour(Budget, CorC);
        break;
    case 2:
        flavour(Budget, CorC);
        break;
    case -1:
        // invalid Entry checker
        printf("-1");
        break;

    default:
        break;
    }
}
int flavour(int Budget, int CorC)
{
    Lines();
    int flavour;
    printf("\nEnter the Flavour you like :):\n*1 for Clocoalte\n*2 for Vanilla\n*3 for Strawbeery\n*4 for Orea\n=>");
    scanf("%d", &flavour);
    if (flavour == -1)
    {
        // invalid Entry checker
        printf("-1");
        exit(0);
    }
    switch (flavour)
    {
        // Giving users an option to select flavor to order.
    case 1:
        CorC == 1 ? Cone(Budget, flavour) : Cup_Sizes(Budget, flavour);
        break;
    case 2:
        CorC == 1 ? Cone(Budget, flavour) : Cup_Sizes(Budget, flavour);
        break;
    case 3:
        CorC == 1 ? Cone(Budget, flavour) : Cup_Sizes(Budget, flavour);
        break;
    case 4:
        CorC == 1 ? Cone(Budget, flavour) : Cup_Sizes(Budget, flavour);
        break;
    case -1:
        CorC == 1 ? Cone(Budget, flavour) : Cup_Sizes(Budget, flavour);
        break;
    default:
        printf("\nAt least read it carefully don't enter useless entries try again.\nthis time read everything.\n");
        // Remaining User to read the program carefully,
        // Calling the function again.
        CorCC(Budget);
        break;
    }
}
int Cup_Sizes(int Budget, int flavour)
{
    Lines();
    int Size;
    printf("\nEnter the Size you would like:\n*1 for Small\n*2 for Mediam\n*3 for Larger\n=>");
    scanf("%d", &Size);
    if (Size == -1)
    {
        // invalid Entry checker
        printf("-1");
        exit(0);
    }
    switch (Size)
    {
        // Giving the user an option to select the size to order
    case 1:
        if (flavour == 1)
        {
            printf("You've chosen a Chocolate Small Ice Cream Cup.\n");
            if (Budget >= Chocolate_Small_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup user entered.
                Bill(Chocolate_Small_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 2)
        {
            printf("You've chosen a Vanilla Small C Ice Creamup.\n");
            if (Budget >= Vanilla_Small_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup user entered.
                Bill(Vanilla_Small_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 3)
        {
            printf("You've chosen a Strawberry Small Ice Cream Cup.\n");
            if (Budget >= Strawberry_Small_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup the user entered.
                Bill(Strawberry_Small_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 4)
        {
            printf("You've chosen a Orea Small Cup Ice Cream.\n");
            if (Budget >= Orea_Small_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup user entered.
                Bill(Orea_Small_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }

        break;
    case 2:
        if (flavour == 1)
        {
            printf("You've chosen one Chocolate Medium Ice Cream Cup.\n");
            if (Budget >= Chocolate_Medium_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup user entered.
                Bill(Chocolate_Medium_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 2)
        {
            printf("You've chosen one Vanilla Medium Ice Cream Cup.\n");
            if (Budget >= Vanilla_Medium_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup the user entered.
                Bill(Vanilla_Medium_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 3)
        {
            printf("You've chosen one Strawberry Medium Ice Cream Cup.\n");
            if (Budget >= Strawberry_Medium_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup user entered.
                Bill(Strawberry_Medium_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 4)
        {
            printf("You've chosen one Orea Medium Ice Cream Cup.\n");
            if (Budget >= Orea_Medium_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup the user entered.
                Bill(Orea_Medium_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        break;
    case 3:
        if (flavour == 1)
        {
            printf("You've chosen one Chocolate Ice Cream Large Cup.\n");
            if (Budget >= Chocolate_Large_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup the user entered.
                Bill(Chocolate_Large_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 2)
        {
            printf("You've chosen one Vanilla Large Ice Creamrge Cup.\n");
            if (Budget >= Vanilla_Large_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup the user entered.
                Bill(Vanilla_Large_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 3)
        {
            printf("You've chosen one Strawberry Ice Cream Large Cup.\n");
            if (Budget >= Strawberry_Large_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup the user entered.
                Bill(Strawberry_Large_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        if (flavour == 4)
        {
            printf("You've chosen one Orea Large Ice Cream Cup.\n");
            if (Budget >= Orea_Large_Cup)
            {
                // This Switch determines the flow of the program according to the size of the cup user entered.
                Bill(Orea_Large_Cup);
            }
            else
            {
                // If the player selects something more the player's budget then tell him to select again
                printf("\nKindly Select Something in your Budget.");
                CorCC(Budget);
            }
        }
        break;
    default:
        // Checking the if the entry is valid or not.
        printf("\nTry again with a valid entry.\n");
        // If the entry is not valid then call function again.
        Cup_Sizes(Budget, flavour);
        break;
    }
}
int Cone(int Budget, int flavour)
{
    Lines();
    if (flavour == 1)
    {
        // This Switch determines the flow of the program according to the flavor of the user entered.
        printf("\nYou've chosen one Chocolate Ice Cream Cone.\n");
        if (Budget >= Chocolate_Cone)
        {
            Bill(Chocolate_Cone);
        }
        else
        {
            // If the player selects something more the player's budget then tell him to select again
            printf("\nKindly Select Something in your Budget.");
            CorCC(Budget);
        }
    }
    if (flavour == 2)
    {
        // This Switch determines the flow of the program according to the flavor of the user entered.
        printf("\nYou've chosen one Vanilla Ice Cream Cone:\n");
        if (Budget >= Vanilla_Cone)
        {
            Bill(Vanilla_Cone);
        }
        else
        {
            // If the player selects something more the player's budget then tell him to select again
            printf("\nKindly Select Something in your Budget.");
            CorCC(Budget);
        }
    }
    if (flavour == 3)
    {
        // This Switch determines the flow of the program according to the flavor of the user entered.
        printf("\nYou've chosen one Strawberry Ice Cream Cone.\n");
        if (Budget >= Strawberry_Cone)
        {
            Bill(Strawberry_Cone);
        }
        else
        {
            // If the player selects something more the player's budget then tell him to select again
            printf("\nKindly Select Something in your Budget.");
            CorCC(Budget);
        }
    }
    if (flavour == 4)
    {
        // This Switch determines the flow of the program according to the flavor of the user entered.
        printf("\nYou've chosen one Orea Ice Cream Cone.\n");
        if (Budget >= Orea_Cone)
        {
            Bill(Orea_Cone);
        }
        else
        {
            // If the player selects something more the player's budget then tell him to select again
            printf("\nKindly Select Something in your Budget.");
            CorCC(Budget);
        }
    }
}
int Bill(int Order)
{
    // This Function proceeds the bill with the selected item.
    int Countiue;
    Lines();
    printf("\nYour Bill is \"%d\" and your Current Budget is %d", Order, Budget - Order);
    // Updating the current budget.
    Budget = Budget - Order;
    // Asking if the user wants to Continue.
    printf("\n\nWould you like to continue? if yes kindly Press \"1\" or Press any key to exit.\n=>");
    scanf("%d", &Countiue);
    if (Countiue == -1)
    {
        // invalid Entry checker
        printf("-1");
        exit(0);
    }
    if (Countiue == 1)
    {
        // if the player wants to continue then the player just has a budget of more than 200.
        if (Budget >= 200)
        {
            // If yes then proceed to order again.
            CorCC(Budget);
        }
        else
        {
            // If the Budget is less than 200 then excites the program.
            printf("\nSorry you are out of Budget :(\n\nHope to See you Soon.\n");
            exit(0);
        }
    }
    else
    {
        // If a player wants to leave the program then say the player the greetings.
        printf("\nThank you for Shopping here.\n\n See you soon :)\n");
        exit(0);
    }
}
void Suggestion(int Budget)
{
    Lines();
    int Menu_option;
    // The below statement is a nested trinary operator to show suggestions according to Budget. This operator save me almost 100 lines of if and else condition
    (Budget >= 200 && Budget < 250) ? Budget_200(Budget) : (Budget >= 250 && Budget < 300) ? Budget_250300(Budget)
                                                       : (Budget >= 300 && Budget < 350)   ? Budget_300350(Budget)
                                                       : (Budget >= 350 && Budget < 400)   ? Budget_350400(Budget)
                                                                                           : Budget400(Budget);
    printf("\n");
    Lines();
    // Checking if the user wants to continue to order or wants to see the menu.
    printf("\nEnter \"1\" if you want to see the Menu or press any key to start your order process:");
    scanf("%d", &Menu_option);
    if (Menu_option == -1)
    {
        // invalid Entry checker
        printf("-1");
        exit(0);
    }
    // If user entry 1 then menu if not then proceed to order.
    (Menu_option == 1) ? Menu() : CorCC(Budget);
}
void Menu(void)
{
    // This is just a printf Function to Display menu to the user.
    // Using Lines() to decorate the menu.
    Lines();
    printf("\n\t\t\t\t\tMenu:\n");
    Lines();
    printf("\nIN cone we have:\t\tIN Cupe we Have:");
    printf("\nFlavours\tPrice\t\tFlavours\tSmall\tMedium\tLarge");
    printf("\nChocolate\t200\t\tChocolate\t200\t250\t300\nVanilla\t\t250\t\tVanilla\t\t250\t300\t350\nStrawberry\t200\t\tStrawberry\t200\t250\t300\nOreo\t\t250\t\tOreo\t\t250\t300\t400\n");
    Lines();
    printf("\n");

    return;
}
void Budget_200(int Budget)
{
    // Giving user a option to select from this suggested or go to order.
    printf("\nAs per Your Budget %d You can buy:\n", Budget);
    Lines();
    printf("\n*1 for Chocolate Cone\n*2 for Strawberry Cone\n*3 for Chocolate Small Ice Cream Cup\n*4 for Strawberry Small Ice Cream Cup\n*5 for Vanilla Medium Ice Cream Cup\n");
    Lines();
    int option;
    printf("\n\nWould you like to select from these or continue to order?\n\nPress any key to continue or Press the number of the Ice Cream to select from here:");
    scanf("%d", &option);
    if (option == -1)
    {
        // Checking invalid entry
        printf("-1");
        exit(0);
    }
    switch (option)
    {
        // This Switch determines the flow of the program according to the options user entered
    case 1:
        // For taking the order of selected item as per the number of item
        Bill(Chocolate_Cone);
        break;
    case 2:
        // For taking the order of selected item as per the number of item
        Bill(Strawberry_Cone);
        break;
    case 3:
        // For taking the order of selected item as per the number of item
        Bill(Chocolate_Small_Cup);
        break;
    case 4:
        // For taking the order of selected item as per the number of item
        Bill(Strawberry_Small_Cup);
        break;
    case 5:
        // For taking the order of selected item as per the number of item
        Bill(Vanilla_Medium_Cup);
        break;
    case 0:
        break;
    case -1:
        // invalid Entry checker
        printf("-1");
        break;
    default:
        break;
    }
}
void Budget_250300(int Budget)
{
    // Giving the user an option to select from this suggested or go to order.
    printf("\nAs per Your Budget %d You can buy:\n", Budget);
    Lines();
    printf("\n*1 for Vanilla Cone\n*2 for Orea Cone\n*3 for Vanilla Small Ice Cream Cup\n*4 for Orea Small Ice Cream Cup\n*5 for Chocolate Mediam Ice Cream Cup\n*6 for Strawberry Mediam Ice Cream Cup\n");
    Lines();
    int option;
    printf("\nWould you like to select from these or continue to order?\n\nPress any key to continue or Press the number of the Ice Cream to select from here:");
    scanf("%d", &option);
    if (option == -1)
    {
        // Checking invalid entry
        printf("-1");
        exit(0);
    }
    switch (option)
    {
        // This Switch determines the flow of the program according to the options user entered
    case 1:
        // For taking the order of selected item as per the number of item
        Bill(Vanilla_Cone);
        break;
    case 2:
        // For taking the order of selected item as per the number of item
        Bill(Orea_Cone);
        break;
    case 3:
        // For taking the order of selected item as per the number of item
        Bill(Vanilla_Small_Cup);
        break;
    case 4:
        // For taking the order of selected item as per the number of item
        Bill(Orea_Small_Cup);
        break;
    case 5:
        // For taking the order of selected item as per the number of item
        Bill(Chocolate_Medium_Cup);
        break;
    case 6:
        // For taking the order of selected item as per the number of item
        Bill(Strawberry_Medium_Cup);
        break;
    case 0:
        // Procced with oder
        break;
    case -1:
        // invalid Entry checker
        printf("-1");
        break;
    default:
        break;
    }
}
void Budget_300350(int Budget)
{
    // Giving the user an option to select from this suggested or go to order.
    printf("\nAs per Your Budget %d You can buy:\n", Budget);
    Lines();
    printf("\n*1 for Orea Medium Ice Cream Cup\n*2 for Chocolate Large Ice Cream Cup\n*3 for Strawberry Large Ice Cream Cup\n");
    Lines();
    int option;
    printf("\nWould you like to select from these or continue to order?\n\nPress any key to continue or Press the number of the Ice Cream to select from here:");
    scanf("%d", &option);
    if (option == -1)
    {
        // Checking invalid entry
        printf("-1");
        exit(0);
    }
    switch (option)
    {
        // This Switch determines the flow of the program according to the options user entered
    case 1:
        // For taking the order of selected item as per the number of item
        Bill(Orea_Medium_Cup);
        break;
    case 2:
        // For taking the order of selected item as per the number of item
        Bill(Chocolate_Large_Cup);
        break;
    case 3:
        // For taking the order of selected item as per the number of item
        Bill(Strawberry_Large_Cup);
        break;
    case 0:
        // Procced with oder
        break;
    case -1:
        // invalid Entry checker
        printf("-1");
        break;
    default:
        break;
    }
}
void Budget_350400(int Budget)
{
    // Giving the user an option to select from this suggested or go to order.
    printf("\nAs per Your Budget %d You can buy:\n", Budget);
    Lines();
    printf("\n*1 for Vanilla Large Ice Cream Cup\n");
    Lines();
    int option;
    printf("\nWould you like to select from these or continue to order?\n\nPress any key to continue or Press the number of the Ice Cream to select from here:");
    scanf("%d", &option);
    if (option == -1)
    {
        // Checking invalid entry
        printf("-1");
        exit(0);
    }
    switch (option)
    {
        // This Switch determines the flow of the program according to the options user entered
    case 1:
        // For taking orders of selected items
        Bill(Vanilla_Large_Cup);
        break;
    case 0:
        // Procced with oder
        break;
    case -1:
        // invalid Entry checker
        printf("-1");
        break;
    default:
        break;
    }
}
void Budget400(int Budget)
{
    // This Function show user the item in Budget 400
    printf("\nHurrah!!! You can Try any of our Products\n\nTry our Premium Product:\n1 for \"Orea Large Ice Cream Cup\"\n");
    ;
    Lines();
    int option;
    printf("\nWould you like to select from these or continue to order?\n\nPress any key to continue or Press the number of the Ice Cream to select from here:");
    scanf("%d", &option);
    // Giving user a option to select from this suggested or go to order.
    if (option == -1)
    {
        // Checking invalid entry
        printf("-1");
        exit(0);
    }
    switch (option)
    {
        // This Switch determines the flow of the program according to the options user entered
    case 1:
        // For taking orders of selected items
        Bill(Orea_Large_Cup);
        break;
    case 0:
        // Procced with oder
        break;
    case -1:
        // invalid Entry checker
        printf("-1");
        break;
    default:
        break;
    }
}
void Lines(void)
{
    // Just a loop to create lines.
    for (int i = 1; i < 80; i++)
    {
        printf("-");
    }
}
