

#import <IDEFoundation/IDELocalizationStream.h>

@interface _IDELocalizationStreamBlockBased : IDELocalizationStream
{
    CDUnknownBlockType _onNextBlock;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
}

@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(copy) CDUnknownBlockType onNextBlock; // @synthesize onNextBlock=_onNextBlock;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)initWithOnNextBlock:(CDUnknownBlockType)arg1 onErrorBlock:(CDUnknownBlockType)arg2 onCompletedBlock:(CDUnknownBlockType)arg3;

@end

