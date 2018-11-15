
#include<iostream>
#include<string.h>
#include<conio.h>


using namespace std;
class det
{
 public:
  string name,type;
  int an,balam;
  int wdr,ddr;
  static int bal;
  det(int q,string na,string ta)
   {
    name=na;
    type=ta;
    an=q;

   }
  det()
  {}
   det(int a)
    {
     bal=a;
     cout<<"\nyour initial amount is : "<<bal;
     cout<<"\n\n\n";
	}
static  int deposite(int d,class det *obj);
static  int withdraw(int w,class det *obj);
int validity(string uname)
{
	cout<<"Account Holder's name :"<<uname<<endl;
	cout<<"Your account is valid upto 24TH MARCH 2030\n\n";
}
};
class derived:public det
{
    public:
	int branchname()
	{
		cout<<"\n\nYour main branch address is \nORIENTAL BANK OF COMMERCE,shanti nagar,Hisar,Haryana\n";
	}
	
};
int det::bal=16000;


  int det::deposite(int d,class det *ob)
    {
     cout<<"\nYour initial amount is "<<bal;
     int ddr;
     ddr=d;
     int ad;
     ad=ddr+ob->bal;

  // cout<<"balance after deposite is : "<<ad;
	      return ad;
    }
  int det::withdraw(int w,class det *ob)
    {
    cout<<"\nYour initial amount is \n"<<bal;
    int wdr;
     wdr=w;
     int wd;
     wd=ob->bal-wdr;
     
     
      return wd;
     
    
    // cout<<"balance after withdraw is : "<<wd;
    
}

  int main()
  {
	     det ob;
      int r;
      char q;
      string na,ta;
     string pass ="";
     cout<<"\t\t\t\t\t\tWELCOME TO C++ BANK ATM"<<endl<<endl<<endl;
    
	  
	  int w;
      cout<<"Press any 2 digit number to check that you are not a robot\n";
      cin>>w;
      while(w>0)
      {
      cout<<"enter account holder name or insert your card\n";
      fflush(stdin);
      getline(cin,na);
      cout<<"enter type of account (independent or joint)\n";
      fflush(stdin);
      getline(cin,ta);
      if((ta=="independent")||(ta=="joint"))
      {
      cout<<"enter your four digit pass\n";
      
     // cin>>q;
      q = _getch();
       while(q != 13){//character 13 is enter
      pass.push_back(q);
      cout << '*';
      q = _getch();
   }
      
    
      det obj=det(q,na,ta);

if(pass=="1234")
{

  cout<<"\n\npress 1 for your initial amount\npress 2 for deposit cash\npress 3 for withdraw\npress 4 to check info\npress 5 to check branch and validity of account\n";
  int choice;
  cin>>choice;
  switch(choice)
   {
    case 1:
    {
	
      int x=16000;
      det obj=det(x);
      break;
}
    case 2:
{

      int dp,res;
      cout<<"enter the amount you want to deposite";
      cin>>dp;
     // det ob3=det(dp);
     res=  det::deposite(dp,&ob);
      cout<<"\namount after deposition"<<res;
      cout<<"\n\n\n";
	  break;
}
    case 3:

{
      int wp,resu;
      cout<<"enter the amount you want to withdraw";
      cin>>wp;
     // det ob4=det(wp);
      resu= obj.withdraw(wp,&ob);
      if(resu>0)
      {
      cout<<"\namount after withdraw"<<resu;
      }
      else
      {
      	cout<<"\nSorry! you dont have enough balance";
	  }
  
      cout<<"\n\n\n";
      break;
}
    case 4:
{
     cout<<"\nAccount holder's name is "<<na<<endl;
     cout<<"\nAccount type "<<ta;
      cout<<"\n";
	  det obj8=det(16000);

      break;
}
 
    case 5:
 {
		  	
	 derived d1;
	 d1.branchname();
	 d1.validity(na);
	 break;  
}
   }
 }

else
{
	cout<<"entered password is wrong*****you only have 2 more chances\n";
}
}
else
{
	cout<<"Wrong input for account type\n";
}
cout<<"\nPress any number to continue or press(0) to exit\n";
cin>>w;
}
 return 0;
  }



