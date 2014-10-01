

#import <Foundation/Foundation.h>

@class DVTHashTable, NSArray, NSMutableArray, NSMutableDictionary;

@interface IDEDocumentIssueSummary : NSObject
{
    NSMutableArray *_vendedIssuesBySeqNum;
    NSMutableDictionary *_issuesIndexedByLineNumber;
    DVTHashTable *_observers;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    unsigned long long _fixItCount;
    unsigned long long _maxSeverity;
}

+ (id)keyPathsForValuesAffectingMaxSeverity;
@property(readonly) unsigned long long fixItCount; // @synthesize fixItCount=_fixItCount;
@property(readonly) unsigned long long analyzerResultCount; // @synthesize analyzerResultCount=_analyzerResultCount;
@property(readonly) unsigned long long noticeCount; // @synthesize noticeCount=_noticeCount;
@property(readonly) unsigned long long warningCount; // @synthesize warningCount=_warningCount;
@property(readonly) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly) unsigned long long testFailureCount; // @synthesize testFailureCount=_testFailureCount;
@property(retain) DVTHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableDictionary *issuesIndexedByLineNumber; // @synthesize issuesIndexedByLineNumber=_issuesIndexedByLineNumber;
@property(copy, nonatomic) NSArray *vendedIssuesBySeqNum; // @synthesize vendedIssuesBySeqNum=_vendedIssuesBySeqNum;
@property(readonly) unsigned long long maxSeverity;
- (void)removeVendedIssuesBySeqNumAtIndexes:(id)arg1;
- (void)insertVendedIssuesBySeqNum:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromVendedIssuesBySeqNumAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inVendedIssuesBySeqNumAtIndex:(unsigned long long)arg2;
- (id)init;

@end

