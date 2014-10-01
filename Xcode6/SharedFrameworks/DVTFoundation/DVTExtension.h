

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class DVTDispatchLock, DVTExtensionPoint, DVTPlugIn, DVTPlugInManager, NSBundle, NSDictionary, NSMutableDictionary, NSString, NSXMLElement;

@interface DVTExtension : NSObject <DVTPropertyListEncoding>

+ (void)initialize;
@property(readonly) DVTExtension *basedOnExtension; // @synthesize basedOnExtension=_basedOnExtension;
@property(readonly) DVTExtensionPoint *extensionPoint; // @synthesize extensionPoint=_extensionPoint;
@property(readonly) DVTPlugIn *plugIn; // @synthesize plugIn=_plugIn;
@property(readonly) NSDictionary *extensionData; // @synthesize extensionData=_extensionData;
@property(readonly) DVTPlugInManager *plugInManager; // @synthesize plugInManager=_plugInManager;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_localizedStringForString:(id)arg1;
- (BOOL)_fireExtensionFault:(id *)arg1;
- (void)_adjustClassReferencesInParameterData:(id)arg1 usingSchema:(id)arg2;
- (void)_adjustElementClassAttributes:(id)arg1 forKey:(id)arg2 inParameterData:(id)arg3;
- (void)_adjustClassAttribute:(id)arg1 forKey:(id)arg2 inParameterData:(id)arg3;
- (BOOL)_adjustElement:(id)arg1 forKey:(id)arg2 inParameterData:(id)arg3;
- (BOOL)_adjustAttribute:(id)arg1 forKey:(id)arg2 inParameterData:(id)arg3;
- (BOOL)_adjustParameterData:(id)arg1 usingSchema:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)hasValueForKey:(id)arg1;
- (BOOL)_hasValueForKey:(id)arg1 inParameterData:(id)arg2 usingSchema:(id)arg3;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (id)valueForKey:(id)arg1;
- (id)_valueForKey:(id)arg1 inParameterData:(id)arg2 usingSchema:(id)arg3 error:(id *)arg4;
@property(readonly, copy) NSXMLElement *extensionElement;
@property(readonly, getter=isValid) BOOL valid;
@property(readonly) NSBundle *bundle;
@property(readonly, copy) NSString *description;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithExtensionData:(id)arg1 plugIn:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

