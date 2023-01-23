#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
//#include <unistd.h>
#include <dos.h>
#include <iomanip> 
#include <windows.h>
#include <string>
#include <time.h>
#include <ctime>

// included required library files
using namespace std;
class customer // customer class
{
	private:
	public:
	string customername;
    string carmodel;
    string driving_license_no;
    
    //char data;
    // variables defined in this class in public mode.
};
class rent : public customer // inherited class from customer class
{
	public:
	int days=0,rentalfee=0;
	string date;
	char choice;
	int invoice=1+rand()%1000;
	void data()
	{
		int login();
		login();
		cout << "\t\t\t\tPlease enter customer name: "; //taking data from the user
    	cin >> customername;
    	cout<<endl;
    	cout<<"\t\t\t\tPlease enter customer driving license number: ";
    	cin>>driving_license_no;
    	cout<<endl;
    	do
    	{
    		system("CLS");
        	cout <<"\t\t\t\tPlease Select a Car"<<endl; //giving user a choice to select among three different models
        	cout<<"\t\t\t\tEnter 'A' for Tesla."<<endl;
        	ifstream inA("Tesla.txt");
        	char str[200];
         		while(inA) 
		 		{
         			inA.getline(str, 200);  
         			if(inA) cout << str << endl;
		 		}
		 		cout<<"\n\n";
        	cout<<"\t\t\t\tEnter 'B' for Hyundai."<<endl;
        	ifstream inB("Hyundai.txt"); //displaying details of model B
         		char str1[200];
         		while(inB) 
				{
         			inB.getline(str1, 200);  
         			if(inB) cout << str1 << endl; 
     			}
     			Sleep(2);
     			cout<<"\n\n";
        	cout<<"\t\t\t\tEnter 'C' for Ford."<<endl;
        		ifstream inC("Ford.txt"); //displaying details of model C
         		char str2[200];
         		while(inC) 
				{
         			inC.getline(str2, 200);  
         			if(inC) cout << str2 << endl;
     			}
     			Sleep(2);
     			cout<<"\n\n";
       	 	cout<<endl;
        	cout<<"\t\t\t\tChoose a Car from the above options: ";
        	cin >>carmodel;
        	cout<<endl;
 			cout<<"--------------------------------------------------------------------------"<<endl;
 			if(carmodel=="A" || carmodel=="a")
 			{
 				system("CLS");
				cout<<"You have choosen Tesla"<<endl;
		 		ifstream inA("A.txt"); //displaying details of model A
         		char str[200];
         		while(inA) 
		 		{
         			inA.getline(str, 200);  
         			if(inA) cout << str << endl;
		 		}
				Sleep(2);
  		 	}
  			if(carmodel=="B" || carmodel=="b")
  			{
  				system("CLS");
				cout<<"You have choosen Hyundai"<<endl;
		 		ifstream inB("B.txt"); //displaying details of model B
         		char str[200];
         		while(inB) 
				{
         			inB.getline(str, 200);  
         			if(inB) cout << str << endl; 
     			}
     			Sleep(2);
 			}
 			if(carmodel=="C" || carmodel=="c")
 			{
 				system("CLS");
	     		cout<<"You have choosen Ford"<<endl;
		 		ifstream inC("C.txt"); //displaying details of model C
         		char str[200];
         		while(inC) 
				{
         			inC.getline(str, 200);  
         			if(inC) cout << str << endl;
     			}
     			Sleep(2);
			}  
			
			if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="a" && carmodel !="b" &&  carmodel !="c")
      			cout<<"Invaild Car Model. Please try again!"<<endl;		
      		else
      		{
      			cout<<endl;
    			cout<<"Do you want to choose another car(Y/N)...."<<endl;
    			
    			cin>>choice;
    			if(choice=='N' || choice=='n')
    				break;
      		}
        }while((carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="a" && carmodel !="b" &&  carmodel !="c") || (choice=='Y' || choice=='y'));
    		
			cout<<"--------------------------------------------------------------------------"<<endl;
    		
    		
			cout << "Please provide following information: "<<endl; 
	//getting data from user related to rental service

    		cout<<"Number of days you wish to rent the car : ";
    		cin >> days;
    		cout<<endl;
    		cout<<"From which date you need the car(dd/mm/yyyy): ";
    		cin>>date;
    		cout<<endl;
	}
	void calculate()
	{
		Sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		Sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*750;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*650;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*550;
    }
void showrent()
    {
    	string car="";
    	if(carmodel=="A" || carmodel=="a")
    		car="Tesla";
    	else if(carmodel=="B" || carmodel=="b")
    		car="Hyundai";
    	else
    		car="Ford";
    	int carnumber=rand()%100;
    	
    	
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb"<<invoice<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Driving license number:"<<"--------|"<<setw(10)<<driving_license_no<<" |"<<endl;
    cout << "\t\t	| Car Name :"<<"---------------------|"<<setw(10)<<car<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<"CG-AP-"<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Car required from :"<<"------------|"<<setw(10)<<date<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Security money :"<<"---------------|"<<setw(10)<<"5000"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<rentalfee/2<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t   \t| Amount Due is :"<<"----------------|"<<setw(10)<<rentalfee-rentalfee/2<<" |"<<endl;
	cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoice and it does not"<<endl;
    cout << "\t\t	 require an authorised signature #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date which\n\t\t\t is two days after giving the car back."<<endl;
    cout << "\t\t	Otherwise penalty fee of Rs 150/day will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  
  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome 
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt"); //displaying welcome ASCII image text on output screen fn1353
	Sleep(3);
  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000); 
	 // delim defaults to '\n' cp
    if(in) cout << str << endl;
  }
  system("pause");
  Sleep(3);
  in.close();
  Sleep(5);
  cout<<"\nStarting the program please wait....."<<endl;
  Sleep(5);
  cout<<"\nloading up files....."<<endl;
  Sleep(5); //function which waits for (n) seconds
  system ("CLS"); //cleares screen
}

};
int main()
{
	srand(time(NULL));
welcome obj1; //object created for welcome class
obj1.welcum(); //welcum function is called
rent obj2; 
//object created for rent class and further member functions are called
obj2.data();
obj2.calculate();
obj2.showrent();

return 0; //end of the program
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = getch();
   while(ch != 13)
   {
   		if(ch==8 && !pass.empty())
		{
   			pass.resize(pass.size()-1);
   			cout<<"\b \b";
   			ch = getch();
	   	}
   		else
	   	{
      		pass.push_back(ch);
      		cout << '*';
      		ch = getch();
  		}
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

