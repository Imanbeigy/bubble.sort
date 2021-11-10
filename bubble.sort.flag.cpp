#include <iostream>
using namespace std;
int main()
{
		int i, j, flag = 1;    // set flag to 1 to start first pass
   		int num[5]={3,4,5,6,2};
        int numLength = 5; 
      for(i = 0; (i < numLength) && flag; i++)  //if flag becomes 0 then sorting stops
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               int hold;
			   if (num[j+1] > num[j])      // ascending order simply changes to <
              { 
                    hold=num[j];             // swap elements
                	num[j]=num[j+1];
                	num[j+1]=hold;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
		for(int i = 0; i < 5 ; i++)
		{
			cout<<"num["<<i<<"] = "<<num[i]<<endl;
		}
		return 0;
}