

#import <Foundation/Foundation.h>

@class IDEContainer, NSSet, NSString;

@interface IDEFileReferenceContainerObserverCacheKey : NSObject
{
    IDEContainer *_container;
    NSString *_identifier;
    NSSet *_types;
}

- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)initWithContainerObserver:(id)arg1;
- (id)initWithContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3;

@end

