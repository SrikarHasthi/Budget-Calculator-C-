using namespace std;
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
class budget
{
    long int sal,tott;
      int inc,rent,bills,tv;
      int ins,rep;
      int school,loan,tut;
      int househ,cloth,enter,med;
      int oth,tax=0;
      int sav,amo,t;
      float hou,tran,edu,food,othe,tot,pro=0,los=0,per=0,per1=0;
      int mon,house,transp,educ,foo;
  public:
    void save();
    void bud();
    void show();
};
void budget::bud()
{
      cout<<"\n \n Know how much u are saving by just entering your expenses below \n \n";
      cout<<".\t MONTHLY INCOME ";
      cout<<"\n \nMonthly Salary    :\t";
      do{
      while(!(cin>>sal))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}
if(sal<0)
cout<<"invalid input";
}while(sal<0);
     cout<<"\n \nOther Income      :\t";
     do{
      while(!(cin>>inc))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}
if(inc<0)
cout<<"invalid input";
}while(inc<0);
     cout<<"\n \t HOUSING EXPENSES ";
      cout<<"\n \nRent              :\t";
 do{
      while(!(cin>>rent))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(rent<0)
cout<<"invalid input";
}while(rent<0);
      cout<<"\n \nBills(water/gas/electricity)  :\t";
 do{
      while(!(cin>>bills))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}
if(bills<0)
cout<<"invalid input";
}while(bills<0);
      cout<<"\n \t TRANSPORTATION EXPENSES";
      cout<<"\n \nInsurances        :\t";
 do{
      while(!(cin>>ins))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}
