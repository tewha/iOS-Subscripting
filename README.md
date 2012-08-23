# iOS-Subscripting #

Headers to provide subscripting support. The implementations are provided by libarclite.

This is an interim solution to subscripting; it will almost certainly not be necessary when the iOS 6 SDK is released (even for building to iOS 5).

## Usage ##
1. Add header to your project.
2. `#import "Foundation+sdfsubscripts.h"` Ideally, from your pch.

## License ##
For this? Free and public domain. Do whatever you want with it. Enjoy.

## Future ##
* Add support for any other classes swizzled by libarclite.
* I'm not interested in adding support for classes not supported by libarclite to this header, but may consider swizzling support for other classes into additional files.

## See also ##
* [Modern Objective-C with iOS 5](http://tewha.net/2012/08/modern-objective-c-with-ios-5/)
* [Using subscripting with Xcode 4.4 and iOS 4.3](http://petersteinberger.com/blog/2012/using-subscripting-with-Xcode-4_4-and-iOS-4_3/)