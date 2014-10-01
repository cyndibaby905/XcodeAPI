

#import <Foundation/Foundation.h>

@class DVTSourceModelParserProductionRule;

@interface DVTSourceModelParserProductionState : NSObject
{
    int _rc;
    DVTSourceModelParserProductionRule *_productionRule;
    unsigned long long _stackOffset;
    DVTSourceModelParserProductionState *_innerState;
    unsigned long long _currentRuleIndex;
    BOOL _canSkipCurrentRule;
    BOOL _hasInnerState;
    BOOL _completeMatch;
    BOOL _epsilonMatch;
    unsigned long long _ignoreNodes;
}

- (NSString *)description;
- (id)reduceToProduction:(id *)arg1 stackOffset:(unsigned long long *)arg2;
- (BOOL)matchNode:(id)arg1 currentStackTop:(unsigned long long)arg2;
- (BOOL)matchToken:(int)arg1 currentStackTop:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long temporaryLexerFlags;
@property(readonly, nonatomic) DVTSourceModelParserProductionRule *scopeProduction;
@property(readonly, nonatomic) unsigned long long ignoreNodes; // @synthesize ignoreNodes=_ignoreNodes;
@property(readonly, nonatomic) BOOL epsilonMatch; // @synthesize epsilonMatch=_epsilonMatch;
@property(readonly, nonatomic) BOOL completeMatch; // @synthesize completeMatch=_completeMatch;
- (void)resetWithProductionRule:(id)arg1 stackOffset:(unsigned long long)arg2;
- (id)initWithProductionRule:(id)arg1 stackOffset:(unsigned long long)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

