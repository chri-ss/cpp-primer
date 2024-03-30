#include <iostream>
#include "../ch02/Sales_data.h"
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

void printSalesData() {
  // read a set of book sale transactions and print them
  Sales_data data;
  double price = 0;
  while (cin >> data.bookNo >> data.units_sold >> price) {
    data.revenue = data.units_sold * price;
    cout << data.bookNo << " " << data.units_sold << " " << data.revenue
         << endl;
  }
};

void addSalesData() {
  // read two transactions and if they share the same ISBN
  Sales_data item1;
  Sales_data item2;
  int price;

  cin >> item1.bookNo >> item1.units_sold >> price;
  item1.revenue = item1.units_sold * price;
  cin >> item2.bookNo >> item2.units_sold >> price;
  item2.revenue = item2.units_sold * price;

  if (item1.bookNo == item2.bookNo) {
    item1.units_sold += item2.units_sold;
    item1.revenue += item2.revenue;

    cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue
         << endl;
  } else {
    cerr << "items don't have the same ISBN!" << endl;
  }
}

int addSalesDataMult() {
  // read multiple book sale transactions for the same ISBN and sum them
  Sales_data item1;
  double price;

  if (cin >> item1.bookNo >> item1.units_sold >> price) {
    item1.revenue = item1.units_sold * price;
    Sales_data item2;

    while (!cin.eof() && cin >> item2.bookNo >> item2.units_sold >> price) {
      if (item1.bookNo == item2.bookNo) {
        item2.revenue = item2.units_sold * price;
        item1.units_sold += item2.units_sold;
        item1.revenue += item2.revenue;
      } else {
        cerr << "differing ISBN detected." << endl;
        break;
      }
    }
  }
  cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue
       << endl;

  return 0;
}

void countBooks() {
  Sales_data item1;
  Sales_data item2;
  double price;
  int count = 0;

  if (cin >> item1.bookNo >> item1.units_sold >> price) {
    item1.revenue = item1.units_sold * price;
    while (!cin.eof() && cin >> item2.bookNo >> item2.units_sold >> price) {
      if (item1.bookNo == item2.bookNo) {
        item1.units_sold += item2.units_sold;
        item2.revenue = item2.units_sold * price;
        item1.revenue += item2.revenue;
        count++;
      } else {
        cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue
             << " " << count << endl;
        item1 = item2;
        count = 1;
      }
    }
    cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue
         << " " << count << endl;
  }
}

void bookTransaction() {
  Sales_data total;
  double price;
  if (cin >> total.bookNo >> total.units_sold >> price) {
    total.revenue = total.units_sold * price;
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> price) {
      trans.revenue = trans.units_sold * price;
      if (total.bookNo == trans.bookNo) {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      } else {
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue
             << endl;
        total.bookNo = trans.bookNo;
        total.units_sold = trans.units_sold;
        total.revenue = trans.revenue;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
  } else {
    cerr << "No data?!" << endl;
  }
}

int main()
{
  int sum = 0, val = 1;
  while(val <= 10)
  {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << endl;
  bookTransaction();
}
