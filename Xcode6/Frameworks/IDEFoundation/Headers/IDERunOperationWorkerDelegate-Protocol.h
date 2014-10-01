

#import <Foundation/Foundation.h>

@class IDERunOperationWorker, NSError;

@protocol IDERunOperationWorkerDelegate <NSObject>
- (void)workerDidComplete:(IDERunOperationWorker *)arg1 withError:(NSError *)arg2;
@end

