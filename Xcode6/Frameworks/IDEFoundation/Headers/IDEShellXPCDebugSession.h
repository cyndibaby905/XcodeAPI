

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEDebugSession-Protocol.h>

@class DVTTextDocumentLocation, IDEShellXPCProcess, NSString;

@interface IDEShellXPCDebugSession : NSObject <IDEDebugSession>
{
    IDEShellXPCProcess *_process;
    BOOL hasExitCode;
    BOOL hasCrashed;
    BOOL profilingSupported;
    BOOL isDetached;
    BOOL _debuggerShouldAttachToTarget;
    BOOL _supportsMultiplePCAnnotation;
    BOOL _supportsPCAnnotationDragging;
    int state;
    long long exitCode;
    IDEShellXPCProcess *_targetProcess;
    DVTTextDocumentLocation *_instructionPointerLocation;
    DVTTextDocumentLocation *_instructionPointerLocationForDisassembly;
}

@property(readonly) BOOL supportsPCAnnotationDragging; // @synthesize supportsPCAnnotationDragging=_supportsPCAnnotationDragging;
@property(readonly) BOOL supportsMultiplePCAnnotation; // @synthesize supportsMultiplePCAnnotation=_supportsMultiplePCAnnotation;
@property(copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocationForDisassembly; // @synthesize instructionPointerLocationForDisassembly=_instructionPointerLocationForDisassembly;
@property(copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocation; // @synthesize instructionPointerLocation=_instructionPointerLocation;
@property(readonly) BOOL debuggerShouldAttachToTarget; // @synthesize debuggerShouldAttachToTarget=_debuggerShouldAttachToTarget;
@property(retain) IDEShellXPCProcess *targetProcess; // @synthesize targetProcess=_targetProcess;
@property(readonly) id <IDEDebugProcess> process; // @synthesize process=_process;
@property BOOL isDetached; // @synthesize isDetached;
@property(getter=isProfilingSupported) BOOL profilingSupported; // @synthesize profilingSupported;
@property BOOL hasCrashed; // @synthesize hasCrashed;
@property long long exitCode; // @synthesize exitCode;
@property BOOL hasExitCode; // @synthesize hasExitCode;
@property int state; // @synthesize state;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (NSRange)rangeOfExpressionForFullTextAtPrompt:(id)arg1;
- (BOOL)canContinueToLocation:(id)arg1 withinBlockAtRange:(NSRange)arg2;
- (BOOL)consoleShouldTrackInputHistory;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (BOOL)shouldAcceptFromDebugSession:(id)arg1 error:(id *)arg2;
- (BOOL)shouldRelinquishToDebugSession:(id)arg1 error:(id *)arg2;
- (void)requestFetchEvent;
- (void)requestDetach;
- (void)requestStop;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepOverInstruction;
- (void)requestStepIntoInstruction;
- (void)requestStepOut;
- (void)requestStepOverLine;
- (void)requestStepIn;
- (BOOL)profilingSupported;
@property(readonly) int coalescedState;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

