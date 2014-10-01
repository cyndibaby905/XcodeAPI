

#import <DVTFoundation/DVTDispatchLock.h>

@interface DVTDispatchLock_ReadWrite : DVTDispatchLock
{
}

- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (id)initWithDebugName:(id)arg1;

@end

