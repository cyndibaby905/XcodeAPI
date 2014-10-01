

#import <Foundation/Foundation.h>

@class DVTDevice, NSCountedSet, NSMutableOrderedSet, NSNumber;

@interface IDEGaugeDataQueryCoordinator : NSObject
{
    DVTDevice *_device;
    NSNumber *_pid;
    NSMutableOrderedSet *_queries;
    NSMutableOrderedSet *_services;
    NSCountedSet *_attributes;
}

+ (id)sharedQueryCoordinatorWithPID:(id)arg1 onDevice:(id)arg2;
@property(retain, nonatomic) NSCountedSet *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableOrderedSet *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableOrderedSet *queries; // @synthesize queries=_queries;
@property(retain) NSNumber *pid; // @synthesize pid=_pid;
@property(retain) DVTDevice *device; // @synthesize device=_device;
- (void)handleResultDict:(id)arg1;
- (void)query:(id)arg1 didAddObservedAttributes:(id)arg2 andRemoveObservedAttributes:(id)arg3;
- (void)removeQuery:(id)arg1;
- (void)addQuery:(id)arg1;
- (void)noteAttributesDidChange;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2;

@end

