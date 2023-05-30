#include "../includes/animal.hpp"
#include "../includes/brain.hpp"

class Cat : public Animal {
public:

    Cat();
    ~Cat();
    Cat(Cat const & src);

    Cat & operator=(Cat const & rhs);
    virtual void makeSound() const;
    Brain *getBrain() const;
    void setIdeas(int i, std::string str);
    std::string getIdeas(int i);
private:

    Brain *brain;
   
protected:

};