

@class IDESchemeActionResult, IDESchemeActionsInvocationRecord;

@protocol IDESchemeActionsInvocationRecordUpdateDelegate
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteTestSummaryForSchemeActionResult:(IDESchemeActionResult *)arg2 withOriginalRemoteTestSummaryIdentifier:(id)arg3 newRemoteTestSummaryIdentifier:(id)arg4;
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteTestSummaryWithOriginalRemoteTestSummaryIdentifier:(id)arg2 newRemoteTestSummaryIdentifier:(id)arg3;
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteLogForSchemeActionResult:(IDESchemeActionResult *)arg2 withOriginalRemoteLogIdentifier:(id)arg3 newRemoteLogIdentifier:(id)arg4;
- (void)fetchTestSummariesAndUpdateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)fetchLogsAndUpdateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)updateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
@end

