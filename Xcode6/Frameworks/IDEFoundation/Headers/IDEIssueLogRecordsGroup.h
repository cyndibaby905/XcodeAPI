

#import <Foundation/Foundation.h>

@class NSArray, NSMutableArray;

@interface IDEIssueLogRecordsGroup : NSObject
{
    NSMutableArray *_logRecords;
}

+ (void)initialize;
- (void)removeLogsForIssues:(id)arg1;
- (void)addLogsForIssues:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSArray *logRecords; // @dynamic logRecords;
@property(readonly, copy) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;

@end

