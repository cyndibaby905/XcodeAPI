

#import <Foundation/Foundation.h>

@class NSDate, NSSet, NSURL;

@interface DVTDownloadableIndex : NSObject
{
    NSURL *_source;
    double _refreshInterval;
    NSDate *_refreshDate;
    NSSet *_indexes;
    NSSet *_downloadables;
}

@property(readonly) NSSet *downloadables; // @synthesize downloadables=_downloadables;
@property(readonly) NSSet *indexes; // @synthesize indexes=_indexes;
@property(readonly) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly) NSURL *source; // @synthesize source=_source;
- (NSString *)description;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithPropertyList:(id)arg1 source:(id)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)initWithSource:(id)arg1 refreshInterval:(double)arg2 refreshDate:(id)arg3 indexes:(id)arg4 downloadables:(id)arg5;

@end

