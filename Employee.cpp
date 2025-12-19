//
// Created by Micah on 12/18/2025.
//

#include "Employee.h"
module Employee;
import <iostream>;
import <format>;

namespace Records {
    Employee::Employee(const std::string& firstName, const std::string& lastName)
        : m_firstName{firstName}, m_lastName{lastName} {
    }

    void Employee::promote(int raiseAmount) {
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int demeritAmount) {
        setSalary(getSalary() - demeritAmount);
    }

    void Employee::hire() {m_hired = true;}
    void Employee::fire() {m_hired = false;}

    void Employee::display() const{
        std::cout << std::format("Employee: {}, {}", getLastName(), getFirstName()) << '\n';
        std::cout << "-----------------------" << '\n';
        std::cout << (isHired() ? "Current Employee" : "Former Employee") << '\n';
        std::cout << std::format("Employee Number: {}", getEmployeeNumber()) <<  '\n';
        std::cout << std::format("Salary: ${}", getSalary()) << '\n';
        std::cout << '\n';
    }

    void Employee::setFirstName(const std::string& firstName) {
        m_firstName = firstName;
    }

    const std::string& Employee::getFirstName() const {
        return m_first_Name;
    }
}