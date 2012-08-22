//
//  Foundation+sdfsubscripts.h
//
//  Created by Steven Fisher on 2012-07-14.
//
//  See also:
//    http://tewha.net/2012/08/modern-objective-c-with-ios-5/
//    http://petersteinberger.com/blog/2012/using-subscripting-with-Xcode-4_4-and-iOS-4_3/
//
//  This is public domain. Use as you see fit.

#import <Foundation/Foundation.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < 60000

@interface NSDictionary(sdfsubscripts)
- (id)objectForKeyedSubscript:(id)key;
@end

@interface NSMutableDictionary(sdfsubscripts)
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;
@end

@interface NSArray(sdfsubscripts)
- (id)objectAtIndexedSubscript:(NSUInteger)idx;
@end

@interface NSMutableArray(sdfsubscripts)
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)idx;

@end

#endif
