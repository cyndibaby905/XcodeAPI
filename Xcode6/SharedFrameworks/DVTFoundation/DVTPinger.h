

#import <Foundation/Foundation.h>

@class DVTDispatchLock;

@interface DVTPinger : NSObject

+ (id)pingerWithAddress:(id)arg1;
+ (id)pingerWithSocketAddress:(const struct sockaddr *)arg1;
@property unsigned short identifier; // @synthesize identifier=_identifier;
@property int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain) DVTDispatchLock *futuresLock; // @synthesize futuresLock=_futuresLock;
@property(retain) NSMutableDictionary *futures; // @synthesize futures=_futures;
@property struct sockaddr addr; // @synthesize addr=_addr;
@property double timeout; // @synthesize timeout=_timeout;
- (id)ping;
- (void)_promiseWithSequenceNumber:(unsigned long long)arg1 endedAt:(double)arg2;
- (id)_createSourceIfNecessary;
- (void)dealloc;

@end

