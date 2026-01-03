#include <cstdio>

struct BaseClass
{
  int the_answer() const { return 42; }
  const char *member = "gold";

private:
  const char *hollistic_detective = "Dirk Gently";
};

struct DerivedClass : BaseClass
{
  void announce_agency()
  {
    // The next line does not compile
    // printf("%s's Holistic Detective Angency\n", hollistic_detective);
  }
};

int main()
{
  DerivedClass x;
  printf("The answer is %d\n", x.the_answer());
  printf("%s member\n", x.member);
}