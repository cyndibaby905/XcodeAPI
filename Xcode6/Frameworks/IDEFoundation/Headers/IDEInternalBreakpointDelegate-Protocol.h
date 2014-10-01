

#import <Foundation/Foundation.h>

@class IDEBreakpoint, NSArray;

@protocol IDEInternalBreakpointDelegate <NSObject>

@optional
- (void)internal_breakpointLocationsAdded:(NSArray *)arg1 removed:(NSArray *)arg2;
- (void)internal_breakpointEnablementChanged:(IDEBreakpoint *)arg1;
@end

