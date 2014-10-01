

#import <DVTFoundation/DVTOperationGroup.h>

@class DVTFilePath, DVTPlatform, IDEArchivePathsSnapshot, NSString;

@interface IDEArchivingOperation : DVTOperationGroup
{
    NSString *_archiveName;
    NSString *_schemeName;
    DVTPlatform *_platform;
    DVTFilePath *_archiveBuildFolder;
    DVTFilePath *_dstrootPath;
    DVTFilePath *_symrootPath;
    DVTFilePath *_objrootPath;
    DVTFilePath *_sharedPrecompsPath;
    IDEArchivePathsSnapshot *_archiveSnapshot;
    BOOL _revealCreatedArchive;
}

+ (id)overridingMacrosForArchiveBuildWithSchemeName:(id)arg1 workspaceArena:(id)arg2;
+ (void)_calculateArchiveBuildFolder:(id *)arg1 dstrootPath:(id *)arg2 symrootPath:(id *)arg3 objrootPath:(id *)arg4 sharedPrecompsPath:(id *)arg5 givenSchemeName:(id)arg6 workspaceArena:(id)arg7;
@property(readonly) IDEArchivePathsSnapshot *archiveSnapshot; // @synthesize archiveSnapshot=_archiveSnapshot;
- (void)main;
- (id)preperatoryOperationForArchiveBuild;
- (id)initWithArchiveName:(id)arg1 schemeName:(id)arg2 workspaceArena:(id)arg3 platform:(id)arg4 revealCreatedArchive:(BOOL)arg5;

@end

