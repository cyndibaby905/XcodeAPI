

#import <IDEFoundation/IDEDistributionMethodExport.h>

@interface IDEDistributionMethodSaveBuiltProducts : IDEDistributionMethodExport
{
}

- (id)exportStepName;
- (BOOL)wantsProvisioningProfiles;
- (id)installerCertificateKind;
- (id)certificateKind;
- (id)orderedDistributionStepClassNames;
- (id)subtitle;
- (id)shortTitle;
- (id)title;
- (_Bool)supportsDistributionOfArchive:(id)arg1;

@end

