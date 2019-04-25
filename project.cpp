#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

void drawline(char x='-',int n=80)
{
 cout<<endl;
 for(int i=0;i<n;i++)
 {
   cout << x;
 }
 cout<<endl;
}

void intro()
{

cout<<"\n\n\n\n\n";
cout<<"\t\t\t   DUKE'S BAKERY SHOP\n";
cout
<<"\n\t\t\t  _____        _               "
<<"\n\t\t\t |  __ \\      | |              "
<<"\n\t\t\t | |  | |_   _| | _____  ___   "
<<"\n\t\t\t | |  | | | | | |/ / _ \\/ __|  "
<<"\n\t\t\t | |__| | |_| |   <  __/\\__ \\  "
<<"\n\t\t\t |_____/ \\__,_|_|\\_\\___||___/  ";
cout<<"\n\n\n\n\nMADE BY : MANIK SOIN & PRIYANSH SHANDILYA";
cout<<"\n\nGROUP : 60";

}

void ClearScreen()
{
  cout << string( 100, '\n' );
}

struct date{
  int d;
  int m;
  int y;
};

date getDate()
{
  date x;
  string j = "";
  while ((j == "") || (j == "INVALID DATE"))
  {
    int dd, mm, yy;
    cout << "ENTER DATE: ";
    cin >> dd >> mm >> yy;
    if ((dd < 0) || (dd > 31) || (mm < 00) || (mm > 31) || (yy < 2019))
    {
      j += "INVALID DATE";
      cout << j << endl;
      j = "";
    }
    else
    {
      x.d = dd;
      x.m = mm;
      x.y = yy;
      break;

    }



  }

  return x;

}

date showDate(date x)
{
  cout << x.d << x.m << x.y <<endl;
}

int main()
{
  intro(); 
  drawline();

  date today = getDate();
  return 0;
  
}
