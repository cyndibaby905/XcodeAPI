

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSAttributedString, NSString;

@interface IDEBatchFindHistoryItem : NSObject <DVTInvalidation>
{
    NSAttributedString *_findAttributedString;
    NSAttributedString *_itemDescription;
    id _payload;
    int _findType;
}

+ (void)initialize;
@property(readonly) int findType; // @synthesize findType=_findType;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
@property(readonly) NSAttributedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly) NSAttributedString *findAttributedString; // @synthesize findAttributedString=_findAttributedString;
- (BOOL)isEqual:(id)other;
@property(readonly) unsigned long long hash;
- (void)primitiveInvalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFindAttributedString:(id)arg1 description:(id)arg2 payload:(id)arg3 findType:(int)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

