

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEEnvironmentVariableEntry : NSObject
{
    BOOL _isEnabled;
    NSString *_key;
    NSString *_value;
}

+ (id)environmentEntriesForLegacyValues:(id)arg1;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *key; // @synthesize key=_key;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setValueFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setKeyFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (NSString *)description;
- (id)init;
- (id)initWithKey:(id)arg1 value:(id)arg2 enabled:(BOOL)arg3;

@end

