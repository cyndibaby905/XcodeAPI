

#import <Foundation/Foundation.h>

@class NSString;

@interface IDECommandLineArgumentEntry : NSObject
{
    BOOL _isEnabled;
    NSString *_argument;
}

+ (id)argumentEntriesForLegacyValues:(id)arg1;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
@property(copy) NSString *argument; // @synthesize argument=_argument;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setArgumentFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (NSString *)description;
- (id)init;
- (id)initWithArgument:(id)arg1 enabled:(BOOL)arg2;

@end

