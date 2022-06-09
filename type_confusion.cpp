class Animal {
    public:
    int age;
};

class Dog: public Animal {
    public:
    int id ;
    virtual void bark();
};

int main(void){
    Animal *animal_ptr = new Animal;
    Dog *weird_dog = static_cast<Dog*>(animal_ptr); // Type confusion.
    weird_dog->id = 0x43; // Memory safety violation!
    weird_dog->bark(); // Control-flow hijacking
}
