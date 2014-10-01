

#import <DVTFoundation/DVTPortalOperation.h>

@class NSString;

@interface DVTTeamOperationBase : DVTPortalOperation
{
    NSString *_platform;
}

+ (id)operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
+ (id)operationWithToken:(id)arg1;
+ (id)_operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
+ (id)_operationsWithToken:(id)arg1;
@property(copy) NSString *platform; // @synthesize platform=_platform;
- (NSString *)description;

@end

