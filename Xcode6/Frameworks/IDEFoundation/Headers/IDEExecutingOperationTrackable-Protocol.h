

#import <Foundation/Foundation.h>

@class IDEExecutionOperationTracker;

@protocol IDEExecutingOperationTrackable <NSObject>
- (void)registerTracker:(IDEExecutionOperationTracker *)arg1;
@end

