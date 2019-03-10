#ifndef Burrito_hpp
#define Burrito_hpp

class Burrito{
    public:
        Burrito(int a, int b);
        ~Burrito();
        void makeBurrito();
        void print();
        void print() const;
    private:
        int numBurrito;
        const int constBurrito;
};
#endif //BURRITO_HPP