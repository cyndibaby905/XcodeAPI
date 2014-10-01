

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class DVTFuture, NSError;

@protocol DVTPromise <DVTCancellable>
- (void)trackFuture:(DVTFuture *)arg1;
- (void)trackFuture:(DVTFuture *)arg1 progress:(float)arg2 cancel:(BOOL)arg3 result:(BOOL)arg4 error:(BOOL)arg5;
- (void)setProgress:(long long)arg1;
- (void)failWithError:(NSError *)arg1 afterTimeout:(double)arg2;
- (void)succeedWithResult:(id)arg1 afterTimeout:(double)arg2;
- (void)cancelAfterTimeout:(double)arg1;
- (void)failWithError:(NSError *)arg1;
- (void)succeedWithResult:(id)arg1;
- (void)cancel;
- (DVTFuture *)future;
@end

