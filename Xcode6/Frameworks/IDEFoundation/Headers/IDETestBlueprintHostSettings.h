

#import <Foundation/Foundation.h>

@class NSString;

@interface IDETestBlueprintHostSettings : NSObject
{
    BOOL _hasBundleLoader;
    NSString *_hostBlueprintIdentifier;
}

@property(readonly) BOOL hasBundleLoader; // @synthesize hasBundleLoader=_hasBundleLoader;
@property(readonly) NSString *hostBlueprintIdentifier; // @synthesize hostBlueprintIdentifier=_hostBlueprintIdentifier;
- (id)initWithHostBlueprintIdentifier:(id)arg1 hasBundleLoader:(BOOL)arg2;

@end

