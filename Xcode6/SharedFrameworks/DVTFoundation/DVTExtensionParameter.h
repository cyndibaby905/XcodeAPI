

#import <Foundation/Foundation.h>

@class DVTExtension, DVTExtensionElementDescription, NSMutableDictionary;

@interface DVTExtensionParameter : NSObject
{
    NSMutableDictionary *_parameterData;
    DVTExtensionElementDescription *_schema;
    DVTExtension *_extension;
}

@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void)_adjustClassReferencesInParameterData;
- (BOOL)_adjustParameterData;
- (BOOL)hasValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (id)valueForKey:(id)arg1;
- (id)debugDescription;
- (NSString *)description;
- (id)initWithParameterData:(id)arg1 usingSchema:(id)arg2 forExtension:(id)arg3;

@end

