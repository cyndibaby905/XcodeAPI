

#import <DVTFoundation/DVTOperation.h>

@class IDELaunchParametersSnapshot;

@interface IDEProfileOperation : DVTOperation
{
    IDELaunchParametersSnapshot *_launchParameters;
}

+ (id)operationWithLaunchParametersSnapshot:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;

@end

