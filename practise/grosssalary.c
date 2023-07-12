#include<stdio.h>
void main()
{
    float gross,basic,hra,da;
    printf("enter basic:");
    scanf("%f",&basic);
    if(basic<=5000)
    {
         hra=basic*0.08;
          da=basic*0.20;
    }
    else if(basic<=10000)
    {
         hra=basic*0.12;
          da=basic*0.30;
    }
    else if(basic<=15000)
    {   
         hra=basic*0.15;
          da=basic*0.40;
    }
    else
    {
        hra=basic*0.20;
         da=basic*0.50;
    }
    gross=basic+hra+da;
    printf("_*_*_*_*_*_*_*hra:%f_*_*_*_*_*_*_*_",hra);
    printf("\n_*_*_*_*_*_da:%f_*_*_*_*_*_*_*_",da);
    printf("\n_*_*_*_*_*_gross:%f_*_*_*_*_*_*_*_",gross);
}
    
    
  
     