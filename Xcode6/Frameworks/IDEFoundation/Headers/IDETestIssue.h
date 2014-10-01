

#import <IDEFoundation/IDEIssue.h>

@class IDETest, NSArray;

@interface IDETestIssue : IDEIssue
{
    IDETest *_test;
    NSArray *_performanceMetrics;
    unsigned long long _issueGeneration;
}

@property(readonly) unsigned long long issueGeneration; // @synthesize issueGeneration=_issueGeneration;
@property(readonly) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(readonly) IDETest *test; // @synthesize test=_test;
- (id)_documentLocationForFilePath:(id)arg1 lineNumber:(id)arg2 timestamp:(id)arg3;
- (id)initWithIssueProvider:(id)arg1 test:(id)arg2 performanceMetrics:(id)arg3 testResultMessage:(id)arg4 timestamp:(id)arg5 issueTypeIdentifier:(id)arg6 issueGeneration:(unsigned long long)arg7;

@end

