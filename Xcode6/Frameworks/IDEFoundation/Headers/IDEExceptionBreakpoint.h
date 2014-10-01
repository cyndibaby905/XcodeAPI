

#import <IDEFoundation/IDEBreakpoint.h>

@class NSString;

@interface IDEExceptionBreakpoint : IDEBreakpoint
{
    int _scope;
    int _stopOnStyle;
    NSString *_exceptionName;
}

+ (BOOL)isAllObjectiveCExceptionsBreakpoint:(id)arg1;
+ (BOOL)isAllExceptionsBreakpoint:(id)arg1;
+ (BOOL)isCPPOrAllExceptionBreakpoint:(id)arg1;
+ (BOOL)isCPPExceptionBreakpoint:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)propertiesAffectingPersistenceState;
@property(copy) NSString *exceptionName; // @synthesize exceptionName=_exceptionName;
@property int stopOnStyle; // @synthesize stopOnStyle=_stopOnStyle;
@property int scope; // @synthesize scope=_scope;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (BOOL)locationsProvideAdditionalInformation;
- (BOOL)matchesAllExceptionsInScope;
- (NSString *)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayName;
- (id)init;

@end

