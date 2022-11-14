
#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   char id;
   for(int i=0;i<t;i++){
       cin>>id;
     switch(id){
         case 'B':
         case 'b': cout<<"BattleShip";
         break;
         case 'C': 
         case 'c': cout<<"Cruiser";
         break;
         case 'D':
         case 'd':cout<<"Destroyer";
         break;
         
         case 'F':
         case 'f': cout<<"Frigate";
         break;
     }
     cout<<endl;
   }

    return 0;
}

