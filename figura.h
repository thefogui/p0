#ifndef FIGURA_H
#define FIGURA_H

//un metodo virtual indica clase abstracta el hijo lo puede cargalo
//protected para padre y hijo private solol para la clase que lo contiene

class Figura{

public:
    Figura();
    virtual ~Figura();
    virtual glm::vec4 obteNormal() = 0;

};

#endif // FIGURA_H
