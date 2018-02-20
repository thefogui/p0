#include <iostream>
#include "glm/glm/glm.hpp"

using namespace std;

//iniciar puntos glm::vec4 vertice(0, 0, 0, 1)

int main()
{
    cout << "Hello p0:" << endl;
    gml::vec4 vertice1(0, 0, 0, 1);
    Triangle* tiangle = new Tiangle();
    tiangle->addVertices();


    return 0;
}
