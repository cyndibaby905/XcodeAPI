

#import <Foundation/Foundation.h>

@class IDEIssueProvider, NSArray, NSMutableArray, NSURL;

@interface IDEIssueFileGroup : NSObject
{
    IDEIssueProvider *_issueProvider;
    NSURL *_documentURL;
    NSMutableArray *_issues;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    int _issueType;
}

@property(readonly) int issueType; // @synthesize issueType=_issueType;
@property(readonly) NSArray *issues; // @synthesize issues=_issues;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
- (void)_removeIssues:(id)arg1;
- (void)_addIssues:(id)arg1;
- (void)_updateIssueType;
- (id)_initWithIssueProvider:(id)arg1 documentURL:(id)arg2;
- (id)init;

@end

