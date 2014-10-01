

#import <IDEFoundation/ProjectItemWrapper.h>

@interface IDEBreakpointWrapper : ProjectItemWrapper
{
}

- (id)name;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setCondition:(id)arg1;
- (id)condition;
- (void)setAutomaticallyContinue:(BOOL)arg1;
- (BOOL)automaticallyContinue;

@end

