

#import <Foundation/Foundation.h>
#import <IDEFoundation/IDEOCUnitTestOutputParserDelegate-Protocol.h>

@class DVTRegularExpression;

@interface IDEOCUnitTestOutputParser : NSObject
{
    id <IDEOCUnitTestOutputParserDelegate> _delegate;
    DVTRegularExpression *_testSuiteStartedRegex;
    DVTRegularExpression *_testSuiteFinishedRegex;
    DVTRegularExpression *_testSuiteExecutedRegex;
    DVTRegularExpression *_testCaseStartedRegex;
    DVTRegularExpression *_testCaseMeasuredPerformanceMetricRegex;
    DVTRegularExpression *_testCaseFinishedRegex;
    DVTRegularExpression *_testCaseFailedRegex;
    NSArray *_performanceTestParsers;
    dispatch_queue_t _processingQueue;
    dispatch_queue_t _delegateQueue;
    BOOL _outputsToConsole;
}

+ (BOOL)_initializedForUserInteraction;
+ (void)_initializeRegularExpressionsIfNeeded;
@property BOOL outputsToConsole; // @synthesize outputsToConsole=_outputsToConsole;
@property __weak id <IDEOCUnitTestOutputParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
- (void)performParserBlock:(CDUnknownBlockType)arg1;
- (void)processConsoleText:(id)arg1;
- (id)filterTestSuiteIdentifierFromString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

