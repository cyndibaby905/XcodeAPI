

#import <IDEFoundation/IDEUpgradeContext.h>

@class IDEContainer;

@interface IDEUpgradeContainerContext : IDEUpgradeContext
{
    IDEContainer *_container;
}

@property(readonly) IDEContainer *container; // @synthesize container=_container;
- (NSString *)description;
- (id)initWithContainer:(id)arg1;

@end