if(ins<0)
cout<<"invalid input";
}while(ins<0);
      cout<<"\n \nRepairs           :\t";
 do{
      while(!(cin>>rep))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(rep<0)
cout<<"invalid input";
}while(rep<0);
      cout<<"\n \t EDUCATIONAL EXPENSES";
      cout<<"\n \nSchool/College Supplies   :\t";
 do{
      while(!(cin>>school))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(school<0)
cout<<"invalid input";
}while(school<0);
      cout<<"\n \nStudy Loans       :\t";
 do{
      while(!(cin>>loan))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(loan<0)
cout<<"invalid input";
}while(loan<0);
      cout<<"\n \t FOOD AND PERSONAL";
      cout<<"\n \nGroceries/Household   :\t";
 do{
      while(!(cin>>househ))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(househ<0)
cout<<"invalid input";
}while(househ<0);
      cout<<"\n \nMedical           :\t";
 do{
      while(!(cin>>med))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(med<0)
cout<<"invalid input";
}while(med<0);
      cout<<"\n \t OTHER EXPENSES";
      cout<<"\n \nOthers/Miscellaneous  :\t";
 do{
      while(!(cin>>oth))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(oth<0)
cout<<"invalid input";
}while(oth<0);
      cout<<"\n \tHere is the calculated data\n";
      mon=sal+inc;
      house=rent+bills;
      transp=ins+rep;
      educ=school+loan;
      foo=househ+med;
      cout<<"\n___________________________________";
      cout<<"\n| MONTHLY INCOME          :";cout<<mon;
      cout<<"\n|__________________________________|";
      cout<<"\n| HOUSING EXPENSES        :";cout<<house;
      cout<<"\n|__________________________________|";
      cout<<"\n| TRANSPORTATION EXPENSES :";cout<<transp;
      cout<<"\n|__________________________________|";
      cout<<"\n| EDUCATIONAL EXPENSES    :";cout<<educ;
      cout<<"\n|__________________________________|";
      cout<<"\n| FOOD AND PERSONAL       :";cout<<foo;
      cout<<"\n|__________________________________|";
      cout<<"\n| OTHER EXPENSES          :";cout<<oth;
      cout<<"\n|__________________________________|";
        if(sal<200000)
      {
          cout<<"Since your salary is less than 2 Lakh,"<<endl<<"you don't have to pay any tax to the government\n";
          cout<<tax;
      }
      if(sal>=200000&&sal<500000)
      {
          cout<<"Since your salary is greater than 2 Lakh,"<<endl<<"you have to pay 5% tax to the government"<<endl<<"i.e RS:";
          tax=(sal/100)*5;
          cout<<tax;
      }
      if(sal>=500000&&sal<1000000)
      {
          cout<<"Since your salary is greater than 5 Lakh,"<<endl<<"you have to pay 20% tax to the government"<<endl<<"i.e RS:";
          tax=(sal/100)*20;
          cout<<tax;
      }
        if(sal>=1000000)
      {
          cout<<"Since your salary is greater than 10 Lakh,"<<endl<<"you have to pay 30% tax to the government"<<endl<<"i.e RS:";
          tax=(sal/100)*30;
          cout<<tax;
      }
      tott=(house+transp+foo+oth+educ+tax);
      per1=0;
      los=0;
      pro=mon-tott;
      if(pro>0)
      per=(pro*100)/mon;
      else
      {
      	per=0;
      	pro=0;
        los=tott-mon;
        per1=(los*100)/mon;
      }
      cout<<"\n___________________________________";
      cout<<"\n| MONTHLY INCOME       :";cout<<mon;
      cout<<"\n|__________________________________|";
      cout<<"\n| TOTAL EXPENDITURE    :";cout<<tott;
      cout<<"\n|__________________________________|";
      cout<<"\n| PROFIT               :";cout<<pro;
      cout<<"\n|__________________________________|";
      cout<<"\n| PROFIT PERCENTAGE    :";cout<<per;
      cout<<"\n|__________________________________|";
      cout<<"\n| LOSS                 :";cout<<los;
      cout<<"\n|__________________________________|";
      cout<<"\n| LOSS PERCENTAGE      :";cout<<per1;
      cout<<"\n|__________________________________|";
}
void budget::save()
 {
     float a1=0,a2=0,a3=0,a4=0,a5=0;
           cout<<"\n Enter the Monthly Income   \n";
 do{
      while(!(cin>>sal))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(sal<0)
cout<<"invalid input";
}while(sal<0);
    cout<<"\n \nenter the how much you want to save every month \n";
     do{
      while(!(cin>>sav))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(sav<0)
cout<<"invalid input";
}while(sav<0);
    amo=sal-sav;
    do{
    cout<<"\n please give the percentage of expenditure/preference according to your needs \n";
    cout<<"1) Housing expenses :";
 do{
      while(!(cin>>hou))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(hou<0)
cout<<"invalid input";
}while(hou<0);
    cout<<"2) Transportation :";
 do{
      while(!(cin>>tran))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(tran<0)
cout<<"invalid input";
}while(tran<0);
    cout<<"3) Education :";
 do{
      while(!(cin>>edu))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(edu<0)
cout<<"invalid input";
}while(edu<0);
    cout<<"4) Food and Personal :";
 do{
      while(!(cin>>food))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(food<0)
cout<<"invalid input";
}while(food<0);
    cout<<"5) Others";
 do{
      while(!(cin>>othe))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}if(othe<0)
cout<<"invalid input";
}while(othe<0);
    tot=(hou+tran+edu+food+othe);
    if(tot==100)
    {
        cout<<"ok";
    }
    else
    {
        cout<<"\n The percentages does not sum up to 100% \n";
            cout<<"you have entered"<<tot<<"% \n"<<"\n give the percentages to sum upto 100% \n";
           if(tot<100){
               cout<<"press \n 1)to add remaining % to others \n 2)to add again";
               cin>>t;
               if(t==1)
               {
                   othe=100-(hou+tran+edu+food);
                   cout<<"others % is"<<ends<<othe;
               }
               else{}
    }
    tot=(hou+tran+edu+food+othe);
    }}while(tot!=100);
    a1=(hou*amo)/100;
    a2=(tran*amo)/100;
    a3=(edu*amo)/100;
    a4=(food*amo)/100;
    a5=(othe*amo)/100;
    cout<<"\n Your spending limit to save"<<ends;
    cout<<sav;cout<<"Rs every month is\n";
       cout<<"\n___________________________________";
      cout<<"\n| HOUSING EXPENSES        :";cout<<a1;
      cout<<"\n|__________________________________|";
      cout<<"\n| TRANSPORTATION EXPENSES :";cout<<a2;
      cout<<"\n|__________________________________|";
      cout<<"\n| EDUCATIONAL EXPENSES    :";cout<<a3;
      cout<<"\n|__________________________________|";
      cout<<"\n| FOOD AND PERSONAL       :";cout<<a4;
      cout<<"\n|__________________________________|";
      cout<<"\n| OTHER EXPENSES          :";cout<<a5;
      cout<<"\n|__________________________________|";


}
void budget::show()
{
 fstream file;
cout<<"\n \n LAST ENTRY \n \n";
      cout<<"\t MONTHLY INCOME ";
      cout<<"\n \nMonthly Salary    :\t";
      cout<<sal;
     cout<<"\n \nOther Income      :\t";
      cout<<inc;
      cout<<"\n \t HOUSING EXPENSES ";
      cout<<"\n \nRent              :\t";
      cout<<rent;
      cout<<"\n \nBills(water/gas/electricity)  :\t";
      cout<<bills;
      cout<<"\n \t TRANSPORTATION EXPENSES";
      cout<<"\n \nInsurances        :\t";
      cout<<ins;
      cout<<"\n \nRepairs           :\t";
      cout<<rep;
      cout<<"\n \t EDUCATIONAL EXPENSES";
      cout<<"\n \nSchool/College Supplies   :\t";
      cout<<school;
      cout<<"\n \nStudy Loans       :\t";
      cout<<loan;
      cout<<"\n \t FOOD AND PERSONAL";
      cout<<"\n \nGroceries/Household   :\t";
      cout<<househ;

      cout<<"\n \nMedical           :\t";
      cout<<med;
      cout<<"\n \t OTHER EXPENSES";
      cout<<"\n \nOthers/Miscellaneous  :\t";
      cout<<oth;
      cout<<"\n \nTAX    :\t";
      cout<<tax;
cout<<"\n___________________________________";
      cout<<"\n| MONTHLY INCOME          :";cout<<mon;
      cout<<"\n|__________________________________|";
      cout<<"\n| HOUSING EXPENSES        :";cout<<house;
      cout<<"\n|__________________________________|";
      cout<<"\n| TRANSPORTATION EXPENSES :";cout<<transp;
      cout<<"\n|__________________________________|";
      cout<<"\n| EDUCATIONAL EXPENSES    :";cout<<educ;
      cout<<"\n|__________________________________|";
      cout<<"\n| FOOD AND PERSONAL       :";cout<<foo;
      cout<<"\n|__________________________________|";
      cout<<"\n| OTHER EXPENSES          :";cout<<oth;
      cout<<"\n|__________________________________|";
      cout<<"\n| TAX                     :";cout<<tax;
      cout<<"\n|__________________________________|";
      cout<<"\n \n";
            cout<<"\n___________________________________";
      cout<<"\n| MONTHLY INCOME       :";cout<<mon;
      cout<<"\n|__________________________________|";
      cout<<"\n| TOTAL EXPENDITURE    :";cout<<tott;
      cout<<"\n|__________________________________|";
      cout<<"\n| PROFIT               :";cout<<pro;
      cout<<"\n|__________________________________|";
      cout<<"\n| PROFIT PERCENTAGE    :";cout<<per;
      cout<<"\n|__________________________________|";
      cout<<"\n| LOSS                 :";cout<<los;
      cout<<"\n|__________________________________|";
      cout<<"\n| LOSS PERCENTAGE      :";cout<<per1;
      cout<<"\n|__________________________________|";
}
int main()
{
    char g;
    fstream file;
    ifstream f1;
    budget s,h,b1;
    int a,dum=0;
    int i,length=0,siz=0;
        cout<<"\n \n \n \t \t \t   ######## WELCOME TO BUDGET CALCULATOR ######### \n \n \n \n "<<endl;
    cout<<"Looking to manage your finance state, then don't worry just go through the below steps: \n"<<endl;
    do{
    do{

              cout<<"\tSelect the option of ur wish \n"<<endl;
    cout<<"1) Calculate Budget \n"<<endl<<"2) Want to save money"<<"\n \n3) Show Previous Records"<<"\n \n4) Delete all the records \n";
            while(!(cin>>a))
{
cout<<"Invali input\n";
cout<<"Please try again\n";
cin.clear();
cin.ignore(200,'\n');
}
    if(a==1){
            file.open("data.txt",ios::app|ios::out);
     s.bud();
    file.write((char*)&s,sizeof(s));
 file.close();
 break;
        }
    if(a==2){
            b1.save();
            break;
            }
    if(a==3){
        file.open("data.txt",ios::in);
        f1.open("data.txt",ios::in);
        f1.seekg(0,ios_base::end);
        length=f1.tellg();
        f1.seekg(0);
        if(length==0)
            cout<<"file is empty";
        else{

    while(true)
    {
file.read((char*)&h,sizeof(h));
if(file.eof()) 
break;
h.show();
//cout<<dum;
    }
    }
file.close();
break;
    }
    if(a==4){
        file.open("data.txt",ios::out|ios::trunc);
        cout<<"records deleted";
        cout<<"\n ****Please restart the program****";
        cout<<"\n Press 0 to exit";
        goto B;
        break;
    }
            else
                cout<<"\n you have entered invalid no. \n \n";
            }while(a!=1&&a!=2);
  cout<<"\n \n Press 1 to continue or any other to exit \n";
  B:
  cin>>g;
}while(g=='1');
cout<<"\n \n \t \t*****THANK YOU***** \n \n";
getch();
}
