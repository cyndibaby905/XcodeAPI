

#import <DVTFoundation/DTDKTeamBasedService.h>

@interface DTDKAddApplicationGroupToTeamService : DTDKTeamBasedService
{
}

+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform identifier:(id)identifier name:(id)name;

@end

