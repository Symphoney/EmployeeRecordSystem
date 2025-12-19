#include <iostream>
#include <format>

module Employee;

namespace Record {

    Employee::Employee(const std::string& firstName, const std::string& lastName)
        : m_firstName{firstName}
    , m_lastName{lastName}
    , m_employeeNumber{-1}
    , m_salary{ DefaultStartingSalary }
    , m_hired{false}
    {}

    void Employee::promote(int raiseAmount) { setSalary(getSalary() + raiseAmount); }
    void Employee::demote(int demeritAmount) { setSalary(getSalary() - demeritAmount); }

    void Employee::hire() { m_hired = true; }
    void Employee::fire() { m_hired = false; }

    void Employee::display() const {
        std::cout << std::format("Employee: {}, {}", getLastName(), getFirstName()) << '\n';
        std::cout << "-----------------------" << '\n';
        std::cout << (isHired() ? "Current Employee" : "Former Employee") << '\n';
        std::cout << std::format("Employee Number: {}", getEmployeeNumber()) << '\n';
        std::cout << std::format("Salary: ${}", getSalary()) << '\n';
    }

    void Employee::setFirstName(const std::string& firstName) { m_firstName = firstName; }
    const std::string& Employee::getFirstName() const { return m_firstName; }

    void Employee::setLastName(const std::string& lastName) { m_lastName = lastName; }
    const std::string& Employee::getLastName() const { return m_lastName; }

    void Employee::setEmployeeNumber(int number) { m_employeeNumber = number; }
    int Employee::getEmployeeNumber() const { return m_employeeNumber; }

    void Employee::setSalary(int salary) { m_salary = salary; }
    int Employee::getSalary() const { return m_salary; }

    bool Employee::isHired() const { return m_hired; }

}
