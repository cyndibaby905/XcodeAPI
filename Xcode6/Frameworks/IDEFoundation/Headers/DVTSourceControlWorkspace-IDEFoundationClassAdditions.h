

#import <DVTSourceControl/DVTSourceControlWorkspace.h>

@interface DVTSourceControlWorkspace (IDEFoundationClassAdditions)
- (void)setState:(unsigned long long)arg1 forWorkingTree:(id)arg2;
- (unsigned long long)stateForWorkingTree:(id)arg1;
- (id)workingCopyForWorkingTree:(id)arg1;
@end

