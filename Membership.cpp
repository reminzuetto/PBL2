#include "Membership.h"

void Membership::setDiscount(double d) {

    this->Discount = d;

}

double Membership::getDiscount() {

    return this->Discount;

}

void Membership::setNewPrice(double c) {

    this->NewPrice = c - c * this->Discount;

}

double Membership::getNewPrice() {

    return this->NewPrice;

}