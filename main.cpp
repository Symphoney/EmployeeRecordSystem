#include <iostream>
import Employee;


int main() {
    std::cout << "Testing Employee class." << '\n';
    Record::Employee emp{"John", "Doe"};
    emp.setFirstName("Sarah");
    emp.setLastName("Smith");
    emp.setEmployeeNumber(12345);
    emp.setSalary(50'000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();
    return 0;
}
