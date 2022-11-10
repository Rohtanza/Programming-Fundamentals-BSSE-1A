#include <stdio.h>
#include <stdlib.h>
#define Default_amount 5000
// Creating a Constant of the price of 3 pizzas and drinks.
#define price 833.33
// Creating a Constant of the price of 1 pizza or 1 drink.
int Totalguest(void);
// The above Function will ask for the number of guests.
float div_pizza(float Total_Guests, float Total_Pizzas);
// The above Function will tell how many slices of pizza a person will get.
float div_drink_glasses(float Total_Guests, float Total_Drinks);
// The above Function will tell how much drink a person will get.
float div_amount(float Total_Guests, float Total_Drinks, float Total_Pizzas);
// The above Function will tell them how much per head amount a person will get.
int Order(int Total_Guests);
// The Above function will take the order and call the other function to do their tasks.
int main()
{
    float Total_Guests = Totalguest();
    Order(Total_Guests);
    // Calling the function which will do everything.
    return 0;
}
float div_pizza(float Total_Guests, float Total_Pizzas)
{
    // Again Check the invalid entry.
    if (Total_Guests == -1)
    {
        return -1;
    }
    // Calculating the Pizza Slices.
    float Slice = Total_Pizzas * 8 / (Total_Guests + 1);
    return Slice;
}
float div_drink_glasses(float Total_Guests, float Total_Drinks)
{
    // Again Check the invalid entry.
    if (Total_Guests == -1)
    {
        return -1;
    }
    // Calculation the drinks.
    float drink = Total_Drinks * 5 / (Total_Guests + 1);
    return drink;
}
float div_amount(float Total_Guests, float Total_Drinks, float Total_Pizzas)
{
    // Again Check the invalid entry.
    if (Total_Guests == -1)
    {
        return -1;
    }
    // This Condition is determining if the order is defaulted or not if it is defaulted then proceed with the order.
    if (Total_Drinks == 3 && Total_Pizzas == 3)
    {
        return ((Default_amount / 2) / Total_Guests);
    }
    else
    // proceeding with the calculation of the custom order.
    {
        return (((price * (Total_Pizzas + Total_Drinks) + 0.1) / 2) / Total_Guests);
    }
}
int Totalguest(void)
{
    int Total_Guests;
    printf("Hello There :),Its party time\nHow many Friends are coming?\n=>");
    // Displaying a Greeting text.
    scanf(" %d", &Total_Guests);
    if (Total_Guests > 15)
    {
        // This condition will decide if the guest is less than 15, if not then will exit the program and print -1 as per the condition.
        printf("Nah! Too many folks, Guests should be less then 15,Try again.\n");
        printf("-1");
        exit(0);
    }
    else if (Total_Guests == -1)
    {
        // Displaying -1 on the invalid entry.
        printf("-1");
        exit(0);
    }
    else
    {
        // Returning the Number of Guests if the entry is valid.
        return Total_Guests;
    }
}
int Order(int Total_Guests)
{
    int order_choice;
    float Total_Pizzas, Total_Drinks, Slice, Drink, Perhead;
    printf("Are we having the usually same \"3\" Large Pizzas and \"3\" one litters drinks, If yes then Enter \"1\" or else enter \"2\" to enter new order.\n=>");
    scanf("%d", &order_choice);
    // The variable order_choice will determine whether the default order will proceed or user enter customized order.
    if (order_choice == -1)
    {
        printf("-1");
        exit(0);
    }
    else if (order_choice != 1 & order_choice != 2)
    {
        // Checking if the Entry is valid or not.
        printf("\nEnter a valid choice either 1 or 2.\n");
        printf("\nTry again from start\n\n");
        return 0;
    }

    else if (order_choice == 1)
    {
        // Continuing with the default order
        Total_Pizzas = 3;
        Total_Drinks = 3;
    }
    else
    {
        // Proceeding with a custom order.
        printf("Enter the Drinks:");
        scanf("%f", &Total_Drinks);
        if (Total_Drinks == -1)
        {
            printf("-1");
            exit(0);
        }
        // Taking Drinks orders
        printf("Enter the Pizzas:");
        scanf("%f", &Total_Pizzas);
        if (Total_Pizzas == -1)
        {
            printf("-1");
            exit(0);
            // Taking Pizza Order.
        }
    }
    Slice = div_pizza(Total_Guests, Total_Pizzas);
    // Calling the Function for the pizza slice calculation.
    Drink = div_drink_glasses(Total_Guests, Total_Drinks);
    // Calling the Function for Drink Calculation.
    Perhead = div_amount(Total_Guests, Total_Drinks, Total_Pizzas);
    // Calling the Function for Perhead amount Calculation.
    // Creating a Custom message if no one calls to your boring parting, now you will have all the pizzas, and drinks and pay for all the orders.
    if (Slice == 24)
    {
        printf("You will have all the %.01f slices.\n", Slice);
    }
    else
    {
        printf("Each will guy have %.01f slice perhead.\n", Slice);
    }
    if (Drink == 15)
    {
        printf("You will have all the %.01f Drinks.\n", Drink);
    }
    else
    {
        printf("Each will guy have %.01f glass(es) of drink.\n", Drink);
    }
    if (Total_Guests == 0)
    {
        printf("You have to pay the full price %d.\n", Default_amount);
    }
    else
    {
        printf("Each guy has to pay %.01f perhead.\n", Perhead);
    }
    return 0;
}
