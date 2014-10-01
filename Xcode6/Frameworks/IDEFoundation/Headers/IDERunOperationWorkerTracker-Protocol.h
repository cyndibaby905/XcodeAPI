

#import <Foundation/Foundation.h>

@class IDERunOperationWorker, NSError;

@protocol IDERunOperationWorkerTracker <NSObject>
- (void)runningDidFinish:(IDERunOperationWorker *)arg1 withError:(NSError *)arg2;
@end

