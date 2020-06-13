
#include <iostream>
#include <iomanip> 
using namespace std;


// gobal variables 
string firstname ;
string lastname ;
string username ;
// new client account user client data 
string client_name [3];
string client_lastname[3];
int client_number ;


    string name;
	float balance ;
	float deposite;
	float withdraw ;
	int option;
	

void input_value() {
	cout << " Aplication has been lunched for the first time please create an admin user I.D first to process....\n" ;
	cout<< "Please enter to continue ..... \n ";
    cin.get();
    system("CLS");
   cout << "====== Admin accout Menu ======== \n This menu creates username of admin users of bank staff \n please enter the following information 	\n";
   cout << "Enter First Name of Admin user: ";
   cin  >> firstname;
   cout << "Enter Last Name of Admin user: " ;
   cin >> lastname;
   cout << " \n";
   char firstletter = firstname.at(0);
    username = firstletter+lastname ;
   cout << "User name for admin user is : " << firstletter<<lastname << "\n";
   cout << "Press enter to continue.............." ;
   cin.get();
   
    
}

 // this  function allow the user to create a new account 
 int Create_New_Account()
		{
				cout << " ============= New Account Menu  ================\n\n" ;
           		 cout<< "Enter  first name : " ;		
			    cin >> client_name[0];
			    cout << "Enter Last name : " ;
			    cin>> client_lastname[0] ;
			    cout << " Account has been Created!\n"  ;	
			    client_number += 100;
			
			        cout << "Accout Number for this client is " << client_number << "\n";
			        cout << "Press Enter to return to main menu ..." ;
			       cin.get();
			}

		// this function is for cheking balance 
int Checking_Blance ()
		{
			cout << " ============= check Balance  ================\n\n" ;
			int account_number;
			cout<< "Enter  the Account Number : " ;
			cin >> account_number ;
			
			if(account_number == 1000){
				cout << "Account name is " << client_name[0] <<  " " << client_lastname[0] << "\n";
				cout << "Your Balance is " << balance << "\n" ;
				cout << "Press Enter to return to main menu ..." ;
			   cin.get();
			}else if(client_number == account_number){
				cout << "Account name is " << client_name[1] <<  " " << client_lastname[1] << "\n";
				cout << "Your Balance is " << balance << "\n" ;
				cout << "Press Enter to return to main menu ..." ;
			   cin.get();
				
			}else{
				cout << "the account isn't found  " ;
				cout << "Press Enter to return to main menu ..." ;
			    cin.get();
			}
			
			}
			

int depos(){
	int input_number;
			cout << " ============= Deposite Menu ================\n\n" ;
			
			cout<< "Enter  Account number : " ;
			cin  >> input_number;
			// we are checking here whahter the input number is match with client number 
			if(client_number ==input_number ){
				cout<< " Current balance is " << balance << "\n";
				cout << "Enter Amount to Desposite : ";
				cin >> deposite;
				balance += deposite;
				cout << "Your new Balance is " << balance << "\n"; 
				cout << " Press Enter to return to Main Menu .. " ;
				cin.get();
			}else{
				cout<< "Accout Not found ..\n" ;
				cout<< " Press enter to return to Main Manu..." ;
				cin.get();
			}
			
			
			
			}
			
// this is out fourth option in the main menu which enable the user to withdraw the money
int  Withdraw_Money ()
		{
			int input_number;
			cout << " ============= Withdraw Menu ================\n\n" ;
			cout<< "Enter  Account number : " ;
			cin  >> input_number;
			// we are checking here whater the input number is match with client number 
			if(client_number == input_number ){
				cout<< "Accout number  is " << input_number << " \n" ;
				cout<< "Accout name is " << client_name[0] + client_lastname[0] << "\n";
				cout<< " Your balance is " << balance << "\n\n";
				cout << "Enter Amount to withdraw : ";
				cin >> withdraw;
				if(withdraw > balance){
					cout << "Sorry You Donot have that amount of balance " ;
				}else{
					balance -= withdraw;
				    cout << "Your new Balance is " << balance << "\n"; 
				    cout << " Press Enter to return to Main Menu .. " ;
				    cin.get();
				}
				
						
			}else{
				cout<< "Accout Not found ..\n" ;
				cout<< " Press enter to return to Main Manu..." ;
				cin.get();
			}
			}	
		
int main(){
	// calling the functiom 
      input_value() ;
      balance = 500; // default amount
	  client_number = 1000; // default number 
	  
// i have provide the options displayed here while the option is not 5 
// the do while loop is going to run / loop
	
do {
	cin.get();
   system("CLS");
   cout << " Logged in as : " << username  << "\n";
   cout << "============================== Main Menu ================================ \n\n " ;
   cout << "================== choice from the following option ====================\n" ;
   cout<< " \n 1 .Create a new Account for new client \n 2. Check account balance by account number \n 3. Cash deposite \n 4. Withdraw cash \n 5. Exist program.\n ";
   cout<< "============= Note : First Client Account number is " << client_number << " ================\n";
   cout << "enter your option :" ;
   cin >> option ;
     
   
  
  switch(option){
  	case 1 :
  		system("CLS");
  		Create_New_Account();
  		break;
  	case 2:
  		system ("CLS"); 
  		Checking_Blance();
  		break;
  	case 3:
  		system ("CLS"); 
  		depos();
  		break;
  	case 4:
  		system("CLS");
  		Withdraw_Money();
		break;
  	dufault:
  		if(option != 6){
  			cout << "\n\t Invalid option .Please try again "<< endl;
		  }
  		break;
  }
  
   }while(option !=5);	
	
	system("pause");
	return 0;
}

