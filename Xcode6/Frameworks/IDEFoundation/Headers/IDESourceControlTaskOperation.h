

#import <IDEFoundation/IDESourceControlOperation.h>

@class DVTPerformanceMetric, DVTTask, NSArray, NSMutableData, NSString;

@interface IDESourceControlTaskOperation : IDESourceControlOperation
{
    DVTTask *_task;
    DVTTask *_pipeTask;
    NSString *_launchPath;
    NSString *_currentDirectoryPath;
    NSArray *_arguments;
    NSMutableData *_data;
    NSMutableData *_errorData;
    DVTPerformanceMetric *_metric;
    BOOL _readyToParseData;
    CDUnknownBlockType _standardOutputFeedbackBlock;
    CDUnknownBlockType _standardErrorFeedbackBlock;
}

+ (id)_authenticationAgentExecutablePath;
+ (id)sourceControlTaskOperationLogAspect;
@property(copy) CDUnknownBlockType standardErrorFeedbackBlock; // @synthesize standardErrorFeedbackBlock=_standardErrorFeedbackBlock;
@property(copy) CDUnknownBlockType standardOutputFeedbackBlock; // @synthesize standardOutputFeedbackBlock=_standardOutputFeedbackBlock;
@property BOOL readyToParseData; // @synthesize readyToParseData=_readyToParseData;
@property(retain) NSMutableData *errorData; // @synthesize errorData=_errorData;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(retain) DVTTask *pipeTask; // @synthesize pipeTask=_pipeTask;
@property(readonly) DVTTask *task; // @synthesize task=_task;
- (void)parseDataOrGenerateErrorForTask:(id)arg1 operation:(id)arg2;
- (void)setWaitToParseData:(BOOL)arg1;
- (void)_real_main;
- (void)main;
- (id)readDataFromFileHandle:(id)arg1 intoBuffer:(id)arg2 runloopMode:(id)arg3 outstandingOperationCounter:(long long *)arg4 dataParsingBlock:(CDUnknownBlockType)arg5;
- (id)pipeToOperation;
- (id)rawErrorOutput;
- (id)rawStandardOutput;
- (id)rawInput;
- (id)errorFromErrorMessage:(id)arg1;
- (void)parseData;

@end

