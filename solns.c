/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[], int n)
{  int m = x[0];
   for(int i=1;i<n;i++){
      if( m<x[i]{ 
         m=x[i];
      }
   }
 return m;
}

int min(int x[], int n)
{ int l =x[0];
  for( int i=1;i<n;i++){
     if(l>x[i]){
       l=x[i];
     }
  }
 return l;
}

float average(int x[],int n)
{  int sum=0;
    for(int i=0;i<n;i++)
    { sum += x[i];
    }
   float avg = (float)sum/n;
    return avg;
}

int mode(int x[],int n)
{  int mode=0;
    int c=0;
   for(int i=0;i<n;i++)
   { int count=0;
     for(int j=0;j<n;++j)
     { if(x[j]==x[i])
            ++count;
     }
     if(count>c)
     { c=count;
       mode=x[i];
     }
     }
   return mode;
}

int factors(int n,int x[])
{ int count;
  int j=0;
   for(count=2;n>1;count++){
     while(n%count==0)
     { x[j++]=count;
       n=n/count;
     }
   }
 return j;
}


     
 
