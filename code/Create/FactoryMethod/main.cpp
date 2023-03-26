#include "IDCardFactory.h"
int main()
{
    auto fac = std::make_shared<IDCareFactory>();
    auto pro = fac->create("tao");
    auto pro2 = fac->create("tao2");
    pro->use();
    pro2->use();

    return 0;
}