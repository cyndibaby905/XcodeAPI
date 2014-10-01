

#import <IDEFoundation/IDERunOperation.h>

@class DVTFilePath;

@interface IDEOCUnitTestRunnerOperation : IDERunOperation
{
    DVTFilePath *_testScopeFilePath;
}

@property(retain) DVTFilePath *testScopeFilePath; // @synthesize testScopeFilePath=_testScopeFilePath;
- (void)runningDidFinish;

@end

