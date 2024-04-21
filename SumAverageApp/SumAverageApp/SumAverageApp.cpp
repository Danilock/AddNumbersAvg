#include <iostream>

using namespace std;

float num1, num2, num3, total, avg;

int main()
{
    cout << "Sum three numbers!\n";
    cout << "===============================\n";

    cout << "Insert first number:"; 
    cin >> num1;
    
    cout << "Insert second number:"; 
    cin >> num2;
    
    cout << "Insert third number:"; 
    cin >> num3;
    
    total = num1 + num2 + num3;
    avg = total / 3;

    cout << "===============================\n";

    cout << "Total sum: " << total << "\t";
    cout << "Average: " << avg << "  ----> (" << num1 << " + " << num2 << " + " << num3 << ") / 3 = " << avg;

    printf("%f", total);
}