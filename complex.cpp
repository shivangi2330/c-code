#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct Book
{

    int bookid;
    char title[20];
    float price;
    void input(){
    cout<<"Enter bookid";
    cin>>bookid;
    cout<<"Enter the title";
    cin.ignore();
    cin.getline(title,20);
    cout<<"Enter price of the book";
    cin>>price;

    }void display(){
    cout<<endl<<bookid<<" "<<title<<" "<<price;

    }
};
int main()
{

    Book b1 = { 1 , "C made easy", 530.0},b2;
    b2.bookid=2;
    strcpy(b2.title,"C++ made easy");
    b2.price=780.0;
    Book b3;
    b3.input();
    b1.display();
    b2.display();
    b3.display();
    getch();
}
