

#import <IDEFoundation/IDEDistributionMethodAppStore.h>

@interface IDEDistributionMethodInAppPurchaseContent : IDEDistributionMethodAppStore
{
}

- (id)installerCertificateKind;
- (id)certificateKind;
- (BOOL)wantsProvisioningProfiles;
- (_Bool)supportsDistributionOfArchive:(id)arg1;

@end

