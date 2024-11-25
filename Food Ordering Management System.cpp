#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
using namespace std;
time_t tt;
struct tm *ti;
char name[10], ch;
int qnty, sum, opt, n, a;

void displayDateTime()
{
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    cout << "\t\t\t\t\t\t\t\t" << asctime(localTime) << endl;
}

int burger()
{

    while (true)
    {

        cout << "\t\t\t\t\t    *------BURGER------*" << endl;
        cout << "\t\t\t\tPress '1' Spicy Chicken Burger ................BDT:299" << endl;
        cout << "\t\t\t\tPress '2' Spicy Chicken Burger with Cheese ....BDT:349" << endl;
        cout << "\t\t\t\tPress '3' Classic Chicken Burger...............BDT:220" << endl;
        cout << "\t\t\t\tPress '4' Classic Chicken Burger with Cheese...BDT:280" << endl;
        cout << "\t\t\t\tPress '5' Dhaka Tower Burger...................BDT:380" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 53)
        {

            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            switch (a)
            {
            case 49:
                cout << "You entered " << qnty << " Spicy Chicken Burger(s)" << endl;
                sum = 299 * qnty;
                break;
            case 50:
                cout << "You entered " << qnty << " Spicy Chicken Burger with Cheese(s)" << endl;
                sum = 349 * qnty;
                break;
            case 51:
                cout << "You entered " << qnty << " Classic Chicken Burger(s)" << endl;
                sum = 220 * qnty;
                break;
            case 52:
                cout << "You entered " << qnty << " Classic Chicken Burger with Cheese(s)" << endl;
                sum = 280 * qnty;
                break;
            case 53:
                cout << "You entered " << qnty << " Dhaka Tower Burger(s)" << endl;
                sum = 380 * qnty;
                break;
            }

            cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

            displayDateTime();

            cout << "If you want to go back to 'Burger' press 'Backspace' or any other key to continue" << endl;
            ch = getch();

            if (ch == 8)
            {

                system("cls");
                return 0;
            }
            else
            {
                cout << "\nYou entered the wrong keyword...!" << endl;
            }
        }
        else if (a == 8)
        {

            system("cls");
            return 0;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 5\n\n";
        }
    }
}

int paratha()
{

    while (true)
    {
        cout << "\t\t\t\t\t   *----PARATHA ROLLS----*" << endl;
        cout << "\t\t\t\tPress '1' Shahi Paratha Roll..................BDT:299" << endl;
        cout << "\t\t\t\tPress '2' Shahi Cheese Paratha Roll...........BDT:360" << endl;
        cout << "\t\t\t\tPress '3' Chicken Paratha Roll................BDT:260" << endl;
        cout << "\t\t\t\tPress '4' Vegetable Paratha Roll..............BDT:150" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 52)
        {

            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            switch (a)
            {
            case 49:
                cout << "You entered " << qnty << " Shahi Paratha Roll(s)" << endl;
                sum = 299 * qnty;
                break;
            case 50:
                cout << "You entered " << qnty << " Shahi Cheese Paratha Roll(s)" << endl;
                sum = 360 * qnty;
                break;
            case 51:
                cout << "You entered " << qnty << " Chicken Paratha Roll(s)" << endl;
                sum = 260 * qnty;
                break;
            case 52:
                cout << "You entered " << qnty << " Vegetable Paratha Roll(s)" << endl;
                sum = 150 * qnty;
                break;
            }

            cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

            displayDateTime();
            cout << "If you want to go back to 'PARATHA ROLLS', press 'Backspace'" << endl;
            ch = getch();

            if (ch == 8)
            {

                system("cls");
                return 0;
            }
            else
            {
                cout << "\nYou entered the wrong keyword...!" << endl;
            }
        }
        else if (a == 8)
        {

            system("cls");
            return 0;
        }
        else
        {
            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n";
        }
    }
}

