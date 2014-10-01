

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class IDEBuildSchemeAction, IDESchemeBuildableReference, NSString;

@interface IDEBuildActionEntry : NSObject <DVTXMLUnarchiving>
{
    BOOL _isExplicitEntry;
    BOOL _shouldBuildForTesting;
    BOOL _mustBuildForTesting;
    BOOL _shouldBuildForRunning;
    BOOL _mustBuildForRunning;
    BOOL _shouldBuildForProfiling;
    BOOL _mustBuildForProfiling;
    BOOL _shouldBuildForArchiving;
    BOOL _shouldBuildForAnalyzing;
    IDESchemeBuildableReference *_buildableReference;
    IDEBuildSchemeAction *_buildAction;
}

+ (id)keyPathsForValuesAffectingCanRemoveEntry;
+ (id)keyPathsForValuesAffectingCanEditBuildForProfiling;
+ (id)keyPathsForValuesAffectingShouldBuildForProfiling;
+ (id)keyPathsForValuesAffectingCanEditBuildForRunning;
+ (id)keyPathsForValuesAffectingShouldBuildForRunning;
+ (id)keyPathsForValuesAffectingCanEditBuildForTesting;
+ (id)keyPathsForValuesAffectingShouldBuildForTesting;
@property(retain) IDEBuildSchemeAction *buildAction; // @synthesize buildAction=_buildAction;
@property(readonly) IDESchemeBuildableReference *buildableReference; // @synthesize buildableReference=_buildableReference;
@property(nonatomic) BOOL mustBuildForProfiling; // @synthesize mustBuildForProfiling=_mustBuildForProfiling;
@property(nonatomic) BOOL mustBuildForRunning; // @synthesize mustBuildForRunning=_mustBuildForRunning;
@property(nonatomic) BOOL mustBuildForTesting; // @synthesize mustBuildForTesting=_mustBuildForTesting;
@property(readonly) BOOL isExplicitEntry; // @synthesize isExplicitEntry=_isExplicitEntry;
- (void)addBuildableReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildForAnalyzingFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildForArchivingFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildForProfilingFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildForRunningFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildForTestingFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)enableBuildEntry;
- (void)disableBuildEntry;
@property(readonly) BOOL canRemoveEntry;
@property(readonly) BOOL canEditBuildForAnalyzing;
@property BOOL shouldBuildForAnalyzing;
@property(readonly) BOOL canEditBuildForArchiving;
@property BOOL shouldBuildForArchiving;
@property(readonly) BOOL canEditBuildForProfiling;
@property BOOL shouldBuildForProfiling;
@property(readonly) BOOL canEditBuildForRunning;
@property BOOL shouldBuildForRunning;
@property(readonly) BOOL canEditBuildForTesting;
@property BOOL shouldBuildForTesting;
- (void)_makeExplicit;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithBuildableReference:(id)arg1 buildAction:(id)arg2 explicityManaged:(BOOL)arg3;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

