

#import <Foundation/Foundation.h>

@class DVTTextDocumentLocation, NSString;

@protocol IDEDebugSession <NSObject>
@property BOOL isDetached;
@property(getter=isProfilingSupported) BOOL profilingSupported;
@property(readonly, copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocation;
@property BOOL hasCrashed;
@property long long exitCode;
@property BOOL hasExitCode;
@property(readonly) id <IDEDebugProcess> process;
@property(readonly) int coalescedState;
@property int state;
- (void)requestLoadDylibAtPath:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (NSRange)rangeOfExpressionForFullTextAtPrompt:(NSString *)arg1;
- (BOOL)canContinueToLocation:(DVTTextDocumentLocation *)arg1 withinBlockAtRange:(NSRange)arg2;
- (BOOL)consoleShouldTrackInputHistory;
- (BOOL)shouldAcceptFromDebugSession:(id <IDEDebugSession>)arg1 error:(id *)arg2;
- (BOOL)shouldRelinquishToDebugSession:(id <IDEDebugSession>)arg1 error:(id *)arg2;
- (void)evaluateExpression:(NSString *)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(dispatch_queue_t )arg4 completionHandler:(void (^)(NSString *, NSString *))arg5;
- (void)evaluateExpression:(NSString *)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(dispatch_queue_t )arg4 resultHandler:(void (^)(NSString *))arg5;
- (void)executeDebuggerCommand:(NSString *)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)requestFetchEvent;
- (void)requestDetach;
- (void)requestStop;
- (void)requestContinueToLocation:(DVTTextDocumentLocation *)arg1;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepOverInstruction;
- (void)requestStepIntoInstruction;
- (void)requestStepOut;
- (void)requestStepOverLine;
- (void)requestStepIn;
@end

