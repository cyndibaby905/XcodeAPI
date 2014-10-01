

#import <Foundation/Foundation.h>

@class DVTSourceCodeSymbolKind, NSAttributedString, NSString;

@interface IDEIndexCompletionItem : NSObject
{
    void *_completionResult;
    NSString *_displayText;
    NSString *_displayType;
    NSString *_completionText;
    NSAttributedString *_descriptionText;
    NSString *_parentText;
    DVTSourceCodeSymbolKind *_symbolKind;
    double _priority;
    NSString *_name;
    BOOL _notRecommended;
}

@property double priority; // @synthesize priority=_priority;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) BOOL notRecommended;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly) NSString *completionText;
@property(readonly) NSString *displayType;
@property(readonly) NSString *displayText;
- (void)_fillInTheRest;
- (NSString *)description;
- (id)initWithCompletionResult:(void *)arg1;

@end

