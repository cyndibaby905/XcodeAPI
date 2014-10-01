

#import <IDEFoundation/IDERunnable.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTFilePath, NSString;

@interface IDEPathRunnable : IDERunnable <DVTXMLUnarchiving>

+ (id)keyPathsForValuesAffectingHasRunnablePath;
@property(readonly, copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void)setBundleIdentifier:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setFilePathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (int)runnableType;
- (id)runnableUTIType:(id *)arg1;
- (BOOL)hasRunnablePath;
- (id)pathToRunnableForBuildParameters:(id)arg1;
- (id)toolTip;
- (id)bundleIdentifier;
- (id)displayName;
@property(readonly, copy) NSString *description;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

