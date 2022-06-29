#include<iostream>
#include <string.h>
#include<fstream>
using namespace std;


/*    
                   -------DEFENCE MANAGEMENT SYSTEM--------


Abdul Samad 19k-0158
Salman Sajid 19k-0196
Siadat ali  19k-1413


*/
class defence {
	protected :
		
		void virtual hdisplay () = 0 ;
	 //abstract class
	
};


class troops : protected defence { //# of troops

	protected : 
	int const no_troop = 2200 ;
	int x;
	
	
	public : 
 int virtual displays (int a){
	
	cout << "TOTAL NUMBER OF TROOPS  =";
	cout<<no_troop<<endl;   
    
	a = no_troop;
	return (a);
	 
	cout<<endl;                }	
};

class Rations : public defence ,public troops {
	protected :  
	
	int y ;
	int supp_art;
	int supp_eng;
	
	public : 
	
	 int rtdisplay(int a){
		
		cout<<"ENTER RATION IN KG =";//		cin>>x;
while (!(cin >> x))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }
		
	}
	
	virtual void httdisplay(){
		
		cout<< "\n\t          -----TOTAL SUPPLIES CALCULATION-----";
		cout<<endl;
		
		//enter ration
	
		supp_art = (40*x)/100;// calculating supplies to each division
		supp_eng = (20*x)/100;
	 	 	cout<<"TOTAL NUMBER OF RATION ALLOTTED TO ARTILLERY =";
		    cout<< supp_art<<" kg"<<endl;
		    cout<<"TOTAL NUMBER OF RATION ALLOTTED TO INFANTRY =";
		    cout<< supp_art<<" kg"<<endl;
		    cout<<"TOTAL NUMBER OF RATION ALLOTTED TO ENGINEER =";
		    cout<< supp_eng<<" kg"<<endl;
		    
		    
		    
	cout<<endl;	    
	}
	
	//operator overloading
	void  operator +(){
	cout<<endl<<"ADD MORE RATION IN KG =";
	//cin>>Rations::y;
	
	while (!(cin >>Rations::y))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }
	
	// for adding more ration
	Rations::x=Rations::x+Rations::y; //update = old ration + new ration 
	cout<<"NOW TOTAL RATION IS  ="<<Rations::x<<" kg"<<endl;
}
	
};




//siadt



class Ammo{
	
	public:
		int n_ammo;
		int A_get()
		{
			cout<<"Total Ammo is: "<<endl;
			return n_ammo;
		}
		void A_set(int a)
		{
			n_ammo=a;
		}
};
class Artillary: public virtual Ammo
{
	int a_ammo;
	public:
		int const Ac_get()
		{
			cout<<"Artilary Ammo is: "<<endl;
			return a_ammo;
		}
		void Ac_set(int a)
		{
			a_ammo=a;
		}
		void Div1(int x, Artillary &A, Artillary &B)
		{
			this->Ac_set(x/2);
			x=x/2;
			A.Ac_set(0);
			B.Ac_set(x);
			
		}
		
		
};
class Infantry: public virtual Ammo
{
	int i_ammo;
	public:
		int const ic_get()
		{
			cout<<"Infantry Ammo is: "<<endl;
			return i_ammo;
		}
		void ic_set(int a)
		{
			i_ammo=a;
		}
		void Div2(int x, Infantry &A, Infantry &B)
		{
			this->ic_set(x/2);
			x=x/2;
			A.ic_set(0);
			B.ic_set(x);
			
		}
		
};
class Engineers: public virtual Ammo
{
	int e_ammo;
	public:
		int const ec_get()
		{
			cout<<"Engineers Ammo is: "<<endl;
			return e_ammo;
		}
		void ec_set(int a)
		{
			e_ammo=a;
		}
		void Div3(int x, Engineers &A, Engineers &B)
		{
			this->ec_set(x/2);
			x=x/2;
			A.ec_set(0);
			B.ec_set(x);
			
		}
		
};




//siadt



class artillery : virtual public Rations  {
	 private :
	 	 int y=400; // number of troops in each class
	
};

class infantry : virtual public Rations {
	 private :
	 	int y=400; 
	
};

class engineer : virtual public Rations {
	 private :
	 	int y=200; 
	
};



class injured : public virtual artillery, public virtual infantry, public virtual  engineer {
	
