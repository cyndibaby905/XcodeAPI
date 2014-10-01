

#import <IDEFoundation/IDERunDeviceService.h>

@interface IDEPosixSpawnLocalService : IDERunDeviceService
{
}

+ (id)capability;
- (id)operationWorkerWithLaunchSession:(id)arg1 error:(id *)arg2;
- (id)capabilitySequenceForLaunchSession:(id)arg1;

@end

