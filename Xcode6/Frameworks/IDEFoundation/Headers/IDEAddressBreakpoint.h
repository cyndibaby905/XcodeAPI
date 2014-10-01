

#import <IDEFoundation/IDESymbolicBreakpoint.h>

@class NSString;

@interface IDEAddressBreakpoint : IDESymbolicBreakpoint
{
    NSString *_hexAddress;
}

+ (id)_createSymbolNameFromAddress:(id)arg1;
- (id)displayName;
@property(copy) NSString *hexAddress;
- (id)initWithAddress:(id)arg1;

@end

