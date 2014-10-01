

#import <Foundation/Foundation.h>

@class DVTMapTable, DVTWeakInterposer, NSCountedSet;

@interface DVTObservableObjectProxy : NSObject
{
    DVTWeakInterposer *_representedObject_dvtWeakInterposer;
    DVTMapTable *_observationInfo;
    NSCountedSet *_uniqueObservedKeyPaths;
}

- (id)valueForUndefinedKey:(id)arg1;
- (id)registeredKeyPaths;
@property(nonatomic) __weak id representedObject;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)changeDictionaryForNotifications;
- (void)removeObservedKeyPath:(id)arg1;
- (void)addObservedKeyPath:(id)arg1;
- (void)forgetObservationInfoForObserver:(id)arg1;
- (void)setObservationInfo:(id)arg1 forObserver:(id)arg2;
- (id)observationInfoForObserver:(id)arg1;
- (id)init;

@end

