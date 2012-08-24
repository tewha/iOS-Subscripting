# iOS-Subscripting #

Headers to provide subscripting support. The implementations are provided by libarclite.

This is an interim solution to subscripting; it will almost certainly not be necessary when the iOS 6 SDK is released (even for building to iOS 5).

## Contents ##

* **Foundation+sdfsubscripts.h**: The header file that adds subscripting support to `NSArray`, `NSMutableArray`, `NSDictionary` and `NSMutableDictionary`.
* **NSUserDefaults+sdfextrasubs.h** and **NSUserDefaults+sdfextrasubs.m**: A demonstration of how to patch an existing class to support subscripts.

## Usage ##
1. Add **Foundation+sdfsubscripts.h** to your project.
2. `#import "Foundation+sdfsubscripts.h"` Ideally, from your prefix.
3. Examine the technique used in **NSUserDefaults+sdfextrasubs.h** and **NSUserDefaults+sdfextrasubs.m**. You probably don't want to use this file directly, however.

## License ##
For this? Free and public domain. Do whatever you want with it. Enjoy.

## Future ##
* Add support for any other classes swizzled by libarclite to **Foundation+sdfsubscripts.h**. I don't have a list, so there may be others.
* Add a more useful swizzling category.

## See also ##
* [Modern Objective-C with iOS 5](http://tewha.net/2012/08/modern-objective-c-with-ios-5/)
* [Using subscripting with Xcode 4.4 and iOS 4.3](http://petersteinberger.com/blog/2012/using-subscripting-with-Xcode-4_4-and-iOS-4_3/)