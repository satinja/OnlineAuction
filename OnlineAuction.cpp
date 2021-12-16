#include <iostream>
#include <vector>
#include <ctime>
#include "Seller.h"
#include "Buyer.h"

Buyer* registerBuyer(std::string id)
{
    Buyer* buyer = new Buyer(id);
    return buyer;
}

Seller* registerSeller(std::string sellerId)
{
    Seller* seller = new Seller(sellerId);

    return seller;
}

int main()
{
    Seller* seller = registerSeller("ShoeSeller");
    seller->initiateAuction("1");

    std::vector<Buyer*> buyers;
    for (int i = 0; i < 5; i++)
    {
        Buyer* buyer = registerBuyer(std::to_string(i + 1));
        buyers.push_back(buyer);
    }

    buyers[0]->placeBidding(seller->getProductById("1"), 2000, seller);
    buyers[1]->placeBidding(seller->getProductById("1"), 4000, seller);
    buyers[0]->placeBidding(seller->getProductById("1"), 2000, seller);
    buyers[0]->placeBidding(seller->getProductById("1"), 2000, seller);
    int x;
    std::cin >> x;
}