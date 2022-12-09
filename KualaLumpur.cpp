#include "KualaLumpur.h"

KualaLumpur::KualaLumpur()
{
    addElement(Vec2d(3.1521615252997150, 101.67305234455219));
    addElement(Vec2d(3.1372807209530755, 101.67273353146632));
    addElement(Vec2d(3.1241332733516303, 101.68210398221039));
    addElement(Vec2d(3.1322798706396950, 101.69163599244051));
    addElement(Vec2d(3.1397004783544245, 101.69486718234900));
    addElement(Vec2d(3.1501053720998384, 101.69236301016991));
    addElement(Vec2d(3.1524444424360483, 101.67313743021428));
   

    this->getCenter();
    this->init_trianglesPoints();
}


