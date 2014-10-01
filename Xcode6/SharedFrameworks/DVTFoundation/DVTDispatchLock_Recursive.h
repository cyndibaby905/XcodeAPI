

#import <DVTFoundation/DVTDispatchLock.h>

@interface DVTDispatchLock_Recursive : DVTDispatchLock
{
    void *_context;
}

- (BOOL)isRecursive;
- (void)performLockedBlockAsyncUnlessRecursing:(CDUnknownBlockType)arg1;
- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;
- (id)initWithDebugName:(id)arg1;

@end