        protected :
        int injd=250;
        int inj = 50;
        float rat_injd,rat_inj;
    
			public :
	int idisplay(int a , int b , int c){
		
		cout<<"TOTAL ARTILLERY INJURED TROOPS WE HAVE  =";
		cout<<injd<<endl;
        supp_art = (40*x)/100;
        cout<<"TOTAL INFANTRY INJURED TROOPS WE HAVE  =";
		cout<<injd<<endl;
		cout<<"TOTAL INJURED ENGINEER WE HAVE  =";
		cout<<inj<<endl;
        supp_eng = (20*x)/100;
        
        rat_injd = (supp_art*40)/100;
        rat_inj = (supp_eng*40)/100;
        
		cout << "TOTAL RATION ALLOTTED TO FOR INJURED ARTILLERY TROOPS  =";
		cout << rat_injd<<" kg"<<endl;
		cout << "TOTAL RATION ALLOTTED TO FOR INJURED INFANTRY TROOPS  =";
		cout << rat_injd<<" kg"<<endl;
		cout << "TOTAL RATION ALLOTTED TO FOR INJURED ENGINEERS  =";
		cout << rat_inj<<" kg"<<endl;
		cout<<endl;
		
			//calculating total
		
		rat_injd = rat_injd / injd;
		rat_inj = rat_inj / inj;
		
		a= rat_injd;
		b=a;
		c= rat_inj;
			//calculating for each 
		
		cout << "RATION ALLOTTED TO ONE INJURED ARTILLERY SOLIDER =";
		cout << rat_injd<<" Kg"<<endl;
		cout << "RATION ALLOTTED TO ONE INJURED INFANTRY SOLIDER =";
		cout << rat_injd<<" Kg"<<endl;
		cout << "RATION ALLOTTED TO ONE INJURED ENGINEERS =";
		cout << rat_inj<<" Kg"<<endl;
		cout<<endl;
		
		return (a,b,c);
		
		
	cout<<endl;
	}
};	 	

class service : public injured {
	protected :
	int serv = 600, ser=100 ;
	float rat_serv, rat_ser;
	public :
	int sdisplay(int a , int b , int c){
		
		cout<<"TOTAL ACTIVE ARTILLERY TROOPS WE HAVE  =";
		cout<<serv<<" kg"<<endl;
		cout<<"TOTAL ACTIVE INFANTRY TROOPS WE HAVE  =";
		cout<<serv<<" kg"<<endl;
		cout<<"TOTAL ACTIVE ENGINEER WE HAVE  =";
		cout<<ser<<" kg"<<endl;
		
		supp_eng = (20*x)/100;
		supp_art = (40*x)/100;
		rat_serv = (supp_art*30)/100;
		rat_ser = (supp_eng*30)/100;
		 
		 	//calculating total
		cout<<endl;
		cout << "TOTAL RATION ALLOTTED TO ACTIVE ARTILLERY TROOPS  =";
		cout << rat_serv<<" kg"<<endl;
		cout << "TOTAL RATION ALLOTTED TO ACTIVE INFANTRY TROOPS  =";
		cout << rat_serv<<" kg"<<endl;
		cout << "TOTAL RATION ALLOTTED TO ACTIVE ENGINEER  =";
		cout << rat_ser<<" kg"<<endl;
		cout<<endl;
		
		rat_serv = rat_serv / serv;
		rat_ser = rat_ser / ser;
		
		a=rat_serv;
		b=a;
		c=rat_ser;
		
			//calculating for each 
		cout << "RATION ALLOTTED TO ONE ACTIVE ARTILLERY SOLIDER  =";
		cout << rat_serv<<" kg"<<endl;
		cout << "RATION ALLOTTED TO ONE ACTIVE INFANTRY SOLIDER  =";
		cout << rat_serv<<" kg"<<endl;
		cout << "RATION ALLOTTED TO ONE ACTIVE ENGINEER  =";
		cout << rat_ser<<" kg"<<endl;
		cout<<endl;
		
		return (a,b,c);
		
	cout<<endl;
	}		
};
	 	
