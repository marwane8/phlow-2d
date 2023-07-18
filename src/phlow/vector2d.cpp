#include "vector2d.hpp"
#include <cmath>

namespace phlow {

    Vector2D::Vector2D(double x, double y): _x(x),_y(y) {};

    double Vector2D::x() const { return _x;}
    double Vector2D::y() const { return _y;}

    double Vector2D::magnitude(const Vector2D &right) {
        return sqrt(pow( right.x() - _x, 2) + pow( right.y() - _y, 2));
    }

    Vector2D Vector2D::nVector(const Vector2D &right) {
       double magnitude = this->magnitude(right);
       Vector2D normal = (*this) - right;
       return normal * (1/magnitude);
    }

    Vector2D Vector2D::tVector() {
        return Vector2D(-_y,_x);
    }

    Vector2D Vector2D::operator+(const Vector2D &right) {
        double x2 = this->_x + right.x();
        double y2 = this->_y + right.y();
        return Vector2D(x2,y2);
    }

    Vector2D Vector2D::operator-(const Vector2D &right) { 
        double x2 = this->_x - right.x();
        double y2 = this->_y - right.y();
        return Vector2D(x2,y2);
    }

    double Vector2D::operator*(const Vector2D &right) {
        return this->_x * right.x() + this->_y * right.y();
    }

}