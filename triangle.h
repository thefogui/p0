#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figura.h"

class Triangle : public Figura {
public:
    Triangle();
    glm::vec4 obteNormal();
    float obteAngulo(int );
    void addVertice(glm::vec4 );
};

#endif // TRIANGLE_H
