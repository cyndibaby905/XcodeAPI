

#import <DTXConnectionServices/DTXAllowedRPC-Protocol.h>

@class NSDictionary;

@protocol DVTDTApplicationWorkspaceClient <DTXAllowedRPC>
- (void)applicationUninstalled:(NSDictionary *)arg1;
- (void)applicationInstalled:(NSDictionary *)arg1;
@end

