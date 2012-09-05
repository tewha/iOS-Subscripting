//
//  NSCache+sdfextrasubs.h
//
//  Created by Steven Fisher on 2012-09-05.
//
//  This category demonstrates how to install methods for array access only if they are not already avaiable to iOS.
//
//  This is public domain. Use as you see fit.

#import <Foundation/Foundation.h>

@interface NSCache()
- (id)objectForKeyedSubscript:(id)key;
- (void)setObject:(id)obj forKeyedSubscript:(id<NSCopying>)key;
@end
