//
//  ObjCppWrapper.h
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 23..
//  Copyright © 2016년 BurtK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjCppWrapper : NSObject
- (instancetype)initWithName:(NSString *)name;
- (NSString *)getName;
- (void)setName:(NSString *)name;
@end
