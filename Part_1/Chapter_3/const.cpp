#include <cstdio>

struct ClockOfTheLongNow
{
  ClockOfTheLongNow(int year_in)
  {
    if (!set_year(year_in))
    {
      year = 2019;
    }
  }
  ClockOfTheLongNow()
  {
    year = 2019;
  }

  void add_year()
  {
    year++;
  }

  bool set_year(int new_year)
  {
    if (new_year < 2019)
    {
      return false;
    }
    year = new_year;
    return true;
  }

  int get_year() const
  {
    return year;
  }

private:
  int year;
};

bool is_leap_year(const ClockOfTheLongNow &clock)
{
  if (clock.get_year() % 4 > 0)
    return false;
  if (clock.get_year() % 100 > 0)
    return true;
  if (clock.get_year() % 400 > 0)
    return false;
  return true;
};

int main()
{
  ClockOfTheLongNow clock(2400);
  printf("The year is %d\n", clock.get_year());

  if (is_leap_year(clock))
  {
    printf("%d is a leap year\n", clock.get_year());
  }
  else
  {
    printf("%d is a not leap year\n", clock.get_year());
  };
}