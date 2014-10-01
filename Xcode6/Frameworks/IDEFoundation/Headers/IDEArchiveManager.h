

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTObservingToken, NSArray, NSFileManager, NSMutableArray;

@interface IDEArchiveManager : NSObject
{
    DVTDispatchLock *_archiveManagerLock;
    NSFileManager *_fileManager;
    NSMutableArray *_archives;
    _Bool _hasScanned;
    DVTObservingToken *_distributionArchivesLocationObservingToken;
}

+ (void)initialize;
+ (id)sharedArchiveManager;
- (BOOL)installArchiveAtPath:(id)arg1 revealInstalledArchive:(BOOL)arg2;
- (id)_installedArchiveAtPath:(id)arg1;
- (void)deleteArchives:(id)arg1;
- (void)deleteArchive:(id)arg1;
@property(copy) NSArray *archives; // @dynamic archives;
- (void)_populateArchivesIfNeeded;
- (void)_refreshArchives;
- (id)_allPotentialArchivePathsWithin:(id)arg1;
- (void)_checkPathForArchive:(id)arg1 andAddToArray:(id)arg2;
- (BOOL)_couldBeArchivePath:(id)arg1;
- (void)_revealArchiveAtPath:(id)arg1;
- (void)archiveInstalledProductsDirectoryWithPath:(id)arg1 auxiliaryFilesDirectoryPath:(id)arg2 schemeName:(id)arg3 archiveName:(id)arg4 platform:(id)arg5 revealNewArchive:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableArchives; // @dynamic mutableArchives;

@end

