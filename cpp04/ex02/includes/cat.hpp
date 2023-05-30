#include "../includes/animal.hpp"
#include "../includes/brain.hpp"

class Cat : public Animal {
public:

    Cat();
    virtual ~Cat();
    Cat(Cat const & src);

    Cat & operator=(Cat const & rhs);
    virtual void makeSound() const;
    void creatBrain();
    void setIdeas(int i, std::string str);
    std::string getIdeas(int i);

private:

    Brain *brain;
 
protected:
};