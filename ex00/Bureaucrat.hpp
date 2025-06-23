#include <string>
class Bureaucrat {      
    private:            
      const std::string name;
	  int grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};