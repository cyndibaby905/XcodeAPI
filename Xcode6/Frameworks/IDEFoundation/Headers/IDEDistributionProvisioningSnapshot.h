

#import <Foundation/Foundation.h>

@class DVTMutableOrderedDictionary, IDEDistributionItemSigningInfo;

@interface IDEDistributionProvisioningSnapshot : NSObject
{
    DVTMutableOrderedDictionary *_itemToSigningInfoMap;
    IDEDistributionItemSigningInfo *_installerSigningInfo;
}

@property(retain) IDEDistributionItemSigningInfo *installerSigningInfo; // @synthesize installerSigningInfo=_installerSigningInfo;
@property(retain) DVTMutableOrderedDictionary *itemToSigningInfoMap; // @synthesize itemToSigningInfoMap=_itemToSigningInfoMap;
- (NSString *)description;

@end

