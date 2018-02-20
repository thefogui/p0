#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figura.h"
#include "glm/glm/glm.hpp"

class Triangle : public Figura {
private:
    glm::vec4 vertice1[3];

public:
    Triangle();
    ~Triangle();
    glm::vec4 obteNormal();
    float obteAngulo(int );
    void addVertice(glm::vec4 vec4[3]);
};

#endif // TRIANGLE_H
