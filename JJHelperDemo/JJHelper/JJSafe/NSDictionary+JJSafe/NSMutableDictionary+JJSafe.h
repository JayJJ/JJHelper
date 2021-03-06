//
//  NSMutableDictionary+JJSafe.h
//  JJSafeDemo
//
//  Created by Jay on 15/11/10.
//  Copyright © 2015年 JJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (JJSafe)

+ (instancetype)safeDictionaryWithDictionary:(NSDictionary *)dic;

- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey;

- (void)safeRemoveObjectForKey:(id<NSCopying>)aKey;

/** Dictionary add otherDictionary */
- (void)safeAddEntriesFromDictionary:(NSDictionary *)otherDictionary;
@end
