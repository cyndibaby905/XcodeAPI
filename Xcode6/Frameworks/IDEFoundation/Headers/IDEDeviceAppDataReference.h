

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSString;

@interface IDEDeviceAppDataReference : NSObject <DVTXMLUnarchiving>
{
    NSString *_resolvedPath;
    NSString *_appDataBundleId;
    NSString *_appDataDownloadDate;
}

@property(copy) NSString *appDataDownloadDate; // @synthesize appDataDownloadDate=_appDataDownloadDate;
@property(copy) NSString *appDataBundleId; // @synthesize appDataBundleId=_appDataBundleId;
@property(copy) NSString *resolvedPath; // @synthesize resolvedPath=_resolvedPath;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setAppDataDownloadDateFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAppDataBundleIdFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setResolvedPathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

