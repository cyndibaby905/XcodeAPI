

#import <Foundation/Foundation.h>

@interface DataGatheringNSURLConnectionDelegate : NSObject <NSURLConnectionDelegate>
{
    NSURLResponse *_lastResponse;
    NSMutableData *_gatheringData;
    unsigned long long _maxLength;
    id <DVTPromise> _promise;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithMaxLength:(unsigned long long)arg1 promise:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

