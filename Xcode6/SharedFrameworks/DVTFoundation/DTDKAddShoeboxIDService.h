

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary;

@interface DTDKAddShoeboxIDService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingShoeboxID;
+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform shoeboxIdentifier:(id)identifier;
@property(readonly) NSDictionary *shoeboxID;

@end

