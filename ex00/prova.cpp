#include <iostream>
#include <string>

// Classe base Animal
class Animal {
protected:
    std::string type;

public:
    Animal() {
        type = "Animal";
    }

    virtual ~Animal() {}  // Distruttore virtuale

    virtual std::string getType() const { // AGGIUNTO const
        return type;
    }

    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

// Classe derivata Dog
class Dog : public Animal {
public:
    Dog() {
        type = "Dog";
    }

    virtual ~Dog() {}

    virtual void makeSound() const {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Classe derivata Cat
class Cat : public Animal {
public:
    Cat() {
        type = "Cat";
    }

    virtual ~Cat() {}

    virtual void makeSound() const {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

// **Funzione main compatibile con C++98**
int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl; // ORA FUNZIONA
    std::cout << i->getType() << " " << std::endl; // ORA FUNZIONA

    i->makeSound(); // Output: Meow! Meow!
    j->makeSound(); // Output: Woof! Woof!
    meta->makeSound(); // Output: Some generic animal sound

    // Liberiamo la memoria allocata dinamicamente
    delete meta;
    delete j;
    delete i;

    return 0;
}
