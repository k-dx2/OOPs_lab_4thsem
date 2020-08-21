#include<iostream>

using namespace std;
enum mon {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

class date
{
  int day;
  mon month;
  int year;

  date()
  {
  day=1;
  month=Jan;
  year=2000;

  }
  date(int x=1,mon y=Jan,int z=2000)
  {
  day=x;
  month=y;
  year=z;

  }

  void readDate()
  {
    cin>>day>>month>>year;
  }
  void displayDate()
  {
    cout<<day<<month<<year;
  }

  date & diffOfDate(date &d)
  { date t;
    t.year=year-d.year-1;
    if(month<b.month)
    {
      t.month=12+month-b.month;

    }
    else
    t.month=month-b.month;

    if(day<b.day)
    {
      t.day=day+30-b.day;
    }

    else

      t.day=day+30-b.day;
  }

}
