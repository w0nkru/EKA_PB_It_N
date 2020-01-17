#include <iostream>
#include <windows.h>
#include <assert.h>

#define size 10000

using namespace std;

static __int64 gCountsPerSecond;


double max(double a, double b)
{
    if (a>b) return a;
    else return b;
}

void InitPerfTimer()
{
bool exists = QueryPerformanceFrequency((LARGE_INTEGER*)&gCountsPerSecond)!=0;
assert(exists);
}

double GetPerfTime()
{
__int64 numCounts;
QueryPerformanceCounter((LARGE_INTEGER*)&numCounts);
return (double)numCounts / (double)gCountsPerSecond; 
//parveido uz sekundem un atgriez rezultatu
}


int main()
{
  
   InitPerfTimer();
   double lastTime = GetPerfTime();
   
// sakums vietai kur jaliek kodu

   long a[size];
   for(long i=0;i<size;i++)
      a[i]=size-i;
      
   for(long k=0;k<size-1;k++)
   {
       for(long m=k+1;m<size;m++)
       {
           if(a[k]>a[m])
           {
               int t=a[k];
               a[k]=a[m];
               a[m]=t;
           }
       }
   }    
   
// beigas vietai kur jaliek kodu        

   double currTime = GetPerfTime();
   double deltaTime = max(0, currTime - lastTime);
   cout << deltaTime << endl;
   system("PAUSE");	
   return 0;
}