class holiday : public service {
	protected :
	int hol = 150 , holi=50; //  2200 = holdiay + inactive + active -> enginerr + infa + art
	float rat_hol, rat_holi;
	public :
	//overriding of an abstract class
	void hdisplay(){
		
		cout<<"TOTAL TROOPS FOR ARTILLERY WE HAVE ON LEAVE =";
		cout<<hol<<" kg"<<endl;
		cout<<"TOTAL ENGINEER WE HAVE ON LEAVE =";
		cout<<holi<<" kg"<<endl;
		cout<<"TOTAL TROOPS FOR INFANTRY WE HAVE ON LEAVE =";
		cout<<hol<<" kg"<<endl;
		cout<<endl;
		
		supp_art = (40*x)/100;
		supp_art = (20*x)/100;
		
		rat_hol = (supp_art*30)/100;
		rat_holi = (supp_eng*30)/100;
		//calculating total who are on holiday
		
		cout << "TOTAL RATION ALLOTTED TO ARTILLERY WE HAV FOR TROOPS ON LEAVE  =";
		cout << rat_hol<<" kg"<<endl;
		cout << "TOTAL RATION ALLOTTED TO INFANTRY WE HAV FOR TROOPS ON LEAVE  =";
		cout << rat_hol<<" kg"<<endl;
		cout << "TOTAL RATION ALLOTTED TO ENGINEER ON LEAVE  =";
		cout << rat_holi<<" kg"<<endl;
		cout<<endl;
		
		rat_hol = rat_hol / hol;
		rat_holi = rat_holi / holi;
	//calculating for each 
		
		cout << "RATION ALLOTTED TO ONE ARTILLERY SOLIDER ON LEAVE =";
		cout << rat_hol<<endl;
		cout << "RATION ALLOTTED TO ONE ENGINEER ON LEAVE =";
		cout << rat_holi<<endl;
		cout << "RATION ALLOTTED TO ONE INFANTRY SOLIDER ON LEAVE =";
		cout << rat_hol<<endl;
	
		cout<<endl;
	}

	 //friends function 
 friend void fun(holiday);
	
};

void fun(holiday){
	cout<<"HERE RATION ENDS FOR MILITARY"<<endl<<endl;
}


	
	
	//samad

class Vehicle{
	public:
		int y,y1;
	int z,r,fuel2;
	int costR=0;
	int Reserves;
	virtual int ReturnReserves(int y)
	{
	Reserves=100*10*y;

	
		return(Reserves);
	
	}
  int cost(int p3,int p4)//No.of cars and fueled required received
	{

	costR=(Vehicle::distance)*(p3)+(p4*24);//Operating cost for these vehciles for a particular distance*no of vehicles+(fuel*price of 1 gallon)
return(costR);                                 

	}
		int fuel(int p4)
	{

	fuel2=(((Vehicle::distance)*10)*p4);//no.of vehciles*fuel

		//cout<<"Fuel for Ration Vehicles =  ";
	//cout<<fuel2<<endl;
	return(fuel2);
}
		int distance;
		 int xa;
		 
			void getdata()
			 {
			 //	cin>>xa;
			 while (!(cin >> xa))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }
			 
			 
			 	
/*	if(xa==0)
	{
		throw"INVALID NUMBER ENTERED";
	}
	else if( xa<=99)
	{
		throw"MORE NUMBER OF VEHICLES NEEDED";
	}
	else
	
			 cout<<"Value Assigned to Vehicles Available !"<<endl;
			 cout<<endl;
			 
*/			 }
			 };
			 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Ration:public  Vehicle, public holiday{
	public: int y,y1,yy;
	int z,r,fuel2;
	int costR=0;
	int Reserves;

int no_needed()
	{   
	    
	    
		int y=((xa)/10);//10% cars needed for Raation
		yy=y;
		cout<<"Number of Vehicles Needed for Ration ="<<y<<endl;//output 
	
		xa=xa-y;//Minus from total cars alloted
	    yy=x/yy;
	    cout<<"Ration Allotted to each Vehicle  = "<<yy <<" kg";
        cout<<endl;
		
	
		cout<<"Remaing Vehicles Left After Ration = "<<xa<<endl;	//cars left for other departments
			z=xa;		//storing value in another variable to use the updated version in other classes
		
			return(y);
	}

};

class PassengerVeh:public Ration
{
	public:
		int fuel2;
	
