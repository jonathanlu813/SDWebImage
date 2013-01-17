//
//  SDWebImageKeychainWrapper.h
//  SDWebImage
//
//  Created by Jonathan Lu on 9/1/13.
//  Copyright (c) 2013 StampUp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface SDWebImageKeychainWrapper : NSObject
+ (NSData *)searchKeychainCopyMatching:(NSString *)identifier;
+ (BOOL)setKeychainValue:(NSString *)password forIdentifier:(NSString *)identifier;
+ (void)deleteKeychainValue:(NSString *)identifier;

@end
