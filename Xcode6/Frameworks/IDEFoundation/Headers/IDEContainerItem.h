

#import <DVTFoundation/DVTModelObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/DVTReferenceResolverClient-Protocol.h>

@class DVTFilePath, DVTReferenceResolver, DVTSourceCodeLanguage, DVTStackBacktrace, IDEContainer, IDEGroup, NSDictionary, NSMutableDictionary, NSString;

@interface IDEContainerItem : DVTModelObject <DVTInvalidation, DVTReferenceResolverClient>
{
    IDEGroup *_superitem;
    NSMutableDictionary *_properties;
    NSString *_path;
    DVTReferenceResolver *_resolver;
    struct {
        unsigned int observingForBuildProductsRelative:1;
        unsigned int observingForCurrentSDKRelative:1;
        unsigned int observingForSourceTreeRelative:1;
    } _flags;
}

+ (id)keyPathsForValuesAffectingExpectedFilePath;
+ (id)keyPathsForValuesAffectingWrapsLines;
+ (id)keyPathsForValuesAffectingIndentWidth;
+ (id)keyPathsForValuesAffectingTabWidth;
+ (id)keyPathsForValuesAffectingUsesTabs;
+ (BOOL)automaticallyNotifiesObserversOfContainer;
+ (id)supportedCustomResolutionStrategies;
+ (id)supportedResolutionStrategies;
+ (void)initialize;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) DVTReferenceResolver *resolver; // @synthesize resolver=_resolver;
- (void)primitiveInvalidate;
- (void)_takePathAndResolutionStrategiesFromContainerItem:(id)arg1;
@property(readonly) DVTFilePath *expectedFilePath;
@property(readonly) DVTFilePath *resolvedFilePath;
- (BOOL)_getPathAndResolutionStrategiesForAbsolutePath:(id)arg1 path:(id *)arg2 resolutionStrategies:(id *)arg3;
- (BOOL)_getPath:(id *)arg1 forStrategies:(id)arg2;
- (BOOL)_getPath:(id *)arg1 forStrategies:(id)arg2 absolutePath:(id)arg3;
- (id)_absolutePath;
- (id)resolutionContextForStrategies:(id)arg1;
@property(readonly) unsigned long long aggregateSourceControlConflictStatus;
@property(readonly) int aggregateSourceControlServerStatus;
@property(readonly) int aggregateSourceControlLocalStatus;
@property(readonly) unsigned long long conflictStateForUpdateOrMerge;
@property(readonly) int sourceControlServerStatus;
@property(readonly) int sourceControlLocalStatus;
- (void)_setContainerItemEdited;
@property(readonly, copy) NSString *description;
- (void)debugPrintStructure;
- (void)debugPrintInnerStructure;
@property(copy) DVTSourceCodeLanguage *language;
@property BOOL wrapsLines;
@property long long indentWidth;
@property long long tabWidth;
@property BOOL usesTabs;
@property unsigned long long textEncoding;
@property unsigned long long lineEndings;
- (id)_textPreferences;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1 searchParent:(BOOL)arg2;
- (id)_propertiesCreatingIfNeeded;
@property(readonly) NSDictionary *properties;
- (id)name;
@property(readonly, getter=isEditable) BOOL editable;
- (void)_didSetContainer;
- (void)_setContainer:(id)arg1;
- (BOOL)_willSetContainer:(id)arg1;
@property(readonly) IDEContainer *container;
- (void)_setSuperitem:(id)arg1;
@property(readonly) IDEGroup *superitem;
- (void)setPath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)changePath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)primitiveChangePath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)resolverStrategiesDidChange:(id)arg1;
- (void)_configureReferenceResolutionStrategySpecificObservations;
- (void)_clearAllReferenceResolutionStrategySpecificObservations;
- (void)_setupSourceTreeRelativeObservations;
- (void)_clearSourceTreeRelativeObservations;
- (void)_setupCurrentSDKRelativeObservations;
- (void)_clearCurrentSDKRelativeObservations;
- (void)_setupBuildProductsRelativeObservations;
- (void)_clearBuildProductsRelativeObservations;
- (void)_workspaceBuildProductsLocationDidChange:(id)arg1;
- (void)_invalidateResolvedFilePath;
- (id)relativePathForPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)initWithPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)init;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)setReferenceStrategyFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLocationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPathFromUTF8String:(const char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setReferenceStyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

