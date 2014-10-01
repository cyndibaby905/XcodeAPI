

#import <IDEFoundation/IDEUpgradeContext.h>

@class IDEScheme;

@interface IDEUpgradeSchemeContext : IDEUpgradeContext
{
    IDEScheme *_scheme;
}

@property(readonly) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (NSString *)description;
- (id)initWithScheme:(id)arg1;

@end

