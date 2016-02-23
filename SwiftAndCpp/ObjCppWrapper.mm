//
//  ObjCppWrapper.m
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 23..
//  Copyright © 2016년 BurtK. All rights reserved.
//

#import "ObjCppWrapper.h"
#include "ItsCpp.hpp"

@interface ObjCppWrapper()
@property ItsCpp *itsCpp;
@end

@implementation ObjCppWrapper
- (instancetype)initWithName:(NSString *)name {
    if (self = [super init]) {
        self.itsCpp = new ItsCpp(std::string([name cStringUsingEncoding:NSUTF8StringEncoding]));
    }
    return self;
}

- (NSString *)getName {
    return [NSString stringWithUTF8String:self.itsCpp->name().c_str()];
}

- (void)setName:(NSString *)name {
    self.itsCpp->name(std::string([name cStringUsingEncoding:NSUTF8StringEncoding]));
}

- (void)dealloc {
    delete _itsCpp;
    _itsCpp = nil;
}
@end
