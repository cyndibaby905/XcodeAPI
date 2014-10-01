

#import <IDEFoundation/IDEInMemoryLogStore.h>

@interface IDEInMemoryLogStore_Impl : IDEInMemoryLogStore
{
}

- (BOOL)preserveOldLogs;
- (void)setPreserveOldLogs:(BOOL)arg1;
- (void)_removeLogRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)addLog:(id)arg1 entityIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

