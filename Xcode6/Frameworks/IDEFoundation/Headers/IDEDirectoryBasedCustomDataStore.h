

#import <DVTFoundation/DVTDirectoryBasedCustomDataStore.h>

@interface IDEDirectoryBasedCustomDataStore : DVTDirectoryBasedCustomDataStore
{
}

- (void)addSpecifier:(id)arg1 inWorkspace:(id)arg2 toSCMWithCompletionBlock:(CDUnknownBlockType)arg3;
- (void)scmStatusForSpecifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

