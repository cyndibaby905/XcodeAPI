

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTMapTable, DVTStackBacktrace, NSString;

@interface DVTAutosynchingProxyArray : NSArray <DVTInvalidation>
{
    id _observedObject;
    NSString *_observedKeyPath;
    NSArray *_proxies;
    DVTMapTable *_objectsToProxies;
    CDUnknownBlockType _proxyObtainBlock;
    CDUnknownBlockType _proxyDiscardBlock;
    id _kvoNotifyObject;
    NSString *_kvoNotifyKeyPath;
}

+ (void)initialize;
+ (id)proxyArrayObservingObject:(id)arg1 keyPath:(id)arg2 withProxyObtainBlock:(CDUnknownBlockType)arg3;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
@property(copy) NSString *kvoNotifyKeyPath; // @synthesize kvoNotifyKeyPath=_kvoNotifyKeyPath;
@property(retain) id kvoNotifyObject; // @synthesize kvoNotifyObject=_kvoNotifyObject;
@property(copy) CDUnknownBlockType proxyDiscardBlock; // @synthesize proxyDiscardBlock=_proxyDiscardBlock;
@property(copy) CDUnknownBlockType proxyObtainBlock; // @synthesize proxyObtainBlock=_proxyObtainBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (id)proxyForObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
@property(readonly) NSString *observedKeyPath;
- (id)init;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 withProxyObtainBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

