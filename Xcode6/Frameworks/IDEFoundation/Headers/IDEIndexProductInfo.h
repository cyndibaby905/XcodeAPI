

#import <Foundation/Foundation.h>

@class IDEIndex;

@interface IDEIndexProductInfo : NSObject
{
    id <IDEIndexable> _indexable;
    IDEIndex *_index;
    dispatch_queue_t _queue;
    NSDictionary *_buildSettings;
    NSString *_productNameKey;
    NSString *_productName;
    BOOL _unitTest;
    NSString *_targetIdentifier;
    NSString *_workspaceIdentifier;
    NSString *_productType;
}

@property(readonly, nonatomic, getter=isUnitTest) BOOL unitTest; // @synthesize unitTest=_unitTest;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;
@property(readonly, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (void)reportBuildSettings:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *productName;
- (void)productNameHint:(id)arg1;
- (void)unregisterTarget;
- (void)updateBuildSettings;
- (void)registerTarget;
- (id)userInfo;
- (void)dealloc;
- (id)initWithIndexable:(id)arg1 forIndex:(id)arg2;

@end