		int p=0;int p2=0;
int	no_needed()
	{
//	cout<<Ration::z<<endl;
	p=(Ration::z)/10;//9
	cout<<"Number of Vehicles Needed for Troops ="<<p<<endl;//9
	Ration::z=Ration::z-p;//Minus
	cout<<"Remaing vehicles left after passengers= "<<Ration::z<<endl;	//81
	p2=Ration::z;
	return(p);
		
	}
};
class TentVeh:public PassengerVeh{
	public:
		float t,t2;
		int fuel2;
int	no_needed()
	{
//	cout<<PassengerVeh::p2<<endl;
	p=(PassengerVeh::p2)/10;//9
	cout<<"Number of Vehicles Needed for Tents ="<<p<<endl;
	PassengerVeh::p2=PassengerVeh::p2-p;
	cout<<"Remaing vehicles left after Tents= "<<PassengerVeh::p2<<endl;	
	p2=PassengerVeh::p2;
	return(p);
		
	}
		
};
class gunveh:public TentVeh , public Ammo {
		public:
			int g;
			float gg;
			int fuel2;

int	no_needed()
	{
	cout<<"\n "<<n_ammo<<endl;	
		
//	cout<<TentVeh::p2<<endl;
	p=(TentVeh::p2)/10;
	cout<<"Number of Vehicles needed for Guns ="<<p<<endl;

	TentVeh::p2=TentVeh::p2-p;
	gg=p;
	
	gg=n_ammo/gg;
	
	cout<<endl<<"Ammo Allotted to Each Gun Vehicle  : "<<gg;
	cout<<endl<<endl<<endl;
	
	
	cout<<"Remaing vehicles left after Tents= "<<TentVeh::p2<<endl;	
	p2=TentVeh::p2;
	cout<<endl;
	cout<<"Number of Cars which can be alloted to other uses :  "<<p2<<endl;
	return(p);
		
	}
	

		
			};
		
	 	
	//samad


int main (){
	
ofstream file;
	file.open("projext.txt",ios::app);
	file<<"                    WELCOME TO DEFENSE LOGISITCS REPORT       "
	<<endl
	<<endl
	<<endl;
	
int x,ReturnReserves_Ration,ReturnReserves_Passenger,ReturnReserves_Tent,ReturnReserves_Guns;
int b,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,f,f0,f1,f2,f3,f4,totalcost;	int costcal(int,int);
char a,again;
int static d1;

int agains;
gunveh g1;
	int pass,opp;
int s,s1,s2,s3,s4,s5,s6,s7;	
int w,w1,w2,w3,w4;

cout<<    "\t----------------------------------------------";
cout << "\n\t-----WELCOME TO DEFENCE MANAGEMENT SYSTEM----- ";	
cout<<    "\n\t----------------------------------------------"<<endl<<endl;	
cout<<"ENTER PASSWORD TO CONTINUE  (PASS = 786):";
cin>>pass;
cout<<endl;


if (pass!=786){
	cout<<"\n\n\t\tSORRY U CANT FURTHER PROCEED";
	exit (1);
}
int static xx; //static variable

w=g1.Rations::rtdisplay(s);// display fot the ration
cout<<"Enter Ammo  : ";
	//cin>>xx;
	
	while (!(cin >> xx))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }
	
	cout<<endl;
	g1.A_set(xx);
	//ammo input

	cout<< "DETAILS U WANNA KNOW ABOUT  :\n"<<endl;
	
	top:
		
	cout<<"Press 1 For Vehicles Distribution And Management :"; 
    cout<<endl;
    cout<<"Press 2 For Ration Allottement";                        
    cout<<endl;
    cout<<"Press 3 For Ammo Supplies";
    cout<<endl;
//	cin>>opp;

while (!(cin >> opp))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }


