

#import <DVTFoundation/DVTExtensionPropertyDescription.h>

@interface DVTExtensionAttributeDescription : DVTExtensionPropertyDescription
{
    long long _extensionAttributeType;
    id _defaultValue;
}

@property(retain) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property long long extensionAttributeType; // @synthesize extensionAttributeType=_extensionAttributeType;
- (id)adjustedValueForString:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithName:(id)arg1 extensionAttributeType:(long long)arg2 defaultValue:(id)arg3 isOptional:(BOOL)arg4;

@end
