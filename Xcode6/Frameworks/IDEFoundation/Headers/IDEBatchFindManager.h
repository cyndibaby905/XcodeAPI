

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;

@interface IDEBatchFindManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_history;
    unsigned long long _maxHistoryCount;
    NSString *_archivePath;
}

+ (void)initialize;
@property(readonly) NSArray *findHistory; // @synthesize findHistory=_history;
@property(nonatomic) unsigned long long maxHistoryCount; // @synthesize maxHistoryCount=_maxHistoryCount;
- (void)loadHistory;
- (void)saveHistory;
- (id)historyItemForDescription:(id)arg1;
- (void)clearHistory;
- (void)_removeHistoryFile;
- (void)addHistoryItem:(id)arg1;
- (void)_removeExtraHistory;
- (void)primitiveInvalidate;
- (id)initWithDerivedDataFolderPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

