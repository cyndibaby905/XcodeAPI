

#import <IDEFoundation/IDECustomUpgradeTask.h>

@protocol IDEUpgradeableItem
- (void)enumerateUpgradeTasksWithBlock:(void (^)(IDECustomUpgradeTask *))arg1;
@end

