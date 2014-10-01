

#import <IDEFoundation/IDEUpgradeContext.h>

@interface IDEUpgradeBlueprintContext : IDEUpgradeContext
{
    id <IDEBlueprint> _blueprint;
}

@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (NSString *)description;
- (id)initWithBlueprint:(id)arg1;

@end

