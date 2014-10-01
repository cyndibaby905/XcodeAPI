

#import <DVTFoundation/DTDKTeamBasedService.h>

@interface DTDKAddOMCIdentifiersToAppIDService : DTDKTeamBasedService
{
}

+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform portalIdentifiers:(id)identifiers appIdId:(id)appIdentifier;

@end