int shawarma()
{

    while (true)
    {

        cout << "\t\t\t\t\t    *------SHAWARMA-----*" << endl;
        cout << "\t\t\t\tPress '1' Shahi Shawarma.....................BDT:260" << endl;
        cout << "\t\t\t\tPress '2' Shahi Cheese Shawarma..............BDT:299" << endl;
        cout << "\t\t\t\tPress '3' Deshi Chicken Shawarma.............BDT:180" << endl;
        cout << "\t\t\t\tPress '4' Deshi Vegetarian Shawarma..........BDT:160" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 52)
        {

            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            switch (a)
            {
            case 49:
                cout << "You entered " << qnty << " Shahi Shawarma(s)" << endl;
                sum = 260 * qnty;
                break;
            case 50:
                cout << "You entered " << qnty << " Shahi Cheese Shawarma(s)" << endl;
                sum = 299 * qnty;
                break;
            case 51:
                cout << "You entered " << qnty << " Deshi Chicken Shawarma(s)" << endl;
                sum = 180 * qnty;
                break;
            case 52:
                cout << "You entered " << qnty << " Deshi Vegetarian Shawarma(s)" << endl;
                sum = 160 * qnty;
                break;
            }

            cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

            displayDateTime();
            cout << "If you want to go back to 'SHAWARMA' press 'Backspace' or any other key to continue" << endl;
            ch = getch();

            if (ch == 8)
            {

                system("cls");
                return 0;
            }
            else
            {
                cout << "\nYou entered the wrong keyword...!" << endl;
            }
        }
        else if (a == 8)
        {

            system("cls");
            return 0;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n";
        }
    }
}

int biryani()
{

    while (true)
    {

        cout << "\t\t\t\t\t     *-----BIRYANI-----*" << endl;
        cout << "\t\t\t\tPress '1' Kacchi Biryani..................BDT:150" << endl;
        cout << "\t\t\t\tPress '2' Tehari Biryani..................BDT:130" << endl;
        cout << "\t\t\t\tPress '3' Dhaka Chicken Biryani...........BDT:170" << endl;
        cout << "\t\t\t\tPress '4' Beef Biryani....................BDT:200" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 52)
        {

            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            switch (a)
            {
            case 49:
                cout << "You entered " << qnty << " Kacchi Biryani(s)" << endl;
                sum = 150 * qnty;
                break;
            case 50:
                cout << "You entered " << qnty << " Tehari Biryani(s)" << endl;
                sum = 130 * qnty;
                break;
            case 51:
                cout << "You entered " << qnty << " Dhaka Chicken Biryani(s)" << endl;
                sum = 170 * qnty;
                break;
            case 52:
                cout << "You entered " << qnty << " Beef Biryani(s)" << endl;
                sum = 200 * qnty;
                break;
            }

            cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

            displayDateTime();
            cout << "If you want to go back to 'BIRYANI' press 'Backspace' or any other key to continue" << endl;
            ch = getch();

            if (ch == 8)
            {

                system("cls");
                return 0;
            }
            else
            {
                cout << "\nYou entered the wrong keyword...!" << endl;
            }
        }
        else if (a == 8)
        {

            system("cls");
            return 0;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n";
        }
    }
}

