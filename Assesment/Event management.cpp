#include<iostream>
using namespace std;
class event
{
    public:
    string eventname,Firstname,Lastname;
    int guestno,min;
    int getdata()
    {
        cout<<"********************Event Management System********************"<<endl;
        cout<<"Enter the name of event"<<endl;
        cin>>eventname;
        cout<<"Enter the customer's First name and Last name"<<endl;
        cin>>Firstname;
        cin>>Lastname;
        cout<<"Enter the number of guest"<<endl;
        cin>>guestno;
        cout<<endl<<"Enter the number of minutes in the event"<<endl;
        cin>>min;
        return 0;
    }
    
};
class estimate : public event
{
    public:
    int numberofserver;
    float cost , cost1 , cost2 , totalcostserver , TotalFoodCost , averagecost , Totalcost , percentage;
    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostPerDinner = 20.70;

    int showdata()
    {
         numberofserver=guestno/20;

         cost1 = (min/60) * CostPerHour;
         cost2 = (min%60) * CostPerMinute;
         cost = cost1 + cost2;                                 
         totalcostserver = cost * numberofserver;                     //total Cost for server

         TotalFoodCost = guestno * CostPerDinner;               //Total cost food

         averagecost = TotalFoodCost/guestno;                       //Average cost per person

         Totalcost = totalcostserver + TotalFoodCost ;

         percentage = (Totalcost*25)/100;

         cout<<"====================*Event estimate for :"<<Fname<<Lname<<"*===================="<<endl;
         cout<<"Number of Servers : "<<numofserver<<endl;
         cout<<"The cost for Servers : "<<ttlcostserver<<endl;
         cout<<"The Cost for Food is: "<<TotalFoodCost<<endl;
         cout<<"Average Cost Per Person: "<<avgcost<<endl;
         cout<<"Total cost is :"<<Totalcost<<endl;
         cout<<"Please deposit 25% deposit to reserve the event "<<endl;
         cout<<"The deposit needed is : "<<percentage;
         return 0;
    }
};

int main()
{
    estimate obj1;
    obj1.getdata();
    obj1.showdata();
    return 0;
}
