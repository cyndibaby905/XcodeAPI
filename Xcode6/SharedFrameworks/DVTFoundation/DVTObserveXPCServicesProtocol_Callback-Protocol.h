

@class NSFileHandle, NSString;

@protocol DVTObserveXPCServicesProtocol_Callback
- (void)attachToServiceName:(NSString *)arg1 pid:(int)arg2 parentPID:(int)arg3 stdoutFH:(NSFileHandle *)arg4 stderrFH:(NSFileHandle *)arg5;
@end

