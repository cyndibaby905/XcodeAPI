

#import <Foundation/Foundation.h>

@interface NSProcessInfo (DVTNSProcessInfoAdditions)
- (id)dvt_activeSystemActivityTokensMatchingOptions:(unsigned long long)arg1;
- (id)dvt_beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (BOOL)dvt_shouldDisallowSaving;
- (void)dvt_setShouldDisallowSaving:(BOOL)arg1;
- (void)dvt_disableSuddenTerminationForReason:(id)arg1;
- (void)dvt_enableSuddenTerminationForReason:(id)arg1;
- (void)dvt_enableAutomaticTerminationForReason:(id)arg1;
- (void)dvt_disableAutomaticTerminationForReason:(id)arg1;
- (long long)dvt_automaticTerminationDisablingCountForReason:(id)arg1;
- (id)dvt_automaticTerminationDisablingReasons;
- (void)_dvt_setSuddenTerminationDisablingCount:(long long)arg1 forReason:(id)arg2;
- (long long)dvt_suddenTerminationDisablingCountForReason:(id)arg1;
- (id)dvt_suddenTerminationDisablingReasons;
- (id)dvt_executablePath;
- (unsigned long long)dvt_numberOfAvailableCPUs;
@end

