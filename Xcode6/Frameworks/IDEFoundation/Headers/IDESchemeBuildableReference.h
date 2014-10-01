

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>
#import <Foundation/Foundation.h>

@class DVTObservingToken, IDEContainer, IDEScheme;

@protocol IDEBlueprintProvider;

@interface IDESchemeBuildableReference : NSObject <DVTXMLUnarchiving, NSCopying>
{
    NSString *_buildableIdentifier;
    NSString *_blueprintIdentifier;
    NSString *_cachedBuildableName;
    NSString *_cachedBlueprintName;
    NSString *_legacyBuildableIdentifier;
    IDEContainer<IDEBlueprintProvider> *_referencedContainer;
    NSString *_lastArchivedReferencedContainerPath;
    IDEScheme *_scheme;
    id <IDEBlueprint> _cachedResolvedBlueprint;
    id <IDEBuildable> _cachedResolvedBuildable;
    DVTObservingToken *_referencedContainersObservingToken;
    DVTObservingToken *_schemeClosedToken;
    DVTObservingToken *_schemeValidToken;
    DVTObservingToken *_referencedContainerFilePathObservingToken;
    DVTObservingToken *_referencedContainerBlueprintsObservingToken;
    DVTObservingToken *_referencedContainerIsValidObservingToken;
    DVTObservingToken *_resolvedBuildableNameObservingToken;
    DVTObservingToken *_resolvedBlueprintNameObservingToken;
    BOOL _resolvingBlueprint;
    BOOL _willBeArchived;
}

+ (id)resolvedBuildableForLegacyIdentifier:(id)arg1 inContainer:(id)arg2;
+ (id)keyPathsForValuesAffectingBlueprintName;
+ (id)keyPathsForValuesAffectingBuildableName;
@property(readonly) BOOL willBeArchived; // @synthesize willBeArchived=_willBeArchived;
@property(copy) NSString *cachedBuildableName; // @synthesize cachedBuildableName=_cachedBuildableName;
@property(retain, nonatomic) IDEContainer<IDEBlueprintProvider> *referencedContainer; // @synthesize referencedContainer=_referencedContainer;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setReferencedContainerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBlueprintNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildableNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBlueprintIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildableIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildableProductIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)loadLegacyBuildableWithResolutionContextContainer:(id)arg1;
- (void)resolveBuildableFromImport;
- (BOOL)referencesSameBuildableAsReference:(id)arg1;
- (id)currentReferencedContainerPath;
- (void)markSchemeDirty;
- (id)referencedContainerFromSchemeForArchivedPath:(id)arg1;
- (id)referenceResolutionContext;
- (id)containerReferenceResolver;
@property(readonly) NSString *blueprintName;
@property(readonly) NSString *buildableName;
- (BOOL)updateCachedBuildableName;
- (BOOL)updateCachedBlueprintName;
@property(readonly) id <IDEBuildable> resolvedBuildable;
- (void)_invalidateResolvedBuildable;
@property(readonly) id <IDEBlueprint> resolvedBlueprint;
- (void)_invalidateResolvedBlueprint;
- (void)setBlueprintIdentifierWithoutInvalidatingResolvedBlueprint:(id)arg1;
@property(copy) NSString *blueprintIdentifier;
@property(copy) NSString *cachedBlueprintName;
@property(copy) NSString *buildableIdentifier;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithBuildable:(id)arg1 scheme:(id)arg2 willBeArchived:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

