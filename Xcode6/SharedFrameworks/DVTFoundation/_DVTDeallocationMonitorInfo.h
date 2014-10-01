

#import <Foundation/Foundation.h>

@class DVTWeakInterposer, NSString;

@interface _DVTDeallocationMonitorInfo : NSObject
{
    DVTWeakInterposer *_uncollectedObject_dvtWeakInterposer;
    NSString *_name;
    NSString *_hierarchyIdentifier;
    unsigned long long _invalidationDepth;
    unsigned long long _survivedCount;
}

@property unsigned long long survivedCount; // @synthesize survivedCount=_survivedCount;
@property(readonly) unsigned long long invalidationDepth; // @synthesize invalidationDepth=_invalidationDepth;
@property(readonly, copy) NSString *hierarchyIdentifier; // @synthesize hierarchyIdentifier=_hierarchyIdentifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)initWithUncollectedObject:(id)arg1;
- (void)setUncollectedObject:(id)arg1;
@property(readonly) __weak id uncollectedObject;

@end

