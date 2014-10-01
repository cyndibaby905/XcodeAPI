

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IDEBreakpointAction : NSObject <DVTXMLUnarchiving>
{
    NSString *_displayName;
    NSArray *_expressions;
    BOOL _displayable;
    BOOL _displyable;
}

+ (id)_expressionsInString:(id)arg1;
+ (id)propertiesAffectingPersistenceState;
+ (id)_replace:(id)arg1 with:(id)arg2 inString:(id)arg3;
+ (id)_expandMacrosInString:(id)arg1 usingBreakpoint:(id)arg2;
+ (void)initialize;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(getter=isDisplayable) BOOL displayable; // @synthesize displayable=_displyable;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)_expandExpressionsInString:(id)arg1;
- (void)extractAndSetExpressionsFromString:(id)arg1;
- (void)extractAndAddExpressionsFromString:(id)arg1;
- (void)clearExpressions;
- (id)expandExpressionsAndMacrosInString:(id)arg1 usingBreakpoint:(id)arg2;
- (BOOL)haveExpressionsBeenEvaluated;
- (void)resetExpressionResults;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_breakpointActionCommonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSArray *expressions; // @dynamic expressions;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableExpressions; // @dynamic mutableExpressions;
@property(readonly) Class superclass;

@end

