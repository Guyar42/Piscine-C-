#include "../includes/animal.hpp"
#include "../includes/brain.hpp"

class Dog : public Animal {
public:

    Dog();
    virtual ~Dog();
    Dog(Dog const & src);

    Dog & operator=(Dog const & rhs);
    virtual void makeSound() const;
    void creatBrain();
    
private:

Brain *brain;

protected:

};