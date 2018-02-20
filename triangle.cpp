#include "triangle.h"

Triangle::Triangle() {

}

glm::vec4 Triangle::obteNormal(){

}

float Triangle::obteAngulo(int id_vertices){
    vec3 p1(this->vertice1);
    vec3 p2(this->vertice2);
    vec3 p3(this->vertice3);

    vec3 norm(glm::triangleNormal(p1, p2, p3));

    return vec4(norm[0], norm[1], norm[2], 0);
}


void Triangle::addVertice(glm::vec4 vec1, glm::vec4 vec2, glm::vec4 vec3){
    this->vertice1 = vec1;
    this->vertice2 = vec2;
    this->vertice3 = vec3;
}
