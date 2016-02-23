//
//  ItsCpp.hpp
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 23..
//  Copyright © 2016년 BurtK. All rights reserved.
//

#ifndef ItsCpp_hpp
#define ItsCpp_hpp

#include <string>

class ItsCpp {
    
public:
    ItsCpp();
    ItsCpp(const std::string& name);
    ~ItsCpp();
    
public:
    // set/get name property
    void name(const std::string& name);
    const std::string& name();
    
private:
    std::string m_name;
};



#endif /* ItsCpp_hpp */
