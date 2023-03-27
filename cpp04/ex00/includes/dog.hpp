#include "../includes/animal.hpp"

class Dog : public Animal {
public:

    Dog();
    virtual ~Dog();
    Dog(Dog const & src);

    Dog & operator=(Dog const & rhs);
    virtual void makeSound() const;
private:

protected:
};