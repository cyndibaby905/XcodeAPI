

#import <Foundation/Foundation.h>

@class NSArray, NSDictionary, NSString;

@interface IDEExtendedPlatformInfo : NSObject
{
    NSDictionary *_productTypeIdentifiersToInterfaceBuilderDocumentUTIs;
    BOOL _supportsDeviceSelection;
    BOOL _wantsIntegrityCheckForApplicationCategory;
    BOOL _wantsHiDPIArtworkTargetUpgrade;
    BOOL _canBeJetsamedDuringGPUTracing;
    BOOL _tryOtherArchWhenDesignatedArchFails;
    BOOL _hasQualityOfService;
    BOOL _requiresGameCenterDeviceCompatibilityInfoPlistEntry;
    BOOL _requiresLocalGameCenterEntitlement;
    BOOL _onlySupportsAppStoreDeployment;
    BOOL _appStoreArchivesRequirePreciseSizeEstimate;
    NSString *_platformIdentifier;
    NSString *_bundleFormatApplicationPathFormatString;
    NSString *_embeddedProvisioningProfileName;
    NSString *_deploymentTargetSettingName;
    NSString *_deploymentTargetSettingHumanReadableNameTitleCase;
    NSString *_deploymentTargetSettingHumanReadableNameSentenceCase;
    NSString *_appStoreNameTitleCase;
    NSArray *_hiDPIArtworkTargetUpgradeProductTypesToExclude;
    NSString *_debuggingPlatformName;
    NSString *_gaugeCPUMeterScale;
    NSString *_recordedFramesMinimumVersionString;
    NSString *_codeSignIdentityDefaultAutomaticSelector;
    NSArray *_codeSignIdentityAutomaticSelectors;
    NSString *_conditionalSDKPostfix;
    NSString *_sdkName;
    NSString *_internalSDKName;
    NSArray *_productTypesRequiringProvisioning;
    NSString *_ubiquityContainersDeprecatingVersion;
}

+ (void)_initializePlatformInfo:(id)arg1 fromExtension:(id)arg2;
+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1;
@property(readonly) BOOL appStoreArchivesRequirePreciseSizeEstimate; // @synthesize appStoreArchivesRequirePreciseSizeEstimate=_appStoreArchivesRequirePreciseSizeEstimate;
@property(readonly) NSString *ubiquityContainersDeprecatingVersion; // @synthesize ubiquityContainersDeprecatingVersion=_ubiquityContainersDeprecatingVersion;
@property(readonly) NSArray *productTypesRequiringProvisioning; // @synthesize productTypesRequiringProvisioning=_productTypesRequiringProvisioning;
@property(readonly) BOOL onlySupportsAppStoreDeployment; // @synthesize onlySupportsAppStoreDeployment=_onlySupportsAppStoreDeployment;
@property(readonly, copy) NSString *internalSDKName; // @synthesize internalSDKName=_internalSDKName;
@property(readonly, copy) NSString *sdkName; // @synthesize sdkName=_sdkName;
@property(readonly) BOOL requiresLocalGameCenterEntitlement; // @synthesize requiresLocalGameCenterEntitlement=_requiresLocalGameCenterEntitlement;
@property(readonly) BOOL requiresGameCenterDeviceCompatibilityInfoPlistEntry; // @synthesize requiresGameCenterDeviceCompatibilityInfoPlistEntry=_requiresGameCenterDeviceCompatibilityInfoPlistEntry;
@property(readonly, copy) NSString *conditionalSDKPostfix; // @synthesize conditionalSDKPostfix=_conditionalSDKPostfix;
@property(readonly, copy) NSArray *codeSignIdentityAutomaticSelectors; // @synthesize codeSignIdentityAutomaticSelectors=_codeSignIdentityAutomaticSelectors;
@property(readonly, copy) NSString *codeSignIdentityDefaultAutomaticSelector; // @synthesize codeSignIdentityDefaultAutomaticSelector=_codeSignIdentityDefaultAutomaticSelector;
@property(readonly) BOOL hasQualityOfService; // @synthesize hasQualityOfService=_hasQualityOfService;
@property(readonly, copy) NSString *recordedFramesMinimumVersionString; // @synthesize recordedFramesMinimumVersionString=_recordedFramesMinimumVersionString;
@property(readonly) BOOL tryOtherArchWhenDesignatedArchFails; // @synthesize tryOtherArchWhenDesignatedArchFails=_tryOtherArchWhenDesignatedArchFails;
@property(readonly) BOOL canBeJetsamedDuringGPUTracing; // @synthesize canBeJetsamedDuringGPUTracing=_canBeJetsamedDuringGPUTracing;
@property(readonly, copy) NSString *gaugeCPUMeterScale; // @synthesize gaugeCPUMeterScale=_gaugeCPUMeterScale;
@property(readonly, copy) NSString *debuggingPlatformName; // @synthesize debuggingPlatformName=_debuggingPlatformName;
@property(readonly, copy) NSArray *hiDPIArtworkTargetUpgradeProductTypesToExclude; // @synthesize hiDPIArtworkTargetUpgradeProductTypesToExclude=_hiDPIArtworkTargetUpgradeProductTypesToExclude;
@property(readonly) BOOL wantsHiDPIArtworkTargetUpgrade; // @synthesize wantsHiDPIArtworkTargetUpgrade=_wantsHiDPIArtworkTargetUpgrade;
@property(readonly, copy) NSString *appStoreNameTitleCase; // @synthesize appStoreNameTitleCase=_appStoreNameTitleCase;
@property(readonly) BOOL wantsIntegrityCheckForApplicationCategory; // @synthesize wantsIntegrityCheckForApplicationCategory=_wantsIntegrityCheckForApplicationCategory;
@property(readonly, copy) NSString *deploymentTargetSettingHumanReadableNameSentenceCase; // @synthesize deploymentTargetSettingHumanReadableNameSentenceCase=_deploymentTargetSettingHumanReadableNameSentenceCase;
@property(readonly, copy) NSString *deploymentTargetSettingHumanReadableNameTitleCase; // @synthesize deploymentTargetSettingHumanReadableNameTitleCase=_deploymentTargetSettingHumanReadableNameTitleCase;
@property(readonly, copy) NSString *deploymentTargetSettingName; // @synthesize deploymentTargetSettingName=_deploymentTargetSettingName;
@property(readonly) BOOL supportsDeviceSelection; // @synthesize supportsDeviceSelection=_supportsDeviceSelection;
@property(readonly, copy) NSString *embeddedProvisioningProfileName; // @synthesize embeddedProvisioningProfileName=_embeddedProvisioningProfileName;
@property(readonly, copy) NSString *bundleFormatApplicationPathFormatString; // @synthesize bundleFormatApplicationPathFormatString=_bundleFormatApplicationPathFormatString;
@property(readonly, copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (id)supportedInterfaceBuilderDocumentUTIsForProductType:(id)arg1;
@property(readonly) Class portalEntitlementsCoordinatorPlatformClass;

@end

