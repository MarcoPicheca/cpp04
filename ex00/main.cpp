#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal *wj = new WrongCat();
    WrongAnimal gigi;

    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl  << std::endl;
    std::cout << j->getType() << " " << std::endl  << std::endl;
    std::cout << i->getType() << " " << std::endl  << std::endl;

    std::cout << wj->getType() << " " << std::endl  << std::endl;
    std::cout << gigi.getType() << " " << std::endl  << std::endl;
    i->makeSound();
    std::cout << std::endl;
    j->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;
    wj->makeSound();
    std::cout << std::endl;
    gigi.makeSound();
    std::cout << std::endl;

    delete(meta);
    delete(j);
    delete(i);
    delete(wj);
    return 0;
}
