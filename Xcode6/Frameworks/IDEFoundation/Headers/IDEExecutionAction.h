

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class IDEScheme, NSDictionary, NSString;

@interface IDEExecutionAction : NSObject <DVTXMLUnarchiving>
{
    NSString *_title;
    IDEScheme *_runContext;
}

+ (id)actionType;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)schemeObjectGraphSetupComplete;
@property(readonly) BOOL needsCurrentArchiveVersion;
- (void)setTitleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)operationForExecutionWithBuildParameters:(id)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *actionEnvironmentVariables;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

