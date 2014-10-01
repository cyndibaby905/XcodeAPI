

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class NSArray, NSURL;

@interface IDELocalizationXLIFFComparisonContext : IDELocalizationWorkContext
{
    NSURL *_destinationURL;
    NSArray *_issues;
    NSArray *_filesWithChanges;
}

@property(retain) NSArray *filesWithChanges; // @synthesize filesWithChanges=_filesWithChanges;
@property(retain) NSArray *issues; // @synthesize issues=_issues;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void)recordFileChangeForImportUrl:(id)arg1 exportUrl:(id)arg2 original:(id)arg3 foundInProject:(BOOL)arg4;
- (void)recordExtraTranslationUnit:(id)arg1 appendedIncomingRange:(NSRange)arg2 appendedProjectRange:(NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordMissingTranslationUnit:(id)arg1 appendedIncomingRange:(NSRange)arg2 appendedProjectRange:(NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordMissingFile:(id)arg1 appendedIncomingRange:(NSRange)arg2 appendedProjectRange:(NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordExtraFile:(id)arg1 appendedIncomingRange:(NSRange)arg2 appendedProjectRange:(NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordEmptyTarget:(id)arg1 appendedIncomingRange:(NSRange)arg2 appendedProjectRange:(NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordMismatchedSource:(id)arg1 projectStringValue:(id)arg2 appendedIncomingRange:(NSRange)arg3 appendedProjectRange:(NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (void)recordIssue:(int)arg1 message:(id)arg2 appendedIncomingRange:(NSRange)arg3 appendedProjectRange:(NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;

@end

