#pragma once
#include "IDCard.h"
#include "IFactory.h"
#include <string>
#include <vector>
class IDCareFactory : public IFactory
{
public:
    std::shared_ptr<IProduct> createProduct(const std::string &owner)
    {
        // 存在转换失败为null的情况
        return std::dynamic_pointer_cast<IProduct>(std::make_shared<IDCard>(owner));
    }

    void registerProduct(std::shared_ptr<IProduct> pro)
    {
        m_productList.push_back(pro);
    }

private:
    std::vector<std::shared_ptr<IProduct>> m_productList;
};