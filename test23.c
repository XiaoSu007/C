#include <stdio.h>

int main() {
    int year,mon,day;
    int Nyear,Nmon,Nday;
    int N=0;
    scanf("%d %d %d",&year,&mon,&day);
    scanf("%d %d %d",&Nyear,&Nmon,&Nday);
    
    for (;year < Nyear || (year == Nyear && (mon < Nmon || (mon == Nmon && day < Nday)));day++,N++)
    {    
        if ((mon==1 ||mon==3 ||mon==5 ||mon==7 ||mon==8 ||mon==10 ||mon==12) && day == 32)
        {
            
                day=1;
                mon++;
            
        }
        if ((mon==4 ||mon==6 ||mon==9 ||mon==11) && (day == 31))
        {
            
                day=1;
                mon++;
            
        }
        if (mon == 2)
        {
            if (((year%4 == 0 && year%100 != 0) || year % 400 == 0)&&(day == 30))
            {
                
                    day=1;
                    mon++;
                
            }
            else
            {
                if (day == 29)
                {
                    day=1;
                    mon++;
                }
                                
            }
        }
          if(mon > 12)
        {
            mon=1;
            year++;
        }          
        
    }
                
            
    printf("%d\n",N);
    return 0;
}
