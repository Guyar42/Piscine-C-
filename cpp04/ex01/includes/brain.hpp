#pragma once
#include <iostream>

class Brain {
public:

    Brain();
    virtual ~Brain();
    Brain(Brain const & src);

    Brain & operator=(Brain const & rhs);
    std::string getIdeas(int i) const;
    void setIdeas(int i, std::string str);

private:

    std::string _ideas[100];

protected:

};