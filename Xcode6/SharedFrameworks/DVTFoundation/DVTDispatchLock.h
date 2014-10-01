

#import <Foundation/Foundation.h>

@interface DVTDispatchLock : NSObject
{
    dispatch_queue_t _queue;
}

+ (id)readWriteDispatchLockWithDebugName:(id)arg1;
+ (id)recursiveDispatchLockWithDebugName:(id)arg1;
+ (id)dispatchLockWithDebugName:(id)arg1;
@property(readonly) dispatch_queue_t queue; // @synthesize queue=_queue;
- (void)performLockedBlockAsyncUnlessRecursing:(CDUnknownBlockType)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)afterTimeInterval:(double)arg1 asyncPerformLockedBlock:(CDUnknownBlockType)arg2;
- (void)asyncPerformLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)performLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isRecursive;
@property(readonly) NSString *debugName;
- (void)dealloc;
- (id)initWithDebugName:(id)arg1;
- (id)initWithDebugName:(id)arg1 isRecursive:(BOOL)arg2;

@end

