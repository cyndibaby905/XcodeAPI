

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDeviceApplication-Protocol.h>

@class NSSet, NSString;

@interface DVTDeviceApplicationBase : NSObject <DVTDeviceApplication>
{
    BOOL _isFairPlayEncrypted;
    BOOL _isLeaf;
    BOOL _isHidden;
    NSString *_name;
    NSString *_version;
    NSString *_bundleIdentifier;
    NSSet *_children;
    NSSet *_rootContainerApplicationItems;
    NSString *_installedPath;
}

@property(copy) NSString *installedPath; // @synthesize installedPath=_installedPath;
@property BOOL isHidden; // @synthesize isHidden=_isHidden;
@property BOOL isLeaf; // @synthesize isLeaf=_isLeaf;
@property(retain) NSSet *rootContainerApplicationItems; // @synthesize rootContainerApplicationItems=_rootContainerApplicationItems;
@property(retain) NSSet *children; // @synthesize children=_children;
@property BOOL isFairPlayEncrypted; // @synthesize isFairPlayEncrypted=_isFairPlayEncrypted;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

