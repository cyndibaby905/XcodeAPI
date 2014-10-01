

#import <IDEFoundation/IDEBreakpoint.h>

@class NSString;

@interface IDESymbolicBreakpoint : IDEBreakpoint
{
    NSString *_symbolName;
    NSString *_moduleName;
}

+ (id)keyPathsForValuesAffectingLocationsProvideAdditionalInformation;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)propertiesAffectingPersistenceState;
@property(copy) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (BOOL)locationsProvideAdditionalInformation;
- (NSString *)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayName;
- (id)initWithSymbolName:(id)arg1 moduleName:(id)arg2;
- (id)init;

@end

