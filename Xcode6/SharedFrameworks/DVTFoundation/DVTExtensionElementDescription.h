

#import <DVTFoundation/DVTExtensionPropertyDescription.h>

@class NSDictionary, NSSet, NSString;

@interface DVTExtensionElementDescription : DVTExtensionPropertyDescription
{
    NSString *_plural;
    unsigned long long _minOccurs;
    unsigned long long _maxOccurs;
    NSDictionary *_attributes;
    NSDictionary *_elements;
    NSDictionary *_properties;
    NSSet *_propertyKeys;
}

@property(copy) NSSet *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
@property(copy) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy) NSDictionary *elements; // @synthesize elements=_elements;
@property(copy) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property unsigned long long maxOccurs; // @synthesize maxOccurs=_maxOccurs;
@property unsigned long long minOccurs; // @synthesize minOccurs=_minOccurs;
@property(copy) NSString *plural; // @synthesize plural=_plural;
- (void)_inheritAttributesAndElementsFromElementDescription:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithName:(id)arg1 plural:(id)arg2 minOccurs:(unsigned long long)arg3 maxOccurs:(unsigned long long)arg4 optional:(BOOL)arg5 attributes:(id)arg6 elements:(id)arg7;

@end

