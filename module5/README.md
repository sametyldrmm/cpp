# Repetition and Exceptions
In this repository, we are tasked with learning about Exception and Operator overloading concepts in C++.

## Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
In this exercise, we are given a task to create a Bureaucrat class that has a name and a grade attribute, and two child classes called "GradeTooHighException" and "GradeTooLowException" to throw exceptions when an instance of Bureaucrat is created with an invalid grade value.

## Exercise 01: Form up, maggots!
In this exercise, we are tasked with creating a "Form" class and a "ShrubberyCreationForm" subclass. The Form class has a name, a boolean indicating whether the form is signed, a minimum signing grade, and a target to execute the form. The ShrubberyCreationForm class inherits from Form and has a target to write ASCII art to a file.

## Exercise 02: No, you need form 28B, not 28C...
In this exercise, we are tasked with creating two new subclasses of the Form class, "RobotomyRequestForm" and "PresidentialPardonForm". The RobotomyRequestForm class has a target to make robot noises and sign the form if the robot operation is successful, while the PresidentialPardonForm class has a target to pardon a specific target if the bureaucrat signing the form has a grade equal to or higher than 25.

## Exercise 03: At least this beats coffee-making
In this exercise, we are tasked with creating an abstract class "AForm" that is the parent of the "Form" class, and modify the "Form" class to handle the execution of a specific target by a bureaucrat. Additionally, we need to implement an "OfficeBlock" class that has three attributes, "intern", "signer", and "executor", which are all pointers to objects of the Bureaucrat class, and the ability to set each of them. The OfficeBlock class can then use these three objects to execute a form.