switch (opp){

case 1 :
{cout<<"Enter Distance To Be Travlled in Km:   ";
//cin>>x;
while (!(cin >> x))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
        
       
    }

g1.Vehicle::distance=x;
cout<<"Enter Number Of Vehicles available: (Minimum requried=100)    ";
try{
	 g1.Vehicle::getdata();
     
 }
 catch(const char* msg)
{
	cout<<msg<<endl;
}
y1=g1.Ration::no_needed();//no of vehicles returned
//cout<<"Value Returned = "<<y1<<endl;
y2=g1.Ration::fuel(y1);//(fuel needed in litres)
cout<<"Fuel for Ration Vehicles =  "<<y2<<" litres"<<endl;
y3=g1.Ration::cost(y1,y2);
cout<<"Cost of movement for Ration Vehicles = "<<y3<<endl;//(maintainance etc)
cout<<endl;
y4=g1.PassengerVeh::no_needed();//no of vehicles returned
//cout<<"Value Returned = "<<y4<<endl;
y5=g1.PassengerVeh::fuel(y4);//(fuel needed in litres)
cout<<"Fuel for Troop Vehicles =  "<<y5<<" litres"<<endl;
y6=g1.PassengerVeh::cost(y4,y5);
cout<<"Cost of movement for Troop Vehicles = "<<y6<<endl;//(maintainance etc)
cout<<endl;
y7=g1.TentVeh::no_needed();//no of vehicles returned
//cout<<"Value Returned = "<<y7<<endl;
y8=g1.TentVeh::fuel(y7);//(fuel needed in litres)
cout<<"Fuel for Tent Vehicles =  "<<y8<<" litres"<<endl;
y9=g1.TentVeh::cost(y7,y8);
cout<<"Cost of movement for Tent Vehicles = "<<y9<<endl;//(maintainance etc)
cout<<endl;
y10=g1.gunveh::no_needed();//no of vehicles returned
//cout<<"Value Returned = "<<y10<<endl;
y11=g1.Ration::fuel(y10);//(fuel needed in litres)
cout<<"Fuel for Gun Vehicles =  "<<y11<<" litres"<<endl;
y12=g1.Ration::cost(y10,y11);
cout<<"Cost of movement for Gun Vehicles = "<<y12<<endl;//(maintainance etc)

cout<<endl;
cout<<endl;

	Vehicle *v=new Ration();
	ReturnReserves_Ration=v->ReturnReserves(y1);//
		cout<<"Amount needed for Ration Vehicles Reserves =  ";
		cout<<ReturnReserves_Ration<<endl;

  Vehicle*v2=new PassengerVeh();
	ReturnReserves_Passenger=v2->ReturnReserves(y4);
		cout<<"Amount needed for Troop Vehicles Reserves =  ";
		cout<<ReturnReserves_Passenger<<endl;

 Vehicle*v3=new TentVeh();
	ReturnReserves_Tent=v3->ReturnReserves(y7);
	cout<<"Amount needed for Tent Vehicles Reserves =  ";
		cout<<ReturnReserves_Tent<<endl;
	
Vehicle*v4=new gunveh();
ReturnReserves_Guns=v4->ReturnReserves(y10);
cout<<"Amount needed for Guns Vehicles Reserves =  ";
		cout<<ReturnReserves_Guns<<endl;

cout<<endl;
 cout<<endl;
	cout<<"              Do you want to carry out Reserve Analysis? :            "<<endl;
	cout<<"               Press Y for yes and Press N for no      "<<endl;
//	cin>>a;

while (!(cin >> a))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }

	if(a=='y')
	{
			cout<<"Enter Number of days of Travel : ";
	//	cin>>d1;
	
	while (!(cin >> d1))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }
	
		do
    {
		cout << "\n\n Please proceed with the cost analysis:\n";
		cout<<endl;
	
    cout<<"Welcome to the Main Menu "<<endl;
    cout<<endl;
    cout<<"Press 1 to Calculate Cost of Ration Vehicles. "<<endl; 
    cout<<endl;
    cout<<"Press 2 to Calculate Cost of Passenger Vehicles. "<<endl;                        
    cout<<endl;
    cout<<"Press 3 to Calculate Cost of Tent Vehicles "<<endl;
    cout<<endl;
    cout<<"Press 4 to Calculate Cost of Gun Vehicles "<<endl;
    cout<<endl;
    cout<<"Press 5 to Calculate Total Cost "<<endl;
     
	 //cin>>b;
     
     while (!(cin >> b))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }
     switch(b)
    {
    cout<<"______________"<<endl;
    case 0:
    break;
    case 1:
         cout<<"   *                                 *"<<endl;
         cout<<" * Welcome to the Ration Vehicle Accounts *"<<endl;
         cout<<"   *                                 *"<<endl;
         cout<<endl;
         cout<<endl;
         f0=costcal(ReturnReserves_Ration,d1);
         
      cout<<"Your Reserve Amount for Ration Vehicles will be :  "<<f0<<endl;
        file<<"Your Reserve Amount for Ration will be "
         <<f0
         <<endl;
        break;
          case 2:
         cout<<"   *                                            *"<<endl;
         cout<<"  * Welcome to the Passenger Vehicles Accounts   *"<<endl;
         cout<<"   *                                            *"<<endl;
         cout<<endl;
         cout<<endl;
         f=costcal(ReturnReserves_Passenger,d1);
        cout<<"Your Reserve Amount for Passenger Vehicles will be :  "<<f<<endl;
        file<<"Your Reserve Amount for Passengers :"
        <<f
        <<endl;
         
         break;
         case 3:
         cout<<" *                                    *"<<endl;
         cout<<"* Welcome to the Tent Vehicles Account *"<<endl;
         cout<<" *                                    *"<<endl;
         cout<<endl;
         cout<<endl;
         f1=costcal(ReturnReserves_Tent,d1);
         cout<<"Your Reserve Amount for Tent Vehicles will be :  "<<f1<<endl;
         file<<"Your Reserve Amount For Tent Vehicels :  "
         <<f1
         <<endl;
       
          break;          
         case 4:
         cout<<"   *                                         *"<<endl;
         cout<<"  * Welcome to the Guns Vehicle Account       *"<<endl;
         cout<<"   *                                         *"<<endl;
         cout<<endl;
         cout<<endl;
         f2=costcal(ReturnReserves_Guns,d1);
         cout<<"Your Reserve Amount for Guns Vehicles will be :  "<<f2<<endl;
         file<<"Your Reserve Amount for Gun Vehicles will be :  "
          <<f2
          <<endl;
		  ;
         break;
          case 5:
         cout<<"                                      "<<endl;
         cout<<"  Calculating Total Amount Needed  ...  "<<endl;
         cout<<"                                      "<<endl;
         cout<<endl;
         cout<<endl;
         totalcost=ReturnReserves_Ration+ReturnReserves_Passenger+ReturnReserves_Tent+ReturnReserves_Guns;
         f3=costcal(totalcost,d1);
          cout<<"Your Reserve Amount for All Vehicles will be :  "<<f3<<endl;
          file<<"Your Reserve Amount for All Vehicles will be :  "
          <<f3 
          <<endl;
          break;
          default:
                 cout<<"you have enter an invalid Choice "<<endl;
                 cout<<endl;
                 }
                 cout<<endl;
                 cout<<endl;
                
