#include <cstdio>

struct BaseClass
{
  virtual const char *final_message() const = 0;
};

struct DerivedClass : BaseClass
{
  const char *final_message() const override
  {
    return "We apologize for the inconvienence.";
  }
};

int main()
{
  // BaseClass base; - won't compile
  DerivedClass derived;
  BaseClass &ref = derived;
  printf("DerivedClass: %s\n", derived.final_message());
  printf("BaseClass&:   %s\n", ref.final_message());
}