

#import <IDEFoundation/IDERunnable.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTFilePath;

@interface IDERemoteRunnable : IDERunnable <DVTXMLUnarchiving>

- (id)remotePath;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setRemotePathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (int)runnableType;
- (id)pathToRunnableForBuildParameters:(id)arg1;
- (id)toolTip;
- (id)displayName;
- (id)runnableUTIType:(id *)arg1;
- (BOOL)hasRunnablePath;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithRemotePath:(id)arg1 bundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

