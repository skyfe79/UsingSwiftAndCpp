//
//  ItsCpp.cpp
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 23..
//  Copyright © 2016년 BurtK. All rights reserved.
//

#include "ItsCpp.hpp"

ItsCpp::ItsCpp() {
    name("");
}

ItsCpp::ItsCpp(const std::string& name) {
    this->name(name);
}

ItsCpp::~ItsCpp() {
}

void ItsCpp::name(const std::string &name) {
    this->m_name = name;
}

const std::string& ItsCpp::name() {
    return this->m_name;
}
