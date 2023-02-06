#include <iostream>

using namespace std;

int main ()
{
  char event_name[50];
  char customer_name[50];
  int num_guest;
  int event_min;
  int num_server;
  int cost_one_server;
  const double CostPerHour = 18.50;
  const double CostPerMinute = .40;
  const double CostOfDinner = 20.70;
  double cost1, cost2;
  double TotalFoodCost, AverageCost, TotalCost;
  double DepositAmount;

  cout << "*******Event Management System*******";
  cout << endl << endl;

  cout << "enter the name of the event";
  cout << endl;
  //cin >> event_name;
  fgets (event_name, 100, stdin);

  cout << "enter the customer's first and last name";
  cout << endl;
  //cin >> customer_name;
  fgets (customer_name, 100, stdin);

  cout << "enter the number of guests";
  cout << endl;
  cin >> num_guest;

  cout << "enter the number of minutes in the event";
  cout << endl;
  cin >> event_min;
  cout << endl;

  cout << "================Event Estimate For : Rakesh Kharva===============";
  cout << endl << endl;

  num_server = num_guest / 20;
  cout << "Number of Servers : ";
  cout << num_server;
  cout << endl;

  cost1 = (event_min / 60) * CostPerHour;
  cost2 = (event_min % 60) * CostPerMinute;
  cost_one_server = cost1 + cost2;
  cout << "The Cost For Servers : ";
  cout << cost_one_server;
  cout << endl;

  TotalFoodCost = num_guest * CostOfDinner;
  cout << "The Cost For Food is : ";
  cout << TotalFoodCost;
  cout << endl;

  AverageCost = TotalFoodCost / num_guest;
  cout << "Average Cost Per Person : ";
  cout << AverageCost;
  cout << endl;

  TotalCost = TotalFoodCost + (cost_one_server * num_server);
  cout << "Total Cost is : ";
  cout << TotalCost;
  cout << endl;

  DepositAmount = TotalCost * .25;
  cout << "Please Deposit a 25% Deposit to Reserve The Event";
  cout << endl;
  cout << "The Deposit Needed is : ";
  cout << DepositAmount;


  return 0;

}
