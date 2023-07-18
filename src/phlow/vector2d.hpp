#ifndef INCLUDE_VECTOR2D
#define INCLUDE_VECTOR2D

namespace phlow {   



class Vector2D {
    double _x;
    double _y;
public:
    Vector2D(double x, double y);
    double x() const;
    double y() const;

    Vector2D nVector(const Vector2D &right);
    Vector2D tVector();

    Vector2D operator+(const Vector2D &right);
    Vector2D operator-(const Vector2D &right);

    double magnitude(const Vector2D &right);
    double operator*(const Vector2D &right);

friend Vector2D operator*(const Vector2D& left, double c);
};


inline Vector2D operator*(const Vector2D& left, double c) {
    return Vector2D(left._x * c, left._y * c);
}
inline Vector2D operator*(double c, const Vector2D& left) {
    return left * c;
}

} // namespace phlow
#endif