int pizza()
{

    while (true)
    {

        cout << "\t\t\t\t\t     *------PIZZA-----*" << endl;
        cout << "\t\t\t\tPress '1' Panta Pizza...!" << endl;
        cout << "\t\t\t\tPress '2' Bhuna Khichuri Pizza...!" << endl;
        cout << "\t\t\t\tPress '3' Kacchi Biryani Pizza...!" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 51)
        {

            while (true)
            {
                cout << "\nPress '1' Small Pizza BDT: 350" << endl;
                cout << "Press '2' Medium Pizza BDT: 700 " << endl;
                cout << "Press '3' Large Pizza BDT: 1500" << endl;
                cout << "Press 'Backspace' To Go Back To Pizza\n";
                cout << "\nChoose Size Please: ";

                ch = getch();
                a = ch;
                cout << endl;

                if (a >= 49 && a <= 51)
                {

                    cout << "How much quantity do you want? ";
                    cin >> qnty;
                    cout << endl;

                    switch (a)
                    {
                    case 49:
                        cout << "You entered " << qnty << " Small Pizza(s)" << endl;
                        sum = 350 * qnty;
                        break;
                    case 50:
                        cout << "You entered " << qnty << " Medium Pizza(s)" << endl;
                        sum = 700 * qnty;
                        break;
                    case 51:
                        cout << "You entered " << qnty << " Large Pizza(s)" << endl;
                        sum = 1500 * qnty;
                        break;
                    }

                    cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

                    displayDateTime();
                    cout << "If you want to go back to 'PIZZA' press 'Backspace' or any other key to continue" << endl;
                    ch = getch();

                    if (ch == 8)
                    {

                        system("cls");
                        return 0;
                    }
                    else
                    {
                        cout << "\nYou entered the wrong keyword...!" << endl;
                    }
                    break;
                }
                else if (a == 8)
                {

                    system("cls");
                    return 0;
                }
                else
                {

                    system("cls");
                    cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
                }
            }
        }
        else if (a == 8)
        {

            system("cls");
            return a;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
        }
    }
}

int salad()
{

    while (true)
    {

        cout << "\t\t\t\t\t     *------SALAD------*" << endl;
        cout << "\t\t\t\tPress '1' Bhapa Pitha Salad................BDT:349" << endl;
        cout << "\t\t\t\tPress '2' Deshi Chicken Salad...............BDT:449" << endl;
        cout << "\t\t\t\tPress '3' Kacha Aam Salad...................BDT:480" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 51)
        {

            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            switch (a)
            {
            case 49:
                cout << "You entered " << qnty << " Bhapa Pitha Salad(s)" << endl;
                sum = 349 * qnty;
                break;
            case 50:
                cout << "You entered " << qnty << " Deshi Chicken Salad(s)" << endl;
                sum = 449 * qnty;
                break;
            case 51:
                cout << "You entered " << qnty << " Kacha Aam Salad(s)" << endl;
                sum = 480 * qnty;
                break;
            }

            cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

            displayDateTime();
            cout << "If you want to go back to 'SALAD' press 'Backspace' or any other key to continue" << endl;
            ch = getch();

            if (ch == 8)
            {

                system("cls");
                return 0;
            }
            else
            {
                cout << "\nYou entered the wrong keyword...!" << endl;
            }
        }
        else if (a == 8)
        {

            system("cls");
            return a;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
        }
    }
}

int drinks()
{
    while (true)
    {

        cout << "\t\t\t\t\t     *------DRINKS-----*" << endl;
        cout << "\t\t\t\tPress '1' Cold Coffee...!" << endl;
        cout << "\t\t\t\tPress '2' Fresh Juice...!" << endl;
        cout << "\t\t\t\tPress '3' Lemonade...!" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 51)
        {

            while (true)
            {

                cout << "\nPress '1' Small Drink BDT: 100" << endl;
                cout << "Press '2' Medium Drink BDT: 150" << endl;
                cout << "Press '3' Large Drink BDT: 200" << endl;
                cout << "Press 'Backspace' To Go Back To Drinks\n";
                cout << "\nChoose Size Please: ";

                ch = getch();
                a = ch;
                cout << endl;

                if (a >= 49 && a <= 51)
                {

                    cout << "How much quantity do you want? ";
                    cin >> qnty;
                    cout << endl;

                    switch (a)
                    {
                    case 49:
                        cout << "You entered " << qnty << " Small Drink(s)" << endl;
                        sum = 100 * qnty;
                        break;
                    case 50:
                        cout << "You entered " << qnty << " Medium Drink(s)" << endl;
                        sum = 150 * qnty;
                        break;
                    case 51:
                        cout << "You entered " << qnty << " Large Drink(s)" << endl;
                        sum = 200 * qnty;
                        break;
                    }

                    cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;

                    displayDateTime();

                    cout << "If you want to go back to 'DRINKS' press 'Backspace' or any other key to continue" << endl;
                    ch = getch();

                    if (ch == 8)
                    {

                        system("cls");
                        return 0;
                    }
                    else
                    {
                        cout << "\nYou entered the wrong keyword...!" << endl;
                    }
                    break;
                }
                else if (a == 8)
                {
                    system("cls");
                    return 0;
                }
                else
                {

                    system("cls");
                    cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
                }
            }
        }
        else if (a == 8)
        {

            system("cls");
            return a;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
        }
    }
}

