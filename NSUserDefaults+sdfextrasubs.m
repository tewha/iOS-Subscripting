//
//  NSUserDefaults+sdfextrasubs.m
//
//  Created by Steven Fisher on 2012-07-23.
//
//  This is public domain. Use as you see fit.

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "NSUserDefaults+sdfextrasubs.h"


@implementation NSUserDefaults(sdfextrasubs)


#ifdef __IPHONE_6_0
#define CAST_TO_BLOCK id
#else
#define CAST_TO_BLOCK __bridge void *
#endif

+ (void)load {
    // Each category's +load is called on startup. This method installs our getter/setter if NSUserDefaults doesn't have one.
    
    // We only install our custom getter if no getter exists.
    SEL getter = @selector(objectForKeyedSubscript:);
    if ( ![self instancesRespondToSelector: getter]) {
        IMP imp = imp_implementationWithBlock( (CAST_TO_BLOCK)^NSObject *(NSUserDefaults *self, id subscript){
            return [self objectForKey:subscript]; // replace with your getter
        });
        class_addMethod(self, getter, imp, "@@:@");
    }
    
    // We only install our custom setter if no setter exists.
    SEL setter = @selector(setObject:forKeyedSubscript:);
    if ( ![self instancesRespondToSelector: setter]) {
        IMP imp = imp_implementationWithBlock( (CAST_TO_BLOCK)^void(NSUserDefaults *self, id object, id<NSCopying> subscript){
            [self setObject:object forKey: (NSString *)subscript];
        });
        class_addMethod(self, setter, imp, "v@:@@");
    }
}


@end
