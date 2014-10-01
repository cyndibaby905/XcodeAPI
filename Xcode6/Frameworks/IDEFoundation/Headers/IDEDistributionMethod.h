

#import <Foundation/Foundation.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface IDEDistributionMethod : NSObject
{
    double _sortOrder;
    NSString *_group;
    NSSet *_requiredTeamTypes;
}

@property(readonly) NSSet *requiredTeamTypes; // @synthesize requiredTeamTypes=_requiredTeamTypes;
@property(readonly) NSString *group; // @synthesize group=_group;
@property(readonly) double sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) BOOL wantsToSkipPackaging;
@property(readonly) NSString *exportStepName;
@property(readonly) NSDictionary *requiredProfileEntitlements;
@property(readonly) unsigned long long provisioningProfileType;
@property(readonly) NSArray *availableICloudEnvironmentsOverride;
@property(readonly) BOOL wantsProvisioningProfiles;
@property(readonly) NSString *installerCertificateKind;
@property(readonly) NSString *certificateKind;
@property(readonly) NSArray *orderedDistributionStepClassNames;
@property(readonly) NSArray *entitlementsProcessorClasses;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *shortTitle;
@property(readonly) NSString *title;
@property(readonly, getter=isAppStoreBound) BOOL appStoreBound;
@property(readonly) int supportedTask;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
@property(readonly) NSString *taskNoun;
@property(readonly) NSString *taskVerb;
- (id)initWithExtension:(id)arg1;

@end

