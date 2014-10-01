

#import <Foundation/Foundation.h>

@protocol DVTSysmonBridgeDelegate;

@interface DVTSysmonBridge : NSObject

@property(nonatomic) BOOL isDisconnected; // @synthesize isDisconnected=_isDisconnected;
@property(nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(nonatomic) id currentRow; // @synthesize currentRow=_currentRow;
@property(retain, nonatomic) id sysmonRequest; // @synthesize sysmonRequest=_sysmonRequest;
@property(retain, nonatomic) NSDate *currentSampleTimestamp; // @synthesize currentSampleTimestamp=_currentSampleTimestamp;
@property(nonatomic) __weak id <DVTSysmonBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)disconnect;
- (void)startUpdates;
- (BOOL)getSInt64Value:(long long *)arg1 forProcessAttribute:(unsigned int)arg2;
- (id)initWithAttributes:(unsigned int)arg1;

@end

