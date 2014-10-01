

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTTextFindable-Protocol.h>

@class DVTFindDescriptor;

@interface IDETextIndexTextFindableWrapper : NSObject <DVTTextFindable>
{
    CDUnknownBlockType _queryFilterBlock;
    CDUnknownBlockType _findableCreationBlock;
    id <DVTTextFindable> _textFindable;
    DVTFindDescriptor *_previousFindDescriptor;
    BOOL _previousFindDescriptorPassedFilter;
}

- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)initWithQueryFilterBlock:(CDUnknownBlockType)arg1 andFindableCreationBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

