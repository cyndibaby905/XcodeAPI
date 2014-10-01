

#import <IDEFoundation/IDERunnable.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class IDESchemeBuildableReference, NSString;

@interface IDEBuildableProductRunnable : IDERunnable <DVTXMLUnarchiving>
{
    id <IDEBuildableProduct> _buildableProduct;
    IDESchemeBuildableReference *_buildableReference;
}

+ (id)keyPathsForValuesAffectingBuildableProduct;
+ (id)keyPathsForValuesAffectingHasRunnablePath;
+ (id)keyPathsForValuesAffectingDisplayName;
@property(retain) IDESchemeBuildableReference *buildableReference; // @synthesize buildableReference=_buildableReference;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)addBuildableProductReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildableReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)resolveBuildableFromImport;
- (void)setScheme:(id)arg1;
@property(readonly) id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
- (int)runnableType;
- (id)runnableUTIType:(id *)arg1;
- (BOOL)hasRunnablePath;
- (id)pathToRunnableForBuildParameters:(id)arg1;
- (BOOL)isBlueprint;
- (id)toolTip;
- (id)bundleIdentifier;
- (id)displayName;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithBuildableProduct:(id)arg1 scheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

