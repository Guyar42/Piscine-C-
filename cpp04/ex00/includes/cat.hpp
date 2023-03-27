#include "../includes/animal.hpp"

class Cat : public Animal {
public:

    Cat();
    virtual ~Cat();
    Cat(Cat const & src);

    Cat & operator=(Cat const & rhs);
    virtual void makeSound() const;
private:

protected:
};