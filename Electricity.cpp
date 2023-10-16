#include <iostream>
#include <string>
using namespace std;
class electricity_bill
{
private:
    int cusotmer_id;
    string customer_name;
    float units;
    float bill_amount;

public:
    void get_data();
    void show_data();
    void calculate_bill();
};
void electricity_bill::get_data()
{
    cout << "Enter customer ID: ";
    cin >> cusotmer_id;
    cout << "Enter customer name: ";
    getline(cin, customer_name);
    getline(cin, customer_name); // when writing code, put only one getline
    cout << "Enter units consumed: ";
    cin >> units;
}
void electricity_bill::show_data()
{
    cout << "\nCustomer ID: " << cusotmer_id << endl;
    cout << "Customer name: " << customer_name << endl;
    cout << "Units consumed: " << units << endl;
    cout << "Bill Amount: " << bill_amount << endl;
}
void electricity_bill::calculate_bill()
{
    if (units > 0 && units <= 199)
        bill_amount = units * 1.2;
    else if (units >= 200 && units < 400)
        bill_amount = units * 1.5;
    else if (units >= 400 && units < 600)
        bill_amount = units * 1.8;
    else if (units >= 600)
        bill_amount = units * 2.0;
    else
        cout << "Invalid input" << endl;
    if (bill_amount > 400)
    {
        cout << "Bill Amount: ";
        bill_amount = bill_amount + (0.158 * bill_amount);
        cout << bill_amount << endl;
        cout << "Surcharge of 15% added as bill exceeded Rs. 400" << endl;
    }
    else if (bill_amount < 100)
    {
        bill_amount = 100;
        cout << "Bill amount: " << bill_amount << endl;
    }
}
int main()
{
    int num_customer;
    cout << "Enter number of customers: ";
    cin >> num_customer;
    electricity_bill customer[num_customer];
    for (int i = 0; i < num_customer; i++)
    {
        cout << "\nEnter data for customer " << i + 1 << endl;
        customer[i].get_data();
    }
    for (int i = 0; i < num_customer; i++)
    {
        cout << "\nCustomer " << i + 1 << endl;
        customer[i].calculate_bill();
        customer[i].show_data();
    }
    return 0;
}
