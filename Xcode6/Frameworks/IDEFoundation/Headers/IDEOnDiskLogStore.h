

#import <IDEFoundation/IDELogStore.h>

@class NSString;

@interface IDEOnDiskLogStore : IDELogStore
{
}

+ (id)onDiskStoreInWorkspaceArena:(id)arg1 atSubPath:(id)arg2 error:(id *)arg3;
+ (id)onDiskStoreWithRootDirectoryAtPath:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *rootDirectoryPath;
- (void)primitiveInvalidate;

@end

