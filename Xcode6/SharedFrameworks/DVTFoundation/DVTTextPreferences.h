

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface DVTTextPreferences : NSObject
{
    double _autoHighlightTokenAppearancesDelay;
    long long _wrappedLinesIndentWidth;
    int _tabKeyIndentingBehavior;
    int _autoSuggestionStyle;
    unsigned long long _defaultLineEndings;
    BOOL _codeFocusOnHover;
}

+ (id)preferences;
+ (id)_userStatisticsValueForKey:(id)arg1;
+ (void)recordMessageTracerStatistics;
+ (id)_defaultDefaults;
+ (void)initialize;
@property(nonatomic) int tabKeyIndentingBehavior; // @synthesize tabKeyIndentingBehavior=_tabKeyIndentingBehavior;
@property BOOL beepOnNonMatchingBrace;
@property BOOL showMatchingBrace;
@property BOOL selectToInsideMatchingQuotes;
@property BOOL selectToInsideMatchingBraces;
@property BOOL selectToMatchingBrace;
@property BOOL scrollToEndOfMatchingBrace;
@property BOOL showCompletionsOnEsc;
@property BOOL completionsIncludeParameters;
@property int autoSuggestionStyle;
@property double autoSuggestCompletionsDelay;
@property BOOL autoSuggestCompletions;
@property BOOL enableTypeOverCompletions;
@property BOOL autoInsertOpenBracket;
@property BOOL autoInsertClosingBrace;
@property BOOL trimWhitespaceOnlyLines;
@property BOOL trimTrailingWhitespace;
@property long long wrappedLinesIndentWidth;
@property BOOL wrapLines;
- (BOOL)characterIsAutoIndent:(unsigned short)arg1;
@property(copy) NSString *autoIndentCharacters;
@property BOOL matchIndentWithLineAbove;
@property BOOL alignConsecutiveSlashSlashComments;
@property BOOL indentSlashSlashComments;
@property long long soloBraceIndentWidth;
@property BOOL indentSoloBraces;
@property BOOL useSyntaxAwareIndenting;
@property long long indentWidth;
@property long long tabWidth;
@property BOOL useTabsToIndent;
@property(readonly) NSArray *availableTextEncodings;
@property unsigned long long defaultTextEncoding;
@property BOOL convertExistingFilesLineEndings;
@property unsigned long long defaultLineEndings;
@property BOOL centersOnScroll;
@property BOOL showInvisibleCharacters;
@property int annotationDisplayPolicy;
@property BOOL showMessageBubbleAnnotations;
@property double autoHighlightTokenAppearancesDelay;
@property BOOL autoHighlightTokenAppearances;
@property long long pageGuideLocation;
@property BOOL showPageGuide;
@property BOOL codeFocusOnHover;
@property BOOL codeFocusFollowsSelection;
@property BOOL showCodeFoldingSidebar;
@property BOOL showLineNumbers;
- (id)init;

@end
