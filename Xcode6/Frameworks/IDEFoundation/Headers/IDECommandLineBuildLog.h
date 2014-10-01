

#import <IDEFoundation/IDEActivityLogSection.h>

@class NSFileHandle, NSMutableArray;

@interface IDECommandLineBuildLog : IDEActivityLogSection
{
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSMutableArray *_failedSections;
    NSMutableArray *_sectionsWithAnalyzerIssues;
}

+ (Class)logRecorderClass;
@property(retain) NSMutableArray *sectionsWithAnalyzerIssues; // @synthesize sectionsWithAnalyzerIssues=_sectionsWithAnalyzerIssues;
@property(retain) NSMutableArray *failedSections; // @synthesize failedSections=_failedSections;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
- (void)addFailedSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initLogWithTitle:(id)arg1 standardOutput:(id)arg2 standardError:(id)arg3;
- (id)initLogWithTitle:(id)arg1;

@end

