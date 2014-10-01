

#import <Foundation/Foundation.h>

@class DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEDistributionLogging, IDEDistributionMethod, NSArray, NSString;

@interface IDEDistributionProvisioning : NSObject
{
    NSArray *_rootDistributionItems;
    IDEDistributionMethod *_distributionMethod;
    NSString *_teamID;
    DVTProvisioningProfileManager *_profileManager;
    DVTSigningCertificateManager *_signingCertificateManager;
    IDEDistributionLogging *_logging;
    NSArray *_codesignableDevices;
}

@property(readonly) NSArray *codesignableDevices; // @synthesize codesignableDevices=_codesignableDevices;
@property(readonly) IDEDistributionLogging *logging; // @synthesize logging=_logging;
@property(retain, nonatomic) DVTSigningCertificateManager *signingCertificateManager; // @synthesize signingCertificateManager=_signingCertificateManager;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(readonly) NSArray *rootDistributionItems; // @synthesize rootDistributionItems=_rootDistributionItems;
- (id)_installerSigningInfoForTeamID:(id)arg1 certificateKind:(id)arg2 error:(id *)arg3;
- (id)_signingInfoForItem:(id)arg1 limitToSigningCertificate:(id)arg2 error:(id *)arg3;
- (id)_itemToSigningInfoForSigningCertificate:(id)arg1 flattenedItems:(id)arg2 errors:(id *)arg3;
- (id)_signingCertificatesApplicableForTeamID:(id)arg1 certificateKind:(id)arg2 isForInstaller:(BOOL)arg3 error:(id *)arg4;
- (id)_itemToSigningInfoMap:(id *)arg1;
- (id)logAspect;
- (id)instantiateProvisioningSnapshot:(id *)arg1;
- (id)initWithRootDistributionItems:(id)arg1 distributionMethod:(id)arg2 teamID:(id)arg3 codesignableDevicesOrNil:(id)arg4 logging:(id)arg5;

@end

