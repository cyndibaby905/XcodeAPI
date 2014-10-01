

#import <Foundation/Foundation.h>

@interface DVTCodesignResolver : NSObject
{
}

+ (id)appStoreProfileCodesignableDeviceSentinel;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 platform:(id)arg4 destinationDevice:(id)arg5 withError:(id *)arg6;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 platform:(id)arg5 destinationDevice:(id)arg6 withError:(id *)arg7;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg5 platform:(id)arg6 destinationDevice:(id)arg7 withError:(id *)arg8;
+ (id)parametersForTeamID:(id)arg1 automaticIdentitySelector:(id)arg2 bundleIdentifier:(id)arg3 entitlements:(id)arg4 requiredFeatures:(id)arg5 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg6 platform:(id)arg7 destinationDevice:(id)arg8 requiresProfile:(_Bool)arg9 withError:(id *)arg10;
+ (id)parametersForTeamID:(id)arg1 bundleIdentifier:(id)arg2 entitlements:(id)arg3 requiredFeatures:(id)arg4 applicableSigningIdentityCertificates:(id)arg5 platform:(id)arg6 destinationDevice:(id)arg7 requiresProfile:(_Bool)arg8 certificateUtilities:(id)arg9 logAspect:(id)arg10 withError:(id *)arg11;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 certificateUtilities:(id)arg4 withError:(id *)arg5;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 certificateUtilities:(id)arg5 withError:(id *)arg6;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg5 certificateUtilities:(id)arg6 withError:(id *)arg7;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 platform:(id)arg4 destinationDevice:(id)arg5 certificateUtilities:(id)arg6 withError:(id *)arg7;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg5 platform:(id)arg6 destinationDevice:(id)arg7 certificateUtilities:(id)arg8 withError:(id *)arg9;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 platform:(id)arg5 destinationDevice:(id)arg6 certificateUtilities:(id)arg7 withError:(id *)arg8;
+ (id)parametersForIdentity:(id)arg1 bundleIdentifier:(id)arg2 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg3 certificateUtilities:(id)arg4 withError:(id *)arg5;
+ (id)_identitySigningCertificatesInArray:(id)arg1 matchingIdentityString:(id)arg2 withError:(id *)arg3;
+ (id)parametersForTeamID:(id)arg1 bundleIdentifier:(id)arg2 entitlements:(id)arg3 requiredFeatures:(id)arg4 applicableSigningIdentityCertificates:(id)arg5 platform:(id)arg6 requiredCodesignableDevices:(id)arg7 requiresProfile:(_Bool)arg8 profileManager:(id)arg9 logAspect:(id)arg10 withError:(id *)arg11;
+ (id)parametersForTeamID:(id)arg1 bundleIdentifier:(id)arg2 entitlements:(id)arg3 requiredFeatures:(id)arg4 applicableSigningIdentityCertificates:(id)arg5 platform:(id)arg6 destinationDevice:(id)arg7 requiresProfile:(_Bool)arg8 profileManager:(id)arg9 logAspect:(id)arg10 withError:(id *)arg11;
+ (id)parametersForTeamID:(id)arg1 bundleIdentifier:(id)arg2 entitlements:(id)arg3 requiredFeatures:(id)arg4 applicableSigningIdentityCertificates:(id)arg5 platform:(id)arg6 destinationDevice:(id)arg7 requiresProfile:(_Bool)arg8 logAspect:(id)arg9 withError:(id *)arg10;
+ (id)parametersForTeamID:(id)arg1 certificateKind:(id)arg2 bundleIdentifier:(id)arg3 entitlements:(id)arg4 requiredFeatures:(id)arg5 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg6 platform:(id)arg7 destinationDevice:(id)arg8 requiresProfile:(_Bool)arg9 certificateUtilities:(id)arg10 withError:(id *)arg11;
+ (id)parametersForTeamID:(id)arg1 automaticIdentitySelector:(id)arg2 bundleIdentifier:(id)arg3 entitlements:(id)arg4 requiredFeatures:(id)arg5 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg6 platform:(id)arg7 destinationDevice:(id)arg8 requiresProfile:(_Bool)arg9 certificateUtilities:(id)arg10 withError:(id *)arg11;
+ (id)signingIdentityCertificatesForTeamID:(id)arg1 certificateKind:(id)arg2 keychainToSearchIn:(struct OpaqueSecKeychainRef *)arg3 certificateManager:(id)arg4;
+ (id)parametersForAdHocSigning:(id)arg1;
+ (id)parametersForNullSigning:(id)arg1;
+ (id)parametersForAdHocSigning;
+ (id)parametersForNullSigning;

@end

