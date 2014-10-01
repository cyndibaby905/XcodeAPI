

#import <DTXConnectionServices/DTXAllowedRPC-Protocol.h>

@class NSArray, NSDictionary, NSException, NSNumber, NSString;

@protocol UIAInstrumentAuthorizedAPI <DTXAllowedRPC>
- (void)notifyMonitoredPidIsDead:(NSNumber *)arg1;
- (NSDictionary *)performTaskOnHost:(NSString *)arg1 withArguments:(NSArray *)arg2 timeout:(NSNumber *)arg3;
- (void)scriptDidThrowException:(NSDictionary *)arg1;
- (void)agentIsGone:(NSException *)arg1;
- (void)stopPlayingWithException:(NSException *)arg1;
- (void)updateBundleStatus:(NSNumber *)arg1;
- (void)updateScriptStatus:(NSNumber *)arg1;
- (void)agentIsReady;
@end

