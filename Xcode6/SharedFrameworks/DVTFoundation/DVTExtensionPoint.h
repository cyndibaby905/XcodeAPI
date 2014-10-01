

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class DVTExtensionElementDescription, DVTPlugIn, DVTPlugInManager, NSBundle, NSDictionary, NSMutableSet, NSSet, NSString;

@interface DVTExtensionPoint : NSObject <DVTPropertyListEncoding>
{
    NSDictionary *_extensionPointData;
    DVTPlugInManager *_plugInManager;
    NSString *_identifier;
    NSString *_version;
    NSString *_name;
    DVTPlugIn *_plugIn;
    DVTExtensionElementDescription *_extensionSchema;
    DVTExtensionPoint *_parentExtensionPoint;
    NSMutableSet *_extensions;
    NSMutableSet *_childExtensionPoints;
}

@property(readonly, copy) NSSet *childExtensionPoints; // @synthesize childExtensionPoints=_childExtensionPoints;
@property(readonly, copy) NSSet *extensions; // @synthesize extensions=_extensions;
@property(readonly) DVTPlugIn *plugIn; // @synthesize plugIn=_plugIn;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_registerChildExtensionPoint:(id)arg1;
- (void)_registerExtension:(id)arg1;
- (id)extensionsMatchingPredicate:(id)arg1;
@property(readonly) NSBundle *bundle;
@property(readonly) DVTExtensionPoint *parentExtensionPoint; // @dynamic parentExtensionPoint;
@property(readonly, copy) DVTExtensionElementDescription *extensionSchema; // @dynamic extensionSchema;
- (void)_setUpParentExtensionPoint;
@property(readonly, copy) NSString *description;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithExtensionPointData:(id)arg1 plugIn:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

