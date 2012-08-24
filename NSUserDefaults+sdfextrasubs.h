//
//  NSUserDefaults+sdfextrasubs.h
//
//  Created by Steven Fisher on 2012-07-23.
//
//  This category demonstrates how to install methods for array access only if they are not already avaiable to iOS.
//
//  This is public domain. Use as you see fit.

#import <Foundation/Foundation.h>

@interface NSUserDefaults()
- (id)objectForKeyedSubscript:(id)key;
- (void)setObject:(id)obj forKeyedSubscript:(id<NSCopying>)key;
@end
