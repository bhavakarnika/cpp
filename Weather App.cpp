/*
PROJECT NAME:WEATHER APP
NAME:A.BHAVAKARNIKA
COLLEGE:VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN

USED DATA:
*EMAIL 
*LOCATION
*WEATHER REPORT TIMING (TODAY/TOMORROW/YESTERDAY/WEEKLY REPORT) 
*TEMPERATURE AND CLIMATE

METHODS USED:
          *IF 
          *ELSE 
          *ELSE IF 
*/

#include <iostream>
using namespace std;
int main()
{
    string email;
    string location;
    int x;
    cout<<"HOW MANY DEGREES IS IT OUTSIDE TODAY?";
    cin>>x;
    
    
    if(x>75)
    
    {
       
        cout<<"YOU DO NOT NEED A SWEATER TODAY"<<endl;
    
    }
    else if(x<75 && x>40)
    
    {
        cout<<"YOU NEED A SWEATER TODAY"<<endl;
        
    }
    else
    {
        cout<<"YOU NEED A BIG SWEATER TODAY AND SOME GLOVES TO WEAR"<<endl;
        
        
    }
    
    
    string y;
    cout<<"\n\n IS IT RAINING OUTSIDE?";
    cin>>y;
   
    if(y=="yes")
    {
    cout<<"YOU NEED AN UMBRELLA TODAY"<<endl;
    }
    
    else
    {
        cout<<"YOU DO NOT NEED AN UMBRELLA TODAY"<<endl;
    }
    
    cout<<"\n PROJECT DONE BY A.BHAVAKARNIKA"<<endl;
    
}

