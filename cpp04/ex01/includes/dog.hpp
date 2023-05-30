#include "../includes/animal.hpp"
#include "../includes/brain.hpp"

class Dog : public Animal {
public:

    Dog();
    ~Dog();
    Dog(Dog const & src);

    Dog & operator=(Dog const & rhs);
    virtual void makeSound() const;
    Brain *getBrain() const;
    void setIdeas(int i, std::string str);
    std::string getIdeas(int i);

    
private:

    Brain *_brain;

protected:

};