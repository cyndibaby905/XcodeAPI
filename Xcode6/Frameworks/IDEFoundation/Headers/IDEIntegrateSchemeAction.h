

#import <IDEFoundation/IDESchemeAction.h>

@interface IDEIntegrateSchemeAction : IDESchemeAction
{
    BOOL _performsAnalyze;
    BOOL _performsTest;
    BOOL _performsArchive;
}

+ (id)keyPathsForValuesAffectingHasDefaultValues;
+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (BOOL)shouldAllowCustomPhaseActions;
@property(nonatomic) BOOL performsArchive; // @synthesize performsArchive=_performsArchive;
@property(nonatomic) BOOL performsTest; // @synthesize performsTest=_performsTest;
@property(nonatomic) BOOL performsAnalyze; // @synthesize performsAnalyze=_performsAnalyze;
- (void)setPerformsArchiveFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPerformsTestFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPerformsAnalyzeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (BOOL)hasDefaultValues;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (id)mutablePostPhaseExecutionActions;
- (id)postPhaseExecutionActions;
- (id)mutablePrePhaseExecutionActions;
- (id)prePhaseExecutionActions;
- (void)_commonInit;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

@end

