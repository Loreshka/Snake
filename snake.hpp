#ifndef SNAKE_HPP
#define SNAKE_HPP

struct Snake {
    std::vector<Point> body;
    Direction dir;

    void move();
    void grow();
    bool check_collision();
};

#endif // SNAKE_HPP
