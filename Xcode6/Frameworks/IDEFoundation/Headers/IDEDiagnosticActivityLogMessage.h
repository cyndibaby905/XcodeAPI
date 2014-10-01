

#import <IDEFoundation/IDEActivityLogMessage.h>
#import <IDEFoundation/IDEDiagnosticItemDelegate-Protocol.h>
    
@class DVTDispatchLock, DVTWeakInterposer, NSArray, NSMutableArray, NSString;

@interface IDEDiagnosticActivityLogMessage : IDEActivityLogMessage
{
    DVTDispatchLock *_diagnosticFixItItemsLock;
    NSMutableArray *_diagnosticFixItItems;
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    DVTWeakInterposer *_representedObject_dvtWeakInterposer;
}

+ (id)keyPathsForValuesAffectingFixableDiagnosticItems;
+ (id)diagnosticMessageType;
@property(copy, nonatomic) NSArray *diagnosticFixItItems; // @synthesize diagnosticFixItItems=_diagnosticFixItItems;
@property __weak id representedObject;
@property __weak id <IDEDiagnosticItemDelegate> delegate;
@property(readonly) NSArray *fixableDiagnosticItems;
@property(readonly, copy) NSArray *diagnosticFixItItemsSnapshot;
- (void)removeObjectFromDiagnosticFixItItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inDiagnosticFixItItemsAtIndex:(unsigned long long)arg2;
@property(readonly) NSMutableArray *mutableDiagnosticFixItItems;
@property(readonly) NSString *severityString;
@property(readonly) int diagnosticSeverity;
- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToDiagnosticItem:(id)arg1;
- (BOOL)isEqualDisregardingTimestampToDiagnosticItem:(id)arg1;
- (BOOL)_isEqualToDiagnosticItem:(id)arg1 disregardingTimestamp:(BOOL)arg2;
- (BOOL)_array:(id)arg1 isEqualToArray:(id)arg2;
- (id)init;
- (id)initWithSeverity:(int)arg1 title:(id)arg2 location:(id)arg3;

@end

