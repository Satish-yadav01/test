/*   Simple Account management software    */
/* this will shows the basic idea behind the bank management system using cpp */

//#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

class Bank
{
private:
    int age,i=0;
    long long mob_num,acc_num,temp,rem;
    float bal=0,depo,with;
    char name[10],type,conform,n;
    void validate();

public:
    void creataccount();
    void checkbalance();
    void deposit();
    void withdraw();
    void showdetails();
    void deleteaccount();
};
void Bank::creataccount()
{
    ofstream fout;
    fout.open("Bank.txt",ios::app);
    cout<<"\n Enter your Account Number: ";
    cin>>acc_num;
    fout<<endl;
    fout<<"\n Enter your Account Number: ";
    fout<<acc_num;
    cout<<"\n Enter your Account Holder Name: ";
    cin>>name;
    fout<<"\n Enter your Account Holder Name: ";
    fout<<name;
    cout<<"\n which type of account as you want[s/c]:";
    cin>>type;
    fout<<"\n which type of account as you want[s/c]:";
    fout<<type;
    do
    {
        cout<<"\n Enter your age: ";
        cin>>age;
        if(age<18)
        {
           cout<<"\n Your age should be atleast 18."<<endl;
        }
    }while(age<18);
    fout<<"\n Enter your age: ";
    fout<<age;
    do
    {
       cout<<"\n Enter your mobile number: ";
       cin>>mob_num;
       validate();
       if(i!=10)
       {
          cout<<"\n Enter valid number: "<<endl;
       }
    }while(i!=10);
     fout<<"\n Enter your mobile number: ";
     fout<<mob_num;
     cout<<"\n Enter account opening transaction: ";
     cin>>bal;
    fout<<"\n Enter account opening transaction: ";
    fout<<bal<<endl<<endl;
    cout<<endl;
    fout.close();
   // getch();
}
void Bank::validate()
{
    temp=mob_num;
      while(temp!=0)
      {
          rem=temp%10;
          i=i+1;
          temp=temp/10;
      }
}
void Bank::checkbalance()
{
   ofstream fout;
   fout.open("Bank.txt",ios::app);
   cout<<"\n Your Available Balance is:"<<bal<<endl;
   fout<<"\n Your Available Balance is:"<<bal<<endl<<endl;
   fout.close();
   getch();
}
void Bank::deposit()
{
    ofstream fout;
    fout.open("Bank.txt",ios::app);
    cout<<"\n Enter money as you want to deposit.";
    cin>>depo;
    fout<<"\n Enter money as you want to deposit.";
    fout<<depo;
    bal=bal+depo;
    cout<<"\n.......... Congratulation your transaction is successful........!!!";
    fout<<"\n.......... Congratulation your transaction is successful........!!!";

    getch();
    cout<<endl;
    cout<<"\n your current available balance is:"<<bal<<endl<<endl;
    fout<<"\n your current available balance is:"<<bal<<endl<<endl;
    fout.close();
    getch();
}
void Bank::withdraw()
{
    ofstream fout;
    fout.open("Bank.txt",ios::app);
    cout<<"\n Enter amount as you withdraw from your local account:";
    cin>>with;
    fout<<"\n Enter amount as you withdraw from your local account:";
    fout<<with;
    bal=bal-with;
    cout<<endl;
    cout<<"\n .......Congratulation your transaction is successful.........!!!!!";
    fout<<"\n .......Congratulation your transaction is successful.........!!!!!";
    getch();
    cout<<endl;
    cout<<"\n Your current available balance is:"<<bal<<endl<<endl;
    fout<<"\n Your current available balance is:"<<bal<<endl<<endl;
    getch();
}
void Bank::showdetails()
{

    cout<<"\n your Account Number: "<<acc_num<<endl;
    cout<<"\n your Account Holder Name: "<<name<<endl;
    cout<<"\n Account in:"<<type<<"mode:"<<endl;
    cout<<"\n Your age is:"<<age<<endl;
    cout<<"\n Your mobile number is:"<<mob_num<<endl;
    cout<<"\n Your current banace is:"<<bal<<endl;
    getch();
}
void Bank::deleteaccount()
{
    Bank b1;
    cout<<"\n\t\tCONFORM [Y/N]:"<<endl;
    cin>>conform;
    if(conform=(89||121))
    {
        acc_num=0;
        strcpy(name,"none");
        type=n;
        age=0;
        mob_num=0;
        bal=0;
        b1.showdetails();
    }
    else if(conform==(78||110))
    {
        cout<<"\n\t\t NO CHANGES HERE"<<endl;
    }
    else
    {
        cout<<"\n\tchoose a valid input"<<endl;
    }
}

int main()
{
    int c;
    Bank b;
    ofstream fout;

    do
    {
    fout.open("Bank.txt",ios::app);
    fout<<"\n 01. Open your bank account."<<endl;
    fout<<"\n 02. check your balance."<<endl;
    fout<<"\n 03. deposit in your account."<<endl;
    fout<<"\n 04. withdraw from your account."<<endl;
    fout<<"\n 05. show details."<<endl;
    fout<<"\n 06. delete your account."<<endl;
    fout<<"\n 06. exit."<<endl<<endl;
    fout<<"\n Choose a valid input";

    system("cls");
    cout<<"\n 01. Open your bank account."<<endl;
    cout<<"\n 02. check your balance."<<endl;
    cout<<"\n 03. deposit in your account."<<endl;
    cout<<"\n 04. withdraw from your account."<<endl;
    cout<<"\n 05. show details."<<endl;
    cout<<"\n 06. Delete your Account."<<endl;
    cout<<"\n 07. exit."<<endl<<endl;
    cout<<"\n choose a valid input:";
    cin>>c;
    fout<<c;
    fout.close();
   /* int gd=0,gm;
    initgraph(&gd,&gm,"");
     for(int i=1;i<=500;i++)
    {
       // object.road();
        setcolor(14);//sun
        circle(500-i,50,30);
        setcolor(13);
        circle(100+i,300,30);
        circle(200+i,300,30);
        delay(15);
        cleardevice();
    }
    getch();
    closegraph();*/

    system("cls");
    switch(c)
    {
    case 1:
        b.creataccount();
        break;
    case 2:
        b.checkbalance();
        break;
    case 3:
        b.deposit();
        break;
    case 4:
        b.withdraw();
        break;
    case 5:
        b.showdetails();
        break;
    case 6:
        b.deleteaccount();
        break;
    case 7:
        cout<<"\n   thank you for visiting:"<<endl;
        break;
    default :
        cout<<"\n.. Use valid input ..";
    }
    }while(!(c==7));
    return 0;
}
