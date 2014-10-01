

#import <IDEFoundation/IDEBreakpoint.h>

@class NSString;

@interface IDEWatchpoint : IDEBreakpoint
{
    NSString *_expression;
    NSString *_variableName;
    unsigned long long _address;
    NSString *_hexAddress;
}

+ (id)_displayStringForAddress:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingHexAddress;
@property unsigned long long address; // @synthesize address=_address;
@property(readonly) NSString *variableName; // @synthesize variableName=_variableName;
@property(readonly) NSString *expression; // @synthesize expression=_expression;
- (id)displayName;
@property(readonly) NSString *hexAddress;
- (id)initWithExpression:(id)arg1 variableName:(id)arg2;

@end

