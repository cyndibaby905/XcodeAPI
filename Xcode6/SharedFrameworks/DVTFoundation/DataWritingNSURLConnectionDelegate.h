

#import <Foundation/Foundation.h>

@interface DataWritingNSURLConnectionDelegate : NSObject <NSURLConnectionDelegate>
{
    NSURLResponse *_lastResponse;
    unsigned long long _maxLength;
    NSFileHandle *_fileHandle;
    id <DVTPromise> _promise;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithMaxLength:(unsigned long long)arg1 fileHandle:(id)arg2 promise:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

