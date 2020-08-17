#include <iostream>

int simba() {
  int dog_age=7;//Simba's age in human years by time of death
  int early_years;//Dog's first two years
  int later_years;//Dog's folloming years
  int human_years;//Dog's total human years
  
  //The first two years of a dog’s life count as 21 human years.Each following year counts as 4 human years.:
  early_years=21;
  later_years=(dog_age-2)*4;

  human_years=early_years+later_years;//Human years is the sum of early_years and later_years(reference to this code).
  std::cout<<"My name is Bill! Ruff ruff, I am "<<human_years<<" years old in human years.\n";
}
