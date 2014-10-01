

#import <Foundation/Foundation.h>

@class DVTKnownStringMapping;

@interface DVTMutableKnownStringSet : NSMutableSet
{
    DVTKnownStringMapping *_knownStringMapping;
    CDUnknownFunctionPointerType _stringToIndexFn;
    CDUnknownFunctionPointerType _indexToStringFn;
    unsigned long long _maxKnownStringIndex;
    unsigned long long _knownStringCount;
    char *_knownStringBits;
    NSMutableSet *_unknownStringSet;
}

+ (id)setWithKnownStringMapping:(id)arg1;
- (id)longDescription;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)knownStringMapping;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithKnownStringMapping:(id)arg1;

@end

