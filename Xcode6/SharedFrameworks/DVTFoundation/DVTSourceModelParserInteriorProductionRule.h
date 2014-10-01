

#import <Foundation/Foundation.h>

@class DVTSourceModelParserProductionRule;

@interface DVTSourceModelParserInteriorProductionRule : NSObject
{
    int _rc;
    BOOL _optional;
    BOOL _repeatable;
    DVTSourceModelParserProductionRule *_prodRule;
    DVTSourceModelParserInteriorProductionRule *_nextCandidate;
    unsigned long long _temporaryLexerFlags;
}

@property(nonatomic) unsigned long long temporaryLexerFlags; // @synthesize temporaryLexerFlags=_temporaryLexerFlags;
@property(retain, nonatomic) DVTSourceModelParserInteriorProductionRule *nextCandidate; // @synthesize nextCandidate=_nextCandidate;
@property(readonly, nonatomic) BOOL repeatable; // @synthesize repeatable=_repeatable;
@property(readonly, nonatomic) BOOL optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) DVTSourceModelParserProductionRule *prodRule; // @synthesize prodRule=_prodRule;
- (NSString *)description;
- (id)initWithProductionRule:(id)arg1 optional:(BOOL)arg2 repeatable:(BOOL)arg3;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

