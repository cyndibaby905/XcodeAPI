

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class IDEWorkspace, NSString;

@protocol IDESnapshotConfirmationDelegate <DVTInvalidation>
- (void)cleanup;
- (void)requestSnapshotConfirmationForOperationName:(NSString *)arg1 inWorkspace:(IDEWorkspace *)arg2 completionBlock:(void (^)(BOOL))arg3;
@end

