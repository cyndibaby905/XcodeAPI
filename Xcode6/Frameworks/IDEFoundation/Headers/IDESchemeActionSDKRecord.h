

#import <Foundation/Foundation.h>

@class NSString;

@interface IDESchemeActionSDKRecord : NSObject
{
    BOOL _internal;
    NSString *_displayName;
    NSString *_canonicalName;
    NSString *_operatingSystemVersion;
}

@property(readonly, getter=isInternal) BOOL internal; // @synthesize internal=_internal;
@property(readonly, copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSDK:(id)arg1;
- (id)initWithDisplayName:(id)arg1 canonicalName:(id)arg2 operatingSystemVersion:(id)arg3 isInternal:(BOOL)arg4;

@end