cout<<"Press 1 to go back into MAIN Menu or any other key to terminate the program: ";                    
//cin>>again;

while (!(cin >> again))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }

cout<<"_____________"<<endl;
cout<<endl;
}
while (again=='1');   
          

         
         
	

}
	else{cout<<endl;
	}
	
	
	
	
	
	
    file<<endl
        <<endl
        <<" FOLLOWING DETAILS REGARDING VEHICLE WERE CALCULATED : "
        <<endl
        <<"Vehcles required for Transporting Ration : "
		<<y1
		<<endl
        <<"Vehcles required for Transporting Troops : "
		<<y4
		<<endl
		<<"Vehicles required for Transporting Tents : "
		<<y7
		<<endl
		<<"Vehcles required for Transporting Guns :  "
		<<y10
		<<endl
		<<endl
		<<"Fuel Needed for Transporting Ration :     "
		<<y2
		<<" litres"
		<<endl
		<<"Fuel Needed for Transporting Troops :     "
		<<y5
		<<" litres"
		<<endl
		<<"Fuel Needed for Transporting Tents :      "
		<<y8
		<<" litres"
		<<endl
		<<"Fuel Needed for Transporting Guns :       "
		<<y11
		<<" litres"
		<<endl
		<<endl
		<<"Cost of movement for Ration Vehicles =    " 
		<<y3
		<<endl
		<<"Cost of movement for Passenger Vehicles = " 
		<<y6
		<<endl
		<<"Cost of movement for Tent Vehicles =      " 
		<<y9
		<<endl
		<<"Cost of movement for Gun Vehicles =       " 
		<<y12
		<<endl;
	

         
	

}
	
	
	
	
	
break;
	
