

#import <IDEFoundation/IDESchemeAction.h>

@class NSString;

@interface IDEArchiveSchemeAction : IDESchemeAction
{
    BOOL _includeSnapshotInArchive;
    BOOL _revealArchiveInOrganizer;
    NSString *_customArchiveName;
    NSString *_buildConfiguration;
    NSString *_packagerIdentifier;
}

+ (id)keyPathsForValuesAffectingDefaultArchiveName;
+ (id)keyPathsForValuesAffectingSubtitle;
@property(copy) NSString *packagerIdentifier; // @synthesize packagerIdentifier=_packagerIdentifier;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(copy) NSString *customArchiveName; // @synthesize customArchiveName=_customArchiveName;
@property BOOL revealArchiveInOrganizer; // @synthesize revealArchiveInOrganizer=_revealArchiveInOrganizer;
@property BOOL includeSnapshotInArchive; // @synthesize includeSnapshotInArchive=_includeSnapshotInArchive;
- (void)addArchivingStrategy:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setRevealArchiveInOrganizerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setIncludeSnapshotInArchiveFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPackagerIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCustomArchiveNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildConfigurationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)archivingOperationGroupForExecutionEnvironment:(id)arg1 buildLog:(id)arg2 buildParameters:(id)arg3 schemeActionRecord:(id)arg4 error:(id *)arg5 actionCallbackBlock:(CDUnknownBlockType)arg6;
- (id)overridingMacrosForArchiveBuildWithSchemeName:(id)arg1 workspaceArena:(id)arg2;
@property(readonly) NSString *defaultArchiveName;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (void)_commonInit;
- (id)init;

@end

