# encoding utf-8
# E04Q03

class Employee(object):
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def display_count(self):
        print(self.salary)

    def display_employee(self):
        print(self.name)


# 创建 Employee 类的第一个对象
emp1 = Employee("Tim", 4000)
# 输出 Employee 类实例化的对象总数
emp1.display_count()
# 输出 Tim 的信息
emp1.display_employee()

# 创建 Employee 类的第二个对象
emp2 = Employee("Bob", 4640)
# 输出 Employee 类实例化的对象总数
emp2.display_count()
# 输出 Bob 的信息
emp2.display_employee()
