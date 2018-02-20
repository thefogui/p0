#include "triangle.h"


Triangle::Triangle() {

}

Triangle::~Triangle() {

}

glm::vec4 Triangle::obteNormal(){
    glm::vec3 p1(this->vertice[0]);
    glm::vec3 p2(this->vertice[1]);
    glm::vec3 p3(this->vertice[2]);

    glm::vec3 norm(glm::triangleNormal(p1, p2, p3));

    return glm::vec4(norm[0], norm[1], norm[2], 0);
}

float Triangle::obteAngulo(int id_vertices){

}


void Triangle::addVertice(glm::vec4 vec[3]){
    this->vertice[0] = vec[0];
    this->vertice[1] = vec[1];
    this->vertice[2] = vec[2];
}

