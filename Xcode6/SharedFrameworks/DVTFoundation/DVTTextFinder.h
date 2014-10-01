

#import <Foundation/Foundation.h>

@class DVTFindDescriptor;

@protocol DVTTextFindable;

@interface DVTTextFinder : NSObject
{
    NSMutableArray *_findResults;
    id <DVTTextFindable> _findable;
    DVTFindDescriptor *_findDescriptor;
    BOOL _findComplete;
    BOOL _findableSupportsReplace;
}

@property(readonly) id <DVTTextFindable> findable; // @synthesize findable=_findable;
@property(readonly) DVTFindDescriptor *findDescriptor; // @synthesize findDescriptor=_findDescriptor;
- (unsigned long long)_findIndexForLocation:(id)arg1 inResults:(id)arg2;
- (BOOL)_findNext;
- (long long)_compareLocation:(id)arg1 toLocation:(id)arg2;
- (id)findResultsFrom:(id)arg1 to:(id)arg2 beforeDate:(id)arg3;
- (BOOL)findBeforeDate:(id)arg1;
- (id)findResultAfter:(id)arg1;
- (id)findResultBefore:(id)arg1;
@property(readonly) unsigned long long foundCount;
@property(readonly) NSArray *findResults;
@property(readonly) BOOL findComplete;
- (id)initWithFindDescriptor:(id)arg1 onFindable:(id)arg2;

@end

