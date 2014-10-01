

#import <Foundation/Foundation.h>

@class NSCountedSet;

@interface DVTMacroExpansionStatistics : NSObject
{
    int _lock;
    unsigned long long _numMacroDefinitionLookups;
    NSCountedSet *_macroNameLookupCounts;
    unsigned long long _numMacroLookupCursorsCreated;
    NSCountedSet *_macroNameLookupCursorCreationCounts;
    unsigned long long _numFirstDefinitionRetrievals;
    NSCountedSet *_macroNameFirstDefnRetrievalCounts;
}

+ (id)defaultStatistics;
@property(readonly) NSCountedSet *macroNameFirstDefnRetrievalCounts; // @synthesize macroNameFirstDefnRetrievalCounts=_macroNameFirstDefnRetrievalCounts;
@property(readonly) unsigned long long numFirstDefinitionRetrievals; // @synthesize numFirstDefinitionRetrievals=_numFirstDefinitionRetrievals;
@property(readonly) NSCountedSet *macroNameLookupCursorCreationCounts; // @synthesize macroNameLookupCursorCreationCounts=_macroNameLookupCursorCreationCounts;
@property(readonly) unsigned long long numMacroLookupCursorsCreated; // @synthesize numMacroLookupCursorsCreated=_numMacroLookupCursorsCreated;
@property(readonly) NSCountedSet *macroNameLookupCounts; // @synthesize macroNameLookupCounts=_macroNameLookupCounts;
@property(readonly) unsigned long long numMacroDefinitionLookups; // @synthesize numMacroDefinitionLookups=_numMacroDefinitionLookups;
- (void)recordRetrievalOfFirstDefinitionForMacroName:(id)arg1;
- (void)recordLookupCursorCreationForMacroName:(id)arg1;
- (void)recordLookupEventForMacroName:(id)arg1;
@property(readonly) unsigned long long numUniqueMacroNamesLookedUp;
- (id)init;

@end