case 2 :
	
 {
 g1.httdisplay();
    +g1;// operator overloading
    
  w1=  g1.displays(s1);// troops display
    
    int static aa;
    up:
    	
    cout<< "\nPress 1 to display troops in service  "<<endl;
    
    cout<< "Press 2 to display troops on holiday  "<<endl;
    
    cout<< "Press 3 to display troops which are injured  "<<endl;
 
    cin>>aa;
    switch (aa){
	
	
	
	
 case 1 :   
    
w2=	g1.sdisplay(s2,s3,s4);// display for the troops in service
    cout<<endl;
    
	break ; 
  
 case 3 :    
    
w3= g1.idisplay(s5,s6,s7); // display for the troops which are injured
	cout<<endl;
	
	break ;
	
 case 2 :
 	
	g1.hdisplay(); //for the troops on holiday
	cout<<endl;
	
	break;
}
cout<<"Press 1 to go back to Same Menu or any other key to terminate: ";                    
//cin>>agains;

while (!(cin >> agains))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
       
    }



if(agains == 1){
	goto up;
}}	
 cout<<"Press 1 to go back into MAIN Menu or any other key to terminate: ";                    
cin>>agains;
if(agains == 1){
	goto top;
} else




        file<<endl
        <<" FOLLOWING DETAILS REGARDING RATION AND TROOPS : "
        <<endl
        <<"TOTAL RATION  : "
		<<w
		<<endl
        <<"TOTAL TROOPs  : "
		<<w1
		<<endl
		<<"TOTAL TROOPS IN SERVICES : "
		<<w2
		<<endl
		<<"TOTAL TROOPS INJURED : "
		<<w3
		<<endl











;

 break;

	

case 3 :

int div1,div2,div3;
	

	cout<<g1.A_get()<<endl;
	Artillary a_ser, an_ser, a_inj;//other objects 
	Engineers e_ser, en_ser, e_inj;
	Infantry i_ser, in_ser, i_inj;
	xx=xx/3;//calculation
	div1=xx;
	xx=xx/3;
	div2=xx;
	xx=xx/3;
	div3=xx;
	a_ser.Div1(div1,an_ser,a_inj);
	e_ser.Div3(div3,en_ser,e_inj);
	i_ser.Div2(div2,in_ser,i_inj);
	
	cout<<endl;
	
	int static ab;
	ups:
	
    cout<< "Press 1 to display Ammo of Artillary  "<<endl;
    cout<< "Press 2 to display Ammo of Engineer   "<<endl;
    cout<< "Press 3 to display Ammo of infantry   "<<endl;
	cin>>ab;
	
	switch (ab){
	
	case 1:
	
    cout<<"\t\t****Artilary Ammo is****\n"<<endl;
    cout<<"\t\t****Artilary Ammo is****\n"<<endl;
	cout<<a_ser.Ac_get()<<"	"<<"\n FOR serving Artillary \n"<<endl;
	cout<<an_ser.Ac_get()<<"	"<<"\n FOR non-serving Artillary \n"<<endl;
	cout<<a_inj.Ac_get()<<"	"<<"\n FOR Injured Artillary \n"<<endl;
	cout<<endl;
	
	break;
	
	case 2:
		
	cout<<e_ser.ec_get()<<"	"<<"For serving Engineers"<<endl;
	cout<<en_ser.ec_get()<<"	"<<"For non-serving Engineers"<<endl;
	cout<<e_inj.ec_get()<<"	"<<"For Injured Engineers"<<endl;
	cout<<endl;
	
	break;
	
	case 3:
	cout<<i_ser.ic_get()<<"	"<<"For serving Infantry"<<endl;
	cout<<in_ser.ic_get()<<"	"<<"For non-serving Infantry"<<endl;
	cout<<i_inj.ic_get()<<"	"<<"For Injured Infantry"<<endl;
    cout<<endl;
    
    break;

}

cout<<"Press 1 to go back to Same Menu or any other key to terminate: ";                    
cin>>agains;
if(agains == 1){
	goto ups;
}	

 break;
	
} 


cout<<endl;
         
         cout<<"Press 1 to go back into MAIN Menu or any other key to terminate: ";                    
cin>>agains;
if(agains == 1){
	goto top;
}
else 
	

	cout<<endl;
	
	
cout<<"Thank you for using the defense system"<<endl;
cout<<"We shall proceed further"<<endl;


cout<<endl;	
cout<<"\t-----BY ABDUL SAMAD ------";
cout<<endl;  
cout<<"\t-----  SALMAN SAJID ------";
cout<<endl;
cout<<"\t-----  SIADAT ALI   ------";	  
	 
	 return 0;
	 
}


// function declarion outside the scope
	int costcal(int x,int y)
	{
		int cost;
		cost=x*10*y;
		return cost;
		
	}
	

