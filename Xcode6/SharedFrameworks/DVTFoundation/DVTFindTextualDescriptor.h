

#import <DVTFoundation/DVTFindDescriptor.h>

#import <DVTFoundation/DVTTextlikeFindDescriptor-Protocol.h>

@class NSString;

@interface DVTFindTextualDescriptor : DVTFindDescriptor <DVTTextlikeFindDescriptor>
{
    NSString *_findString;
    int _matchStyle;
    BOOL _caseSensitive;
}

@property(readonly) int matchStyle; // @synthesize matchStyle=_matchStyle;
- (BOOL)caseSensitive;
@property(readonly) NSString *findString; // @synthesize findString=_findString;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 docLocationCreationBlock:(CDUnknownBlockType)arg5;
- (NSRange)_wordBoundaryAtIndex:(unsigned long long)arg1 forString:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)displayString;
- (BOOL)isEqual:(id)other;
@property(readonly) unsigned long long hash;
- (id)initWithString:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

