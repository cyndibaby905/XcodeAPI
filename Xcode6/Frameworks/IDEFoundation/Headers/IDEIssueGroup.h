

#import <Foundation/Foundation.h>

@class DVTMapTable, IDEContainer, IDEIssueProvider, NSArray, NSMutableArray, NSSet;

@interface IDEIssueGroup : NSObject
{
    IDEIssueProvider *_issueProvider;
    IDEContainer *_container;
    id <IDEBlueprint> _blueprint;
    NSMutableArray *_issueFileGroups;
    DVTMapTable *_issueFileGroupsIndex;
    NSMutableArray *_issuesWithNoFile;
    NSMutableArray *_issueTypeGroups;
    DVTMapTable *_issueTypeGroupsIndex;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    int _issueType;
}

@property(readonly) int issueType; // @synthesize issueType=_issueType;
@property(readonly) NSArray *issueTypeGroups; // @synthesize issueTypeGroups=_issueTypeGroups;
@property(readonly) NSArray *issuesWithNoFile; // @synthesize issuesWithNoFile=_issuesWithNoFile;
@property(readonly) NSArray *issueFileGroups; // @synthesize issueFileGroups=_issueFileGroups;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) NSSet *_allIssues;
- (void)_removeIssues:(id)arg1;
- (void)_addIssues:(id)arg1;
- (void)_addNoFileIssues:(id)arg1;
- (void)_updateIssueType;
@property(readonly) unsigned long long issueCount;
- (id)_initWithIssueProvider:(id)arg1 container:(id)arg2 blueprint:(id)arg3;
- (id)init;

@end