int snacks()
{

    cout << "\t\t\t\t\t    *------SNACKS------*" << endl;
    cout << "Press '1' French Fries .......... BDT:120" << endl;
    cout << "Press '2' Nachos ................ BDT:180" << endl;
    cout << "Press '3' Chicken Wings ......... BDT:250" << endl;
    cout << "Press '4' Onion Rings ........... BDT:100" << endl;
    cout << "Press '5' Spring Rolls .......... BDT:150" << endl;
    cout << "Press 'Backspace' To Go Back To Menu\n"
         << endl;
    cout << "Please select any option: ";

    ch = getch();
    a = ch;
    cout << endl;

    if (a >= 49 && a <= 53)
    {
        cout << "How much quantity do you want? ";
        cin >> qnty;
        cout << endl;

        switch (a)
        {
        case 49:
            cout << "You entered " << qnty << " French Fries" << endl;
            sum = 120 * qnty;
            break;
        case 50:
            cout << "You entered " << qnty << " Nachos" << endl;
            sum = 180 * qnty;
            break;
        case 51:
            cout << "You entered " << qnty << " Chicken Wings" << endl;
            sum = 250 * qnty;
            break;
        case 52:
            cout << "You entered " << qnty << " Onion Rings" << endl;
            sum = 100 * qnty;
            break;
        case 53:
            cout << "You entered " << qnty << " Spring Rolls" << endl;
            sum = 150 * qnty;
            break;
        }

        cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;
        cout << "\t\t\t\t\t\t\t\t" << asctime(ti) << endl;

        cout << "If you want to go back to 'SNACKS' press 'Backspace' or any other key to continue" << endl;
        ch = getch();

        if (ch == 8)
        {
            system("cls");
            return 0;
        }
        else
        {
            cout << "\nYou entered the wrong keyword...!" << endl;
        }
    }
    else if (a == 8)
    {
        system("cls");
        return 0;
    }
    else
    {
        system("cls");
        cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 5\n\n";
    }

    return 0;
}

int desserts()
{

    cout << "\t\t\t\t\t    *------DESSERTS------*" << endl;
    cout << "Press '1' Ice Cream ............ BDT:150" << endl;
    cout << "Press '2' Chocolate Cake ....... BDT:200" << endl;
    cout << "Press '3' Pastries ............. BDT:100" << endl;
    cout << "Press 'Backspace' To Go Back To Menu\n"
         << endl;
    cout << "Please select any option: ";

    ch = getch();
    a = ch;
    cout << endl;

    if (a >= 49 && a <= 51)
    {
        cout << "How much quantity do you want? ";
        cin >> qnty;
        cout << endl;

        switch (a)
        {
        case 49:
            cout << "You entered " << qnty << " Ice Cream(s)" << endl;
            sum = 150 * qnty;
            break;
        case 50:
            cout << "You entered " << qnty << " Chocolate Cake(s)" << endl;
            sum = 200 * qnty;
            break;
        case 51:
            cout << "You entered " << qnty << " Pastry(s)" << endl;
            sum = 100 * qnty;
            break;
        }

        cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;
        displayDateTime();

        cout << "If you want to go back to 'DESSERTS' press 'Backspace' or any other key to continue" << endl;
        ch = getch();

        if (ch == 8)
        {
            system("cls");
            return 0;
        }
        else
        {
            cout << "\nYou entered the wrong keyword...!" << endl;
        }
    }
    else if (a == 8)
    {
        system("cls");
        return 0;
    }
    else
    {
        system("cls");
        cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
    }

    return 0;
}

