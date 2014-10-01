

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTSystemActivityToken : NSObject <DVTInvalidation>
{
    unsigned int _displaySleepAssertionID;
    unsigned int _systemSleepAssertionID;
    NSString *_reason;
    unsigned long long _activityOptions;
    id _processInfoToken;
}

+ (id)_descriptionOfOutstandingTokens:(id)arg1 withActivityOptions:(unsigned long long)arg2 logLevel:(int)arg3;
+ (void)initialize;
+ (id)_stringForActivityOptions:(unsigned long long)arg1;
+ (void)_accessSystemActivityTokensWithBlock:(CDUnknownBlockType)arg1;
@property(retain) id processInfoToken; // @synthesize processInfoToken=_processInfoToken;
@property unsigned long long activityOptions; // @synthesize activityOptions=_activityOptions;
@property(copy) NSString *reason; // @synthesize reason=_reason;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
