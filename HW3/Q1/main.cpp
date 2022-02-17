#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct menuItemType
{
    string menuItem;
    double menuPrice;
};

void getData(menuItemType menuList[]);
void showMenu(menuItemType menuList[] , int n);
void printCheck(menuItemType menuList[], int menu_order[], int n);

int main()
{
    const int item = 8;
    menuItemType menuList[item];
    int menu_order[item] ={0};
    int choice =0;
    int count =0;
    bool order = true;
    getData(menuList);
    showMenu(menuList,item);
    while(order)
    {
        cout<<"Enter the choice for the order or press 0 to exit"<<endl;
        cin>>choice;
        if(choice>0 && choice<=item)
        {
            menu_order[choice-1]+=1;
        }
        else
        {
            order=false;
        }
    }
    printCheck(menuList,menu_order,item);
    return 0;
}

void getData(menuItemType menuList[])
{
    menuItemType plainEgg;
    menuItemType baconEgg;
    menuItemType muffin;
    menuItemType frenchToast;
    menuItemType fruitBasket;
    menuItemType cereal;
    menuItemType coffee;
    menuItemType tea;
    plainEgg.menuItem = "Plain Egg";
    plainEgg.menuPrice = 1.45;
    baconEgg.menuItem = "Bacon and Egg";
    baconEgg.menuPrice = 2.45;
    muffin.menuItem = "Muffin";
    muffin.menuPrice= 0.99;
    frenchToast.menuItem = "French Toast";
    frenchToast.menuPrice = 1.99;
    fruitBasket.menuItem = "Fruit Basket";
    fruitBasket.menuPrice = 2.49;
    cereal.menuItem = "Cereal";
    cereal.menuPrice = 0.69;
    coffee.menuItem ="Coffee";
    coffee.menuPrice = 0.50;
    tea.menuItem = "Tea";
    tea.menuPrice = 0.75;
    menuList[0] = plainEgg;
    menuList[1] = baconEgg;
    menuList[2] = muffin;
    menuList[3] = frenchToast;
    menuList[4] = fruitBasket;
    menuList[5] = cereal;
    menuList[6] = coffee;
    menuList[7] = tea;
}

void showMenu(menuItemType menuList[], int n)
{
    int count;
    cout<<"Restaurant Breakfast Menu"<<endl;
    cout<<endl;
    for(count=0; count<n;count++)
    {
        cout<<setw(2)<<left<<count+1<<setw(20)<<left
            <<menuList[count].menuItem<<'$'<<menuList[count].menuPrice<<
            endl;
    }
}

void printCheck(menuItemType menuList[], int menu_Order[], int n)
{
    double Bill = 0;
    double calculated_Tax =0;
    const double Tax = .05;
    cout<<"Welcome to Johnny's Restaurant"<<endl;
    for(int i=0;i<n;i++)
    {
        if(menu_Order[i]>0)
        {
            cout<<fixed<<setprecision(2)<<setw(20)<<left<<
                menuList[i].menuItem<<'$'<<(menuList[i].menuPrice*menu_Order[i])
                <<endl;
            Bill+=(menuList[i].menuPrice*menu_Order[i]);
        }
    }
    calculated_Tax = Bill* Tax;
    Bill+= calculated_Tax;
    cout<<setw(20)<<left<<"Tax"<<'$'<<fixed<<setprecision(2)
        <<calculated_Tax<<endl
        <<setw(20)<<left<<"Amount Due"<<"$"<<Bill<<endl;
}