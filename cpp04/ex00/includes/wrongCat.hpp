#include "../includes/wrongAnimal.hpp"

class wrongCat : public wrongAnimal {
public:

    wrongCat();
    ~wrongCat();
    wrongCat(wrongCat const & src);

    wrongCat & operator=(wrongCat const & rhs);
   void makeSound() const;
private:

protected:
};