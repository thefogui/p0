#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figura.h"
#include "glm/glm/glm.hpp"

class Triangle : public Figura {
    glm::vec4 vertice1;
    glm::vec4 vertice2;
    glm::vec4 vertice3;

public:
    Triangle();
    glm::vec4 obteNormal();
    float obteAngulo(int );
    void addVertice(glm::vec4, glm::vec4, glm::vec4 );
};

#endif // TRIANGLE_H
