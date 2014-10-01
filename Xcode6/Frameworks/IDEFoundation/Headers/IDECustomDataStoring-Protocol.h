

#import <DVTFoundation/DVTCustomDataStoring-Protocol.h>

@class DVTCustomDataSpecifier, IDEWorkspace;

@protocol IDECustomDataStoring <DVTCustomDataStoring>
- (void)addSpecifier:(DVTCustomDataSpecifier *)arg1 inWorkspace:(IDEWorkspace *)arg2 toSCMWithCompletionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)scmStatusForSpecifier:(DVTCustomDataSpecifier *)arg1 completionBlock:(void (^)(int, NSError *))arg2;
@end