int seafood()
{
    while (true)
    {

        cout << "\t\t\t\t\t    *------SEAFOOD------*" << endl;
        cout << "\t\t\t\tPress '1' Grilled Salmon..................BDT: 700" << endl;
        cout << "\t\t\t\tPress '2' Garlic Shrimp Pasta.............BDT: 850" << endl;
        cout << "\t\t\t\tPress '3' Fish & Chips....................BDT: 500" << endl;
        cout << "\t\t\t\tPress '4' Lobster Thermidor...............BDT: 1500" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n"
             << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= 49 && a <= 52)
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            switch (a)
            {
            case 49:
                cout << "You entered " << qnty << " Grilled Salmon(s)" << endl;
                sum = 700 * qnty;
                break;
            case 50:
                cout << "You entered " << qnty << " Garlic Shrimp Pasta(s)" << endl;
                sum = 850 * qnty;
                break;
            case 51:
                cout << "You entered " << qnty << " Fish & Chips" << endl;
                sum = 500 * qnty;
                break;
            case 52:
                cout << "You entered " << qnty << " Lobster Thermidor(s)" << endl;
                sum = 1500 * qnty;
                break;
            }

            cout << "The bill is: " << sum << "\t\t\t\t\t\tDate & Time" << endl;
            displayDateTime();

            cout << "If you want to go back to 'SEAFOOD' press 'Backspace' or any other key to continue" << endl;
            ch = getch();

            if (ch == 8)
            {
                system("cls");
                return 0;
            }
            else
            {
                cout << "\nYou entered the wrong keyword...!" << endl;
            }
        }
        else if (a == 8)
        {

            system("cls");
            return 0;
        }
        else
        {

            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n";
        }
    }
}

int main()
{

    int choice;
    time(&tt);
    ti = localtime(&tt);

    cout << "\n\t\t\t\t*--------FOOD ORDERING MANAGEMENT SYSTEM--------*\n\n";
    cout << "Please enter your name: ";
    cin.getline(name, 50);

    while (true)
    {
        cout << "\n\nAs-salamu Alaikom..! " << name << ".\n";
        cout << "What would you like to order?\n\n";

        cout << "\n\t\t\t\t\t  *----------MENU----------*\n"
             << endl;
        cout << "Press '1' BURGER" << endl;
        cout << "Press '2' PARATHA ROLLS" << endl;
        cout << "Press '3' SHAWARMA" << endl;
        cout << "Press '4' BIRYANI" << endl;
        cout << "Press '5' PIZZA" << endl;
        cout << "Press '6' SALAD" << endl;
        cout << "Press '7' DRINKS" << endl;
        cout << "Press '8' DESSERTS" << endl;
        cout << "Press '9' SNACKS" << endl;
        cout << "Press '10' SEAFOOD" << endl;
        cout << "\nPlease enter your choice: ";

        cin >> choice;
        cout << endl;

        if (choice >= 1 && choice <= 10)
        {
            switch (choice)
            {
            case 1:
                burger();
                break;
            case 2:
                paratha();
                break;
            case 3:
                shawarma();
                break;
            case 4:
                biryani();
                break;
            case 5:
                pizza();
                break;
            case 6:
                salad();
                break;
            case 7:
                drinks();
                break;
            case 8:
                desserts();
                break;
            case 9:
                snacks();
                break;
            case 10:
                seafood();
                break;
            }
        }
        else
        {
            system("cls");
            cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 10\n";
        }

        cout << "\nWould you like to place another order? (Y/N): ";
        char again;
        cin >> again;
        if (again != 'Y' && again != 'y')
        {
            break;
        }
        else
        {
            system("cls");
        }
    }

    return 0;
}
