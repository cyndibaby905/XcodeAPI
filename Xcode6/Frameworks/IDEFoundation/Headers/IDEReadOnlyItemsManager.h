

#import <Foundation/Foundation.h>

@interface IDEReadOnlyItemsManager : NSObject
{
}

+ (id)readOnlyItemsManagerAspect;
+ (id)localizedRecoveryMessageForFailedUnlockingAttemptWithStatus:(int)arg1;
+ (id)localizedDescriptionForReadOnlyStatus:(int)arg1 itemName:(id)arg2 pluralized:(BOOL)arg3;
+ (BOOL)shouldShowLockedIndicatorForStatus:(int)arg1;
+ (BOOL)tryToMakeFilePathWritable:(id)arg1 error:(id *)arg2;
+ (BOOL)_addUserWritePermissionToFilePath:(id)arg1 error:(id *)arg2;
+ (int)readOnlyStatusOfFilePath:(id)arg1;

@end

