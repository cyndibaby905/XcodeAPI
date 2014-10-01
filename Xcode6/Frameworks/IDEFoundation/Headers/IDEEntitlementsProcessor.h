

#import <Foundation/Foundation.h>

@class IDEDistributionItem, IDEDistributionMethod, IDEEntitlementsDictionary;

@interface IDEEntitlementsProcessor : NSObject
{
    IDEDistributionMethod *_distributionMethod;
    IDEDistributionItem *_distributionItem;
    IDEEntitlementsDictionary *_profileEntitlements;
    IDEEntitlementsDictionary *_itemEntitlements;
}

@property(readonly, nonatomic) IDEEntitlementsDictionary *itemEntitlements; // @synthesize itemEntitlements=_itemEntitlements;
@property(readonly, nonatomic) IDEEntitlementsDictionary *profileEntitlements; // @synthesize profileEntitlements=_profileEntitlements;
@property(readonly, nonatomic) IDEDistributionItem *distributionItem; // @synthesize distributionItem=_distributionItem;
@property(readonly, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
- (BOOL)runWithError:(id *)arg1;
@property(readonly, nonatomic) BOOL needsInteraction;
- (id)initWithDistributionMethod:(id)arg1 distributionItem:(id)arg2 profileEntitlements:(id)arg3 itemEntitlements:(id)arg4;

@end

