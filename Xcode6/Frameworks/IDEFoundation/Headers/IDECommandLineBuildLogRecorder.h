

#import <IDEFoundation/IDEActivityLogSectionRecorder.h>

@class DVTMapTable, IDEActivityLogSection, NSMutableArray;

@interface IDECommandLineBuildLogRecorder : IDEActivityLogSectionRecorder
{
    NSMutableArray *_activeSections;
    DVTMapTable *_emittedSubsectionsBySection;
}

+ (void)initialize;
@property(retain) DVTMapTable *emittedSubsectionsBySection; // @synthesize emittedSubsectionsBySection=_emittedSubsectionsBySection;
@property(retain) NSMutableArray *activeSections; // @synthesize activeSections=_activeSections;
- (void)noteDescendantLogSectionDidClose:(id)arg1 inSupersection:(id)arg2;
- (BOOL)_findNewEffectiveSectionFromSubsectionsOfSection:(id)arg1;
- (BOOL)_findNewEffectiveSectionFromSubsectionsOfSection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAppendText:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAddSubsection:(id)arg2;
- (void)_noteLogSection:(id)arg1 didAddSubsection:(id)arg2;
- (void)_emitSection:(id)arg1 inSupersection:(id)arg2;
- (void)_cleanupClosedSection:(id)arg1 inSupersection:(id)arg2;
- (void)_emitString:(id)arg1 withNewlineIfNeeded:(BOOL)arg2;
@property(readonly) IDEActivityLogSection *effectiveSection;
- (id)section;
- (id)initWithLogSection:(id)arg1;

@end

