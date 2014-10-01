

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray;

@interface DTDKListShoeboxIDsService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingShoeboxIDs;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2;
@property(readonly) NSArray *shoeboxIDs;

@end